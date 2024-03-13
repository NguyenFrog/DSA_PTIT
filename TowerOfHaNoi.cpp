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

void Try(int n,char a,char b,char c){
	if(n==1){
		cout << a << " --> " << c << endl;
		return;
	}
	Try(n-1,a,c,b);
	Try(1,a,b,c);
	Try(n-1,b,a,c);
}
void solve(){
    int n; cin>>n;
    Try(n,'A','B','C');
}
int main(){
    faster();
    solve();
}
