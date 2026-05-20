#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define ll long long
void precompute(int n,vector<int> &fact){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            fact.push_back(i);
            if(n/i!=i) fact.push_back(n/i);
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> dp(n+1,1e9);
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mpp[v[i]]++;
        dp[v[i]]=1;
    }
    vector<int> ans(n+1);
    for(int i=1;i<=n;i++){
        if(dp[i]==1) continue;
        else{
            vector<int> temp;
            precompute(i,temp);
            for(int j=0;j<temp.size();j++){
                if(mpp[temp[j]]!=0) dp[i]=min(dp[i],1+dp[(i/temp[j])]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(dp[i]==1e9) ans[i]=-1;
        else ans[i]=dp[i];
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
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