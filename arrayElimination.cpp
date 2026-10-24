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

void solve(){
    ll n;
    cin>>n;
    vll a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vll ans;
    vll hsh(31);
    bool possible = true;
    for(ll i=0; i<n; i++){
        ll num = a[i];
        for(int j=30; j>=0; j--){
            ll bit = ((1<<j) & num);
            if(bit!=0){
                hsh[j]++;
            }
        }
    }
    for(ll d=1; d<=n; d++){
        bool poss = true;
        for(ll i=0; i<=30; i++){
            if(hsh[i]%d!=0){
                poss = false;
                break;
            }
        }
        if(poss)    ans.push_back(d);
    }
    for(ll val : ans){
        cout<<val<<" ";
    }
    cout<<'\n';
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