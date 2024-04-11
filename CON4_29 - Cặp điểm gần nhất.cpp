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

void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<pip> v;
        For(i,0,n){
            int x,y; cin>>x>>y;
            v.pb({x,y});
        }
        ll min_cur = INT_MAX;
        For(i,0,(int)v.size()){
            For(j,i+1,(int)v.size()){
                ll x = pow(v[i].fi - v[j].fi,2);
                ll y = pow(v[i].se - v[j].se,2);
                if(x+y < min_cur) min_cur = x+y;
            }
        }
        cout << fixed << setprecision(6) << sqrt(min_cur) << endl;
    }
}
int main(){
	faster();
	solve();
}
