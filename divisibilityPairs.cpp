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

void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    vll a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll cnt = 0;
    map<pll,ll> mp;
    for(ll i=0; i<n; i++){
        ll modY = a[i]%y;
        ll modX = a[i]%x;
        pll p = {modY,modX};
        ll ry = a[i]%y;
        ll rx = (x-modX)%x;
        pll p2 = {ry,rx};
        cnt += mp[p2];
        mp[p]++;
    }
    cout<<cnt<<endl;
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