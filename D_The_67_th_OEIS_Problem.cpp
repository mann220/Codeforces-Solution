#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define ll long long
ll num=1e6;
void prime(ll n,vector<ll> &pri){
    vector<bool> isprime(n+1,true);
    isprime[0]=false;
    isprime[1]=false;
    for(int p=2;p*p<=n;p++){
        if(isprime[p]){
            for(int i=p*p;i<=n;i+=p){
                isprime[i]=false;
            }
        }
    }
    for(int p=2;p<=n;p++){
        if(isprime[p]) pri.push_back(p);
    }
    return;
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll> pri;
    prime(num,pri);
    for(int i=1;i<=n;i++) cout<<pri[i-1]*pri[i]<<" ";
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