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

int binary_search(int a[],int l,int r,int x){
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid] == x) return 1;
        else if(a[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}
void solve(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int a[n];
        for(int& x:a) cin>>x;
        cout << binary_search(a,0,n-1,x) << endl;
    }
}
int main(){
	faster();
	solve();
}
