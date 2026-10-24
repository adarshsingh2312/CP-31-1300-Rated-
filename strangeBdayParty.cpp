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
	ll n,m;
	cin>>n>>m;
	vll a(n+1);
	vll c(m+1);
	ll ans = 0;
	for(ll i=1; i<=n; i++){
		cin>>a[i];
	}
	for(ll i=1; i<=m; i++){
		cin>>c[i];
	}
	sort(a.begin(),a.end());
	ll j = 1;
	for(ll i=n; i>=1; i--){
		ll mini = min(j,a[i]);
		ans += c[mini];
		j++;
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