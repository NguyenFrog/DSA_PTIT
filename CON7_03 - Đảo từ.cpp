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
    clean();
    while(t--){
        string s; getline(cin,s);
        stringstream ss(s);
        string t;
        while(ss>>t){
            reverse(t.begin(),t.end());
            cout << t << " ";
        }
        cout << endl;
    }
}
int main(){
	faster();
	solve();
}
