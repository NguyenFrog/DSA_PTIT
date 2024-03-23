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

ll fibo[1000000];
void build(){
    fibo[0] = 0;
    fibo[1] = 1;
    int i = 2;
    while(i<1000000){
        fibo[i] = fibo[i-1]%mod + fibo[i-2]%mod;
        fibo[i] %= mod;
        i++;
    }
}
void solve(){
    int t; cin>>t;
    build();
    while(t--){
        int n; cin>>n;
        cout << fibo[n] << endl;
    }
}
int main(){
    faster();
    solve();
}
