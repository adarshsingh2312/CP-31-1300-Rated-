//Jai shree ram
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<pair<int,int>>
class Node{
    public:
    int val;
    Node * left;
    Node * right;
    Node(int val){
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};
const ll M = 998244353;
const ll N = 2e5 +10;
ll fact[N];
void precompute() {
    fact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = (fact[i-1] * i) % M;
    }
}
void solve(){
    string s;
    cin>>s;
    ll n = s.size();
    vll rem;
    for(ll i=1; i<n; i++){
        ll cnt = 0;
        while(s[i]==s[i-1]){
            cnt++;
            i++;
        }
        if(cnt!=0)  cnt++;
        if(cnt!=0){
            rem.push_back(cnt);
        }
    }
    ll mini = 0;
    for(ll i=0; i<rem.size(); i++){
        mini+=(rem[i]-1);
    }
    ll seq = fact[mini];
    for(ll i=0; i<rem.size(); i++){
        seq = ((seq*rem[i])) % M;
    }
    cout<<mini<<" "<<seq<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    precompute(); 
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}