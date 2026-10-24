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
    map<int,int>mp;
    vector<vi> v(n);
    bool possible = false;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        for(int j=0; j<k; j++){
            int ele;
            cin>>ele;
            v[i].push_back(ele);
            mp[ele]++;
        }
    }
    for(int i=0; i<n; i++){
        bool all = true;
        for(int val : v[i]){
            if(mp[val]==1){
                all = false;
                break;
            }
        }
        if(all) {
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