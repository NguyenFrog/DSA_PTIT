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

ll f(int n){
    ll res = 1;
    For(i,2,n+1){
        res *= i;
        res %= mod;
    }
    return res%mod;
}

ll powMod(ll a,ll b){
    if(!b) return 1;
    ll x = powMod(a,b/2);
    if(b&1) return (x%mod) * (x%mod) %mod * (a%mod) %mod;
    return (x%mod) * (x%mod) %mod;
}

ll inv(ll a,ll p){
    return powMod(a,p-2)%mod;
}

ll P(int n,int k){
    return f(n) * inv(f(n-k),mod) %mod;
}
void solve(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        cout << ((k>n) ? 0 : P(n,k)) << endl; 
    }
}
int main(){
	faster();
	solve();
}
