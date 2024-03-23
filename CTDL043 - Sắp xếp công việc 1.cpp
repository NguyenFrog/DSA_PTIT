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

bool cmp(pip a,pip b){
    return a.se < b.se;
}
void solve(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        pip v[n];
        For(i,0,n){
            cin >> v[i].fi;
        }
        For(i,0,n){
            cin >> v[i].se;
        }
        sort(v,v+n,cmp);
        int cnt = 1, time_end = v[0].se;
        For(i,1,n){
            if(v[i].fi >= time_end){
                cnt++;
                time_end = v[i].se;
            }
        }
        cout << cnt << endl;
    }
}
int main(){
	faster();
	solve();
}
