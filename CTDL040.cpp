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

void s_min(int a[],int n){
    vector<int> v1,v2;
    For(i,0,n){
        if(i&1) v2.pb(a[i]);
        else v1.pb(a[i]);
    }
    ll sum1 = 0, sum2 = 0;
    for(auto x:v1) sum1 = sum1*10 + x;
    for(auto x:v2) sum2 = sum2*10 + x;
    cout << sum1 + sum2 << endl;
}
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        For(i,0,n) cin>>a[i];
        sort(a,a+n);
        s_min(a,n);
    }
}
int main(){
    faster();
    solve();
}
