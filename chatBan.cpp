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
ll Sum(ll m){
    return m*(m+1)/2;
}
ll binarySearch1(ll x, ll hi, ll lo){
    while(hi-lo>1){
        ll mid = lo+(hi-lo)/2;
        if(Sum(mid)>=x){
            hi = mid;
        }
        else{
            lo = mid+1;
        }
    }
    if(Sum(lo)>=x)    return lo;
    else   return hi;
}
void solve(){
    ll k,x;
    cin>>k>>x;
    ll mid = k*(k+1)/2;
    ll ans = 0;
    ll hi = k*k;
    if(x<=mid){
        ans = binarySearch1(x,k,1);
    }
    else{
        ll rem = (k*k) - x;
        ll lo = 0;
        ll hi = k-1;
        while(hi-lo>1){
            ll mid = lo+(hi-lo)/2;
            if(Sum(mid)<=rem){
                lo = mid;
            }
            else{
                hi = mid-1;
            }
        }
        if(Sum(hi)<=rem){
            ans = 2*k - 1 - hi; 
        }
        else{
            ans = 2*k - 1 - lo;
        }
    }
    cout<<ans<<endl;
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