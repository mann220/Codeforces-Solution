#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    vector<ll> ans;
    ll cnt=0;
    for(int i=n;i>=1;i--){
        if(cnt%2==0 && v[i]>0){
            cnt++;
            ans.push_back(i);
        }
        else if(cnt%2!=0 && v[i]<0){
            cnt++;
            ans.push_back(i);
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
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