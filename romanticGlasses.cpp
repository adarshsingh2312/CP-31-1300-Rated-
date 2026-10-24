//Jai shree ram
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<pair<int,int>>
int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        ll sum = 0;
        map<ll,ll>m;
        m[0]++;
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<n; i++){
            if(i%2==0){
                sum+=a[i];
                m[sum]++;
            }
            else{
                sum-=a[i];
                m[sum]++;
            }
        }
        bool yes = false;
        for(auto &pr : m){
            if(pr.second>1){
                yes = true;
                break;
            }
        }
        if(yes) cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    }
    return 0;
}