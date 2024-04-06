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

void insertion(int a[],int n,vector<string> ans){
    For(i,0,n){
        int j = i-1;
        int t = a[i];
        while(t<a[j] && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
        string res = "Buoc " + to_string(i) + ": ";
        For(k,0,i+1) res += to_string(a[k]) + " ";
        ans.pb(res);
    }
    reverse(ans.begin(),ans.end());
    for(auto i:ans) cout << i << endl;
}
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        vector<string> ans;
        for(int& x:a) cin>>x;
        insertion(a,n,ans);
    }
}
int main(){
	faster();
	solve();
}
