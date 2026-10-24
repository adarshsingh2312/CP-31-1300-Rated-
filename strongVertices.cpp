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

bool comp(const pair<ll,ll> &a, const pair<ll,ll> &b){
    if(a.first!=b.first)    return a.first<b.first;
    return a.second<b.second;
}

void solve(){
    ll n;
    cin>>n;
    vll a(n+1);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    vll b(n+1);
    for(ll i=1; i<=n; i++){
        cin>>b[i];
    }
    vector<pair<ll,ll>> diff(n+1);
    for(ll i=1; i<=n; i++){
        diff[i].first = a[i]-b[i];
        diff[i].second = i;
    }
    sort(diff.begin()+1,diff.end(),comp);
    ll maxi = diff[n].first;
    map<ll,vll> mp;
    for(ll i=1; i<=n; i++){
        if(diff[i].first==maxi){
            mp[maxi].push_back(diff[i].second);
        }
    }
    cout<<mp[maxi].size()<<endl;
    for(auto &pr : mp){
        for(int val : pr.second){
            cout<<val<<" ";
        }
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