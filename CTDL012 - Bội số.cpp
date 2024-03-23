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
ll ans[501];
void build(){
    queue<string> q;
    q.push("9");
    v.pb(9);
    while(!q.empty()){
        string top = q.front();
        q.pop();
        if(top.length()>13) break;
        q.push(top + '0');
        q.push(top + '9');
        v.pb(stoll(top + '0'));
        v.pb(stoll(top + '9'));
    }
    For(i,1,501){
        for(auto x:v){
            if(!(x%i) && !ans[i]){
                ans[i] = x;
                break;
            }
        }
    }
}
void solve(){
    int t; cin>>t;
    build();
    while(t--){
        int n; cin>>n;
        cout << ans[n] << endl;
    }
}
int main(){
    faster();
    solve();
}

