#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define ll long long
void solve()
{
    ll a,n;
    cin>>a>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    string s=to_string(a);
    int sz=s.size();
    ll ans=1e18;
    if(sz>1){
        ll x=0;
        for(int i=0;i<sz-1;i++) x=x*10+v[n-1];
        ans=min(ans,abs(a-x));    
    }
    ll y=0;
    if(v[0]!=0) y=v[0];
    else if(n>1) y=v[1];
    for(int i=0;i<sz;i++) y=y*10+v[0];
    ans=min(ans,abs(a-y));
    
    ll curr=0;
    bool flag=true;
    for(int i=0;i<sz;i++){
        int val=s[i]-'0';
        for(auto x:v){

            if(x>val){
                ll num=curr*10+x;
                for(int j=i+1;j<sz;j++) num=num*10+v[0];
                ans=min(ans,abs(a-num));
            }
            else if(x<val){
                ll num=curr*10+x;
                for(int j=i+1;j<sz;j++) num=num*10+v[n-1];
                ans=min(ans,abs(a-num));
            }
        }
        ll lbd=lower_bound(v.begin(),v.end(),val)-v.begin();
        if(lbd==n) lbd=n-1;
        if(val!=v[lbd]){
            flag=false;
            break;
        }
        curr=curr*10+val;
    }
    if(flag) cout<<0<<endl;
    else cout<<ans<<endl;
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