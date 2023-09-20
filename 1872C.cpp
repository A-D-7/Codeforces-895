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
    	ll l,r;
    	cin>>l>>r;
    	if(r<=3){
    		cout<<"-1\n";
		}
		else if(abs(l-r)>=1){
			ll a = 0;
			if(l<=2)
			l = 3;
			if(l%2==0)
			a = l;
			else
			a = l+1;
			cout<<"2 "<<a-2<<"\n";
		}
		else{
			ll ans = -1;
			for(ll i=2; i*i<=l; i++){
				if(l%i==0){
					ans = i;
					break;
				}
			}
			if(ans==-1)
			cout<<"-1\n";
			else
			cout<<ans<<" "<<l-ans<<"\n";
		}
    }
    return 0;
}


