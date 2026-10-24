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
int dfs(int root, vector<vi>&adj,string &s, int &cnt){
    if(adj[root].size()==0){
        return (s[root-1]=='B' ? -1 : 1);
    }
    int sum = 0;
    for(int val : adj[root]){
        sum += dfs(val,adj,s,cnt);
    }
    sum += (s[root-1]=='B' ? -1 : 1);
    if(sum==0)  cnt++;
    return sum;
}
void solve(){
    int cnt = 0;
    int n;
    cin>>n;
    vi a(n+1);
    a[1] = 1;
    for(int i=2; i<=n; i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    vector<vi> adj(n+1);
    for(int i=2; i<=n; i++){
        int parent = a[i];
        adj[parent].push_back(i);
    }
    dfs(1,adj,s, cnt);
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