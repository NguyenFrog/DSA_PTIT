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
string s;
void next(){
    int i = (int)s.length() - 1;
    while(i>=0 && s[i]=='1'){
        s[i] = '0';
        i--;
    }
    if(i>=0) s[i] = '1';
    cout << s << endl;
}
void solve(){
    int t; cin>>t;
    while(t--){
        cin>>s;
        next();
    }
}
int main(){
    faster();
    solve();
}