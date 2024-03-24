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

vector<ll> v;
void build(){
    queue<string> q;
    q.push("1");
    v.pb(1);
    while(!q.empty()){
        string top = q.front(); q.pop();
        if(top.length() > 17) break;
        q.push(top + "0");
        q.push(top + "1");
        v.pb(stoll(top + "0"));
        v.pb(stoll(top + "1"));
    }
}
void solve(){
    int t; cin>>t;
    build();
    while(t--){
        int n; cin>>n;
        auto it = upper_bound(v.begin(),v.end(),n);
        cout << it - v.begin() << endl;
    }
}
int main(){
	faster();
	solve();
}
