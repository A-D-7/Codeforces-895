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
    	ll a,b,c;
    	cin>>a>>b>>c;
    	if(a==b){
    		cout<<"0\n";
    		continue;
		}
    	ll req = abs(a-b);
    	c = 2*c;
    	ll ans = 0;
    	if(req%c!=0)
    	ans++;
    	ans += req/c;
    	cout<<ans<<"\n";
    }
    return 0;
}


