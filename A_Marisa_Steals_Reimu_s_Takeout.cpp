#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0) cnt0++;
        else if(v[i]==1) cnt1++;
        else if(v[i]==2) cnt2++;
    }
    cout<<cnt0+min(cnt1,cnt2)+(abs(cnt1-cnt2))/3<<endl;
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