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
        int n,m; cin>>n>>m;
        set<int> s1,s2,Union,intersection;
        int a[n],b[m];
        for(int& x:a){cin>>x; s1.insert(x); Union.insert(x);}
        for(int& x:b){cin>>x; s2.insert(x); Union.insert(x);}
        for(auto i:s1){
            auto it = s2.find(i);
        	if(it!=s2.end()) intersection.insert(*it);
        }
        for(auto i:Union) cout << i << " ";
        cout << endl;
        for(auto i:intersection) cout << i << " ";
        cout << endl;
    }
}
int main(){
	faster();
	solve();
}
