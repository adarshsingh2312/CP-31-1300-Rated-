//Jai shree ram
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
    for(ll k=2; k<1000; k++){
        ll ele = k*k*k;
        ll sum = (1 + k + pow(k,2ll));
        while(sum<=n){
            if(sum==n){
                cout<<"YES"<<endl;
                return;
            }
            sum+=ele;
            ele*=k;
        }
        if(sum==n){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
