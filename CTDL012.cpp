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
int n,k,X[100];
void print(){
    For(i,1,k) cout << X[i];
    cout << " ";
}
void Try(int i){
    For(j,X[i-1]+1,n-k+i+1){
        X[i] = j;
        if(i==k) print();
        else Try(i+1);
    }
}
void solve(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        Try(1);
        cout << endl;
    }
}
int main(){
    faster();
    solve();
}
