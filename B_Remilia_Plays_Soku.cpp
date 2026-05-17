#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define ll long long
void solve()
{
    ll n,x1,x2,k;
    cin>>n>>x1>>x2>>k;
    if(n<=3){
        cout<<1<<endl;
        return;
    }
    ll d=abs(x1-x2);
    cout<<min(d,n-d)+k<<endl;
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