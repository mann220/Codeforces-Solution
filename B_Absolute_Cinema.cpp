#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]) swap(a[i],b[i]);
        sum+=b[i];
    }
    ll maxi=*max_element(a.begin(),a.end());
    cout<<maxi+sum<<endl;
}
signed main()
{
      fast;
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}