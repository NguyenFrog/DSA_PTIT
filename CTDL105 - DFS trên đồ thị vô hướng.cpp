#include<bits/stdc++.h>

#define faster() cin.tie(0)->sync_with_stdio(0)
#define clean() cin.ignore(numeric_limits<streamsize>::max(), '\n');
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
#define ld long double
#define ll long long 
#define lli unsigned long long int
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Forr(i,a,b) for(ll i=a;i>=b;i--)
#define sortu(a) sort(a.begin(),a.end())
#define sortv(a) sort(a.rbegin(),a.rend())
#define pause() system("pause");
 
using namespace std;

int n,m,u,visited[1001];
vector<int> adj[1001];
void dfs(int u){
    cout << u << " ";
    visited[u] = 1;
    for(auto v:adj[u]){
        if(!visited[v]) dfs(v);
    }
}
void solve(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m>>u;
        memset(visited,0,sizeof(visited));
        For(i,0,m){
            int x,y; cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        dfs(u);
        For(i,0,1002) adj[i].clear();
        cout << endl;
    }
}
int main(){
	faster();
	solve();
}
