#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];

void dfs(int x){
	vis[x] = true;

	for (auto i : g[x])
	{
		if( !vis[i] ) dfs(i);
	}
}


int main(){
	ll n,m; cin >> n >> m;
	while(m--){
		int x, y; cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	ll cnt = 0;
	vector<ll> v;
	for (int i = 1; i <= n; ++i)
	{
		if( !vis[i] ) {
			dfs(i);
			v.push_back(i);
		}
	}

	for (int i = 0; i < v.size()-1; ++i)
	{
		for (int j = i+1; j < v.size(); ++j)
		{
			cout << v[i] << ' ' << v[j] << endl;
		}
	}
}