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

ll n,k,a[15][15],b[15][15];
void multiply(ll x[15][15],ll y[15][15]){
    ll res[15][15];
    For(i,0,n){
        For(j,0,n){
            res[i][j] = 0;
            For(k,0,n){
                res[i][j] += x[i][k] * y[k][j];
                res[i][j] %= mod;
            }
        }
    }
    For(i,0,n){
        For(j,0,n){
            a[i][j] = res[i][j];
        }
    }
}
void powMod(ll x[15][15],int n){
    if(n<2) return;
    powMod(x,n/2);
    multiply(x,x);
    if(n&1) multiply(x,b);
}
void solve(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        For(i,0,n){
            For(j,0,n){
            	cin>>a[i][j];
                b[i][j] = a[i][j];
            }
        }
        powMod(a,k);
        For(i,0,n){
            For(j,0,n){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}
int main(){
	faster();
	solve();
}
