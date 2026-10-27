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
    vll p(n+1);
    for(ll i=1; i<=n; i++){
        cin>>p[i];
    }
    vll ans;
    ans.push_back(p[1]);
    for(ll i=2; i<=n-1; i++){
        if((p[i]>p[i-1] && p[i]>p[i+1]) || (p[i]<p[i-1] && p[i]<p[i+1])){ // peaks and valleys
            ans.push_back(p[i]); 
        }
    }
    ans.push_back(p[n]);
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++){
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