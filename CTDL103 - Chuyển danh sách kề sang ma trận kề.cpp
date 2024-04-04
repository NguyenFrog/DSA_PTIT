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

int a[1001][1001];
void solve(){
    int n; cin>>n;
    clean();
    For(i,1,n+1){
        string s; getline(cin,s);
        stringstream ss(s);
        string temp;
        while(ss>>temp){
            a[i][stoi(temp)] = 1;
        }
    }
    For(i,1,n+1){
        For(j,1,n+1){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
	faster();
	solve();
}
