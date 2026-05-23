#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    unordered_map<int,int> mpp,cnt;
    for(int i=0;i<n;i++){
        int ct=0;
        int val=v[i];
        mpp[val]+=0;
        cnt[val]++;
        if(val==1){
            cnt[2]++;
            mpp[2]++;
            continue;
        }
        while(val>1){
            if(val%2==0) val=val/2;
            else val++;
            ct++;
            mpp[val]+=ct;
            cnt[val]++;
        }
    }
    int ans=INT_MAX;
    for(auto it:cnt){
        if(it.second==n){
            ans=min(ans,mpp[it.first]);
        }
    }
    cout<<ans<<endl;
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