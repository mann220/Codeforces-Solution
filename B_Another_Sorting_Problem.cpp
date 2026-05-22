#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<ll> p=v;
    ll mini=v[0];
    ll k=0;
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]){
            k=max(k,v[i-1]-v[i]);
        }
    }
    for(int i=1;i<n;i++){
        if(p[i-1]>p[i]) p[i]+=k;
    }
    // for(int i=0;i<n;i++) cout<<p[i]<<" ";
    // cout<<endl;
    vector<ll> temp=p;
    sort(temp.begin(),temp.end());
    if(temp==p) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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