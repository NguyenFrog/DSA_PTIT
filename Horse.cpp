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

int n,cnt,a[100][100];
int dx[8] = {-2,-2,-1,-1,1,1,2,2};
int dy[8] = {-1,1,-2,2,-2,2,-1,1};


void print(){
	For(i,0,n){
		For(j,0,n) cout << a[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}
void Try(int i,int j){
	a[i][j] = ++cnt;
	
	if(cnt == n*n){
		print();
		exit(0);
	}
	For(k,0,8){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1>=0 && i1<n && j1>=0 && j1<n && !a[i1][j1]){
			Try(i1,j1);
		}
	}
	cnt--;
	a[i][j] = 0;
}
void solve(){
    int i,j; cin>>n>>i>>j;
    Try(i,j);
}
int main(){
    faster();
    solve();
}
