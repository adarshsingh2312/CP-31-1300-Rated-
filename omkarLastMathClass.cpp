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
bool isPrime(ll n){
    if(n==2)    return true;
    for(ll i=2; (i*i)<=n; i++){
        if(n%i==0)  return false;
    }
    return true;
}
void solve(){
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<(n/2)<<" "<<n/2<<endl;
        return;
    } 
    if(isPrime(n)){
        cout<<1<<" "<<(n-1)<<endl;
        return;
    }
    vll divs;
    for(ll i=2; (i*i)<=n; i++){
        if(n%i==0){
            ll e1 = i;
            ll e2 = n/i;
            if(e1!=n)   divs.push_back(i);
            if(e2!=n && e2!=e1) divs.push_back(e2);
        }
    }
    sort(divs.begin(),divs.end());
    ll ans = divs[divs.size()-1];
    cout<<ans<<" "<<(n-ans)<<endl;
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