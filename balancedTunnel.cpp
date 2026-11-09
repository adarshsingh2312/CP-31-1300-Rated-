// Jai shree ram
// Will grind till end...
// 1237-B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<pair<int,int>>
void solve(){
    int n;
    cin>>n;
    vi a(n+1);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    vi b(n+1);
    vi ex(n+1);
    for(int i=1; i<=n; i++){
        cin>>b[i];
        ex[b[i]] = i;
    }
    vi pf(n+1);
    for(int i=1; i<=n; i++){
        pf[i] = max(pf[i-1],ex[a[i-1]]);
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        // cout<<pf[i]<<" ";
        if(ex[a[i]]<pf[i]){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        solve();
    }

    return 0;
}