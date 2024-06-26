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

// catalan[n] = c[n][2n] / (n+1);

ll c[1001][1001];
void build(){
    For(i,0,1001){
        For(j,0,i+1){
            if(j==i || !j) c[i][j] = 1;
            else c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
    }
}
void solve(){
    int t; cin>>t;
    build();
    while(t--){
        int n; cin>>n;
        cout << c[2*n][n] / (n+1) << endl;
    }
}
int main(){
	faster();
	solve();
}
