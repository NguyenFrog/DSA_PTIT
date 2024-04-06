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

void insertion(int a[],int n){
    For(i,0,n){
        int j = i-1;
        int t = a[i];
        while(t<a[j] && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
        cout << "Buoc " << i << ": ";
        For(k,0,i+1) cout << a[k] << " ";
        cout << endl;
    }
}
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int& x:a) cin>>x;
        insertion(a,n);
    }
}
int main(){
	faster();
	solve();
}
