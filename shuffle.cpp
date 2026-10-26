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
    ll n,x,m;
    cin>>n>>x>>m;
    set<int>s;
    s.insert(x);
    for(ll i=0; i<m; i++){
        ll l,r;
        cin>>l>>r;
        if(i==0){
            if(x>=l && x<=r){
                s.insert(l);
                s.insert(r);
            }
        }
        else{
            int st = *s.begin();
            auto it = s.end();
            --it;
            int end = *it;
            if(r<st || l>end){
                continue;
            }
            else{ // overlap
                s.insert(l);
                s.insert(r);
            }
        }
    }
    if(s.size()==1){
        cout<<1<<endl;
    }
    else{
        ll st = *s.begin();
        auto it = s.end();
        --it;
        int end = *it;
        cout<<(end-st)+1<<endl;
    }
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