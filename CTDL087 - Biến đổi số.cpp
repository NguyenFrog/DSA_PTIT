
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
#define pip pair<int,int> 

using namespace std;

int ans(int start,int target){
    queue<pip> q;
    set<int> s;
    s.insert(start);
    q.push({start,0});
    while(!q.empty()){
        pip top = q.front(); q.pop();
        if(top.fi == target) return top.se;
        if(s.find(top.fi * 2) == s.end() && top.fi < target){
            q.push({top.fi * 2, top.se + 1});
            s.insert(top.fi * 2);
        }
        if(s.find(top.fi - 1) == s.end() && top.fi > 1){
            q.push({top.fi - 1, top.se + 1});
            s.insert(top.fi - 1);
        }
    }
}
void solve(){
	int t; cin>>t;
    while(t--){
        int start,target; cin>>start>>target;
        cout << ans(start,target) << endl;
    }
}
int main(){
	faster();
	solve();
}

