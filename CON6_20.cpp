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
        int n,k; cin>>n>>k;
        int a[n];
        map<int,int> m;
        ll ans = 0;
        for(int& x:a){
            cin>>x;
            m[x]++;
        }
        sort(a,a+n);
        for(auto i:m){
            int x = abs(i.fi - k);
            if(i.fi != x){
                if(m.count(x)) ans += 1ll * i.se * m[x];
            }
            else ans += 1ll * i.se * (i.se - 1) / 2;
        }
        cout << ans << " ";
    }
}
int main(){
	faster();
	solve();
}
