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
ll binarySearch(vll &a, ll i){
    ll lo = 0;
    ll hi = i;
    while(hi-lo>1){
        ll mid = lo+(hi-lo)/2;
        if(a[mid] < i-mid+1){
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }
    if(a[lo]>=(i-lo+1)) return (i-lo+1);
    else    return (i-hi+1);
}

void solve(){
    ll n;
    cin>>n;
    vll a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vll ans(n);
    for(ll i=n-1; i>=0; i--){
        ans[i] = binarySearch(a,i);
    }
    for(ll i=0; i<n; i++){
       cout<<ans[i]<<" ";
    }
    cout<<endl;
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