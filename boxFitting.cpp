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

void solve(vll &pow){
    ll n,W;
    cin>>n>>W;
    vll w(n);
    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        cin>>w[i];
        mp[w[i]]++;
    }
    ll ans = 0;
    while(mp.size()!=0){
        ll wt = W;
        for(ll i=20; i>=0; i--){
            while(mp[pow[i]]>0 && pow[i]<=wt){
                wt-=pow[i];
                mp[pow[i]]--;
            }
            if(mp[pow[i]]==0)   mp.erase(pow[i]);
        }
        ans+=1;
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vll pow(21);
    pow[0] = 1;
    for(ll i=1; i<=20; i++){
        pow[i] = pow[i-1]*2;
    }
    int t = 1;
    cin>>t;
    while(t--){
        solve(pow);
    }

    return 0;
}