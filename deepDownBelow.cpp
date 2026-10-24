//Jai shree ram
// Will grind till end...
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
bool comp(const pll &a, const pll &b){
    return a.second < b.second;
}
void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> pr;
    vector<vector<ll>>v(n);
    for(ll i=0; i<n; i++){ 
        ll k;
        cin>>k;
        for(ll j=0; j<k; j++){
            ll x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(ll i=0; i<n; i++){
        ll needed = v[i][0]+1;
        for(ll j=0; j<v[i].size(); j++){
            needed = max(needed,v[i][j]+1-j);
        }
        pr.push_back({i,needed});
    }
    sort(pr.begin(),pr.end(),comp);
    ll c = 0;
    ll start = 1;
    for(ll i=0; i<pr.size(); i++){
        ll idx = pr[i].first;
        ll need = pr[i].second;
        for(ll j=0; j<v[idx].size(); j++){
            start = max(start, v[idx][j]+1-c);
            c++;
        }
    }
    cout<<start<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}