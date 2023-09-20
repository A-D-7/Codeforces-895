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
    	ll n;
    	cin>>n;
    	ll a[n];
    	ll pre[n];
    	ll xr = 0;
    	forl(i,0,n){
    		cin>>a[i];
    		xr = xr^a[i];
    		pre[i] = xr;
		}
		string s;
		cin>>s;
		ll xro = 0;
		ll xrz = 0;
		forl(i,0,n){
			if(s[i]=='0'){
				xrz = xrz^a[i];
			}
			else{
				xro = xro^a[i];
			}
		}
		ll q;
		cin>>q;
		while(q--){
			ll x;
			cin>>x;
			if(x==2){
				ll g;
				cin>>g;
				if(g==0)
				cout<<xrz<<" ";
				else
				cout<<xro<<" ";
			}
			else{
				ll l,r;
				cin>>l>>r;
				l--;r--;
				ll alpha = pre[r];
				if(l>0)
				alpha^=pre[l-1];
				xrz = xrz^alpha;
				xro = xro^alpha;
			}
		}
		cout<<"\n";
    }
    return 0;
}


