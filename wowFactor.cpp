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
    string s;
    cin>>s;
    ll n = s.size();
    vll L(n+1);
    vll R(n+1);
    for(ll i=1; i<n; i++){
        if(s[i]=='v' && s[i-1]=='v'){
            L[i] = L[i-1]+1;
        }
        else{
            L[i] = L[i-1];
        }
    }
    for(ll i=n-2; i>=0; i--){
        if(s[i]=='v' && s[i+1]=='v'){
            R[i] = R[i+1]+1;
        }
        else{
            R[i] = R[i+1];
        }
    }
    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(s[i]=='o'){
            ll val = L[i]*R[i];
            ans += val;
        }
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