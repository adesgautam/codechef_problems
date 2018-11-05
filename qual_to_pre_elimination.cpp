#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k,count=0,cp=0;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n,greater<ll>());
        ll val = a[k-1];
        
        for(int i=0;i<n;i++){
            if(a[i]>=val)
                count+=1;
        }
        cout<<count<<"\n";
    }
    return 0;
}