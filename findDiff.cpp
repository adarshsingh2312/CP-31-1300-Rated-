//Jai shree ram
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<pair<int,int>>


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int q; 
        cin>>q; 
        vi type(n);
        int ele = 1;
        type[0] = 1;
        for(int i=1; i<n; i++){
            if(a[i]!=a[i-1]){
                type[i] = ele+1;
                ele++;
            }
            else{
                type[i] = type[i-1];
            }
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            if(type[l]==type[r]){
                cout<<-1<<" "<<-1<<endl;
                continue;
            }
            int target = type[l]+1;
            int idx = lower_bound(type.begin()+l,type.begin()+r,target) - type.begin();
            cout<<(l+1)<<" "<<(idx+1)<<endl;
        }
    }
    return 0;
}