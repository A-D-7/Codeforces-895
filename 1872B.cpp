#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define V vector<long long int>
#define pb push_back
#define pi pair<long long int,long long int>
#define forl(var,str,end) for(long long int var=str; var<end; var++)
ll mod = 1e9+7;

bool pos(map<ll,ll> mp, ll mid){
	ll num = mid;
	for(ll j = mid-1; j>=1; j--){
		if(mp[j]!=0 && mp[j]<=num)
		return false;
		num++;
	}
	return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	map<ll,ll> mp;
    	while(n--){
    		ll d,s;
    		cin>>d>>s;
    		if(mp[d]==0)
    		mp[d] = (d-1+s);
    		else{
    			mp[d] = min(mp[d],d-1+s);
			}
		}
		ll s = 1;
		ll h = 400;
		ll ans = 0;
		while(s<=h){
			ll mid = s+(h-s)/2;
			if(pos(mp,mid)){
				ans = mid;
				s = mid+1;
			}
			else
			h = mid-1;
		}
		cout<<ans<<"\n";
    }
    return 0;
}


