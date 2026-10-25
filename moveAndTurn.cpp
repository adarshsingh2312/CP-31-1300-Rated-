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
    ll ans = 0;
    if(n%2==0){
        ll h = n/2;
        ll v = n/2;
        ans = ((h+1) * (v+1));
    }
    else{
        ll h = n/2 + 1;
        ll v = n/2;
        ans = 2*((h+1) * (v+1));
    }
    cout<<ans<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }

    return 0;
}