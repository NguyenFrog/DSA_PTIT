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

int n,m,s,t,visited[1001],parent[1001];
vector<int> adj[1001];

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int x:adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = 1;
                parent[x] = v;
            }
        }
    }
}
void Path(int s,int t){
    bfs(s);
    if(!visited[t]){
        cout << -1 << endl;
        return;
    }
    vector<int> path;
    while(t != s){
        path.pb(t);
        t = parent[t];
    }
    path.pb(s);
    reverse(path.begin(),path.end());
    for(int x:path) cout << x << " ";
    cout << endl;
}
void solve(){
    int test; cin>>test;
    while(test--){
        cin>>n>>m>>s>>t;
        memset(visited,0,sizeof(visited));
        memset(parent,0,sizeof(parent));
        memset(adj,0,sizeof(adj));
        For(i,0,m){
            int x,y; cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        Path(s,t);
    }
}
int main(){
	faster();
	solve();
}
