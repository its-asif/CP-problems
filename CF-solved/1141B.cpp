#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

#define fi(n) for(ll i=0; i<n; i++)
#define rfi(n) for(ll i=n-1; i>=0; i--)
#define fj(n) for(ll j=0; j<n; j++)
#define fa(n) for(auto i:n)
#define fa2(n) for(auto i:n) cout<<i<<' ';
#define llt ll t; cin>>t; while(t--)
#define lln ll n; cin>>n;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pb push_back
#define pbx ll xx; cin>> xx; v.pb(xx);
#define pbs string xx; cin>> xx; v.pb(xx);
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define rsortall(x) sort(all(x),greater<ll>())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/__gcd(a,b)))

#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define C(x) cout<< x <<endl;
#define F i.first
#define S i.second


using namespace std;
int main(){
	lln;
	vll v(n);
	ll cnt=0,mx=0;
	fi(n){
		cin>>v[i];
		if(v[i]==1){
			cnt++;
			mx = max(mx,cnt);
		}
		else cnt=0;
	} cnt=0; ll temp=0;

	fi(n){
		if(v[i]==1) cnt++;
		else{
			temp=i;
			break;
		}
	}
	for (int i = n-1; i >temp; --i)
	{
		if(v[i]==1) cnt++;
		else{
			temp=i;
			break;
		}
	}

	mx = max(mx,cnt);
	cout<<mx;
}