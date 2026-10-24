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
    ll n,k;
    cin>>n>>k;
    vll a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vll hsh(31);
    for(ll i=0; i<n; i++){
        ll num = a[i];
        for(ll j=0; j<=30; j++){
            ll e = ((1<<j) & num);
            if(e!=0)    hsh[j]++;
        }
    }
    ll ans = 0;
    for(ll i=30; i>=0; i--){
        ll deficit = n-hsh[i];
        if(deficit==0){
            ans += pow[i];
        }
        else if(k>=deficit){
            k-=deficit;
            ans += pow[i];
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vll pow(31);
    pow[0] = 1;
    for(ll i=1; i<31; i++){
        pow[i] = pow[i-1] * 2;
    }
    int t = 1;
    cin>>t;
    while(t--){
        solve(pow);
    }

    return 0;
}