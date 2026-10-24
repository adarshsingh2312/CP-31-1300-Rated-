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

void solve(){
    ll n;
    cin>>n;
    vll a(n);
    ll prod = 1;
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        ll x = a[i];
        for(ll j=2; j*j<=x; j++){
            while(x%j==0){
                x/=j;
                mp[j]++;
            }
        }
        if(x>1){
            mp[x]++;
        }
    }
    
    for(auto &pr : mp){
        if(pr.second%n!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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