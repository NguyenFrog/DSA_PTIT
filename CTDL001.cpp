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
        For(i,0,1<<n){
            Forr(j,n-1,0){
                if(!(i&(1<<j))) cout << "0" << " ";
                else cout << "1" << " ";
            }
            cout << endl;
        }
    }
}
int main(){
	faster();
	solve();
}