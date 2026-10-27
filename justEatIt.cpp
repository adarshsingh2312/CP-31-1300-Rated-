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
    int n;
    cin>>n;
    vll a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vll pf(n+1);
    for(int i=1; i<=n; i++){
        pf[i] = pf[i-1] + a[i-1];
    }
    ll ysr = pf[n];
    bool isNeg = false;
    bool isGrt = true;
    for(int i=1; i<n; i++){
        if(pf[i]<=0){
            isNeg = true;
            break;
        }
        if(pf[i]>=ysr){
            isGrt = false;
            break;
        }
    }
    if(isGrt && !isNeg){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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