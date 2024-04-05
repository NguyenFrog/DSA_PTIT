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

void solve(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<int> adj[1001];
        For(i,0,m){
            int x,y; cin>>x>>y;
            adj[x].pb(y);
        }
        For(i,1,n+1){
            cout << i << ": ";
            for(auto x:adj[i]) cout << x << " ";
            cout << endl;
        }
    }
}
int main(){
	faster();
	solve();
}
