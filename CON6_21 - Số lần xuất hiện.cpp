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
#define pip pair<int,int> 
 
using namespace std;

bool cmp(pip a,pip b){
    if(a.se == b.se) return a.fi < b.fi;
    return a.se > b.se;
}
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        map<int,int> m;
        vector<pip> v;
        for(int& x:a){
            cin>>x;
            m[x]++;
        }
        for(auto i:m){
            v.pb(i);
        }
        sort(v.begin(),v.end(),cmp);
        for(auto i:v){
            int temp = i.se;
            while(temp--) cout << i.fi << " ";
        }
        cout << endl;
    }
}
int main(){
	faster();
	solve();
}
