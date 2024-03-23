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
int n,X[100],ans;
int cot[100],xuoi[100],nguoc[100];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!cot[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
			X[i] = j;
			cot[j]=1; xuoi[i-j+n]=1; nguoc[i+j-1]=1;
			if(i==n){
				for(int row = 1;row <= n;row++){
					for(int col=1;col<=n;col++){
						if(X[row] == col) cout << "#";
						else cout << ".";
					}
					cout << endl;
				}
				cout << endl;
			}
			else Try(i+1);
			cot[j]=0; xuoi[i-j+n]=0; nguoc[i+j-1]=0;
		}
	}
}
void solve(){
	cin>>n;
	Try(1);
	cout << ans;
}
int main(){
	faster();
	solve();
}
