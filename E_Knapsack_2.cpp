#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define ll long long
ll f(ll i,ll v,vector<ll> &a,vector<ll> &wt){
    if(v==0) return 0;
    if(i<0) return 1e10;
    ll nottake=f(i-1,v,a,wt);
    ll take=1e10;
    if(a[i]<=v) take=wt[i]+f(i-1,v-a[i],a,wt);
    return min(take,nottake);
}
void solve()
{
    ll n,w;
    cin>>n>>w;
    vector<ll> a(n),wt(n);
    ll maxi=0;
    for(int i=0;i<n;i++){
        cin>>wt[i]>>a[i];
        maxi+=a[i];
    }
    vector<vector<ll>> dp(n,vector<ll> (maxi+1,1e10));
    dp[0][0]=0;
    dp[0][a[0]]=wt[0];
    for(int i=1;i<n;i++){
        for(int j=maxi;j>=0;j--){
            ll nottake=dp[i-1][j];
            ll take=1e10;
            if(a[i]<=j) take=wt[i]+dp[i-1][j-a[i]];
            dp[i][j]=min(take,nottake);
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=maxi;j>=0;j--){
            if(dp[i][j]<=w){
                ans=j;
                break;
            }
        }
    }
    cout<<ans<<endl;
}
signed main()
{
      fast;
    ll t=1;
    while(t--)
    {
    solve();
    }
    return 0;
}