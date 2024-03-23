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
        int n; cin>>n;
        ll a[n],b[n-1];
        for(ll& x:a) cin>>x;
        for(ll& x:b) cin>>x;
        For(i,0,n){
            if(i==n-1
               || a[i]!=b[i]){
                cout << i+1 << endl;
                break;
            }
        }
    }
}
int main(){
    faster();
    solve();
}
