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

ll binary(string s){
    ll ans = 0;
    int t = (int)s.length();
    Forr(i,t-1,0){
        ans += (1<<i) * (s[t-i-1] - '0');
    }
    return ans;
}
void solve(){
    int t; cin>>t;
    while(t--){
    	string a,b; cin>>a>>b;
        cout << binary(a) * binary(b)<< endl;
    }
}
int main(){
    faster();
    solve();
}
