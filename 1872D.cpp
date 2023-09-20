#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define V vector<long long int>
#define pb push_back
#define pi pair<long long int,long long int>
#define forl(var,str,end) for(long long int var=str; var<end; var++)
ll mod = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,x,y;
    	cin>>n>>x>>y;
    	ll sum = 0;
    	ll n1= n/x;
    	ll n2 = n/y;
    	ll lcm = (x * y) / __gcd(x,y);
    	ll com = n/(lcm);
    	n1 -= com;
    	n2 -= com;
    	sum = ((n+1)*n)/2 - ((n-n1+1)*(n-n1))/2;
    	sum -= ((n2+1)*n2)/2;
    	cout<<sum<<"\n";
    }
    return 0;
}


