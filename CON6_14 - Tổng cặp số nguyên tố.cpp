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

bool prime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool check = false;
        For(i,2,n){
            if(prime(i) && prime(n-i)){
                cout << i << " " << n-i << endl;
                check = true;
                break;
            }
        }
        if(!check) cout << -1 << endl;
    }
}
int main(){
	faster();
	solve();
}
