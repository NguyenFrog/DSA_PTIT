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
        int n; cin>>n;
        int a[10] = {1000,500,200,100,50,20,10,5,2,1};
        int count = 0, i = 0;
        while(i<10){
            count += n/a[i];
            n %= a[i];
            i++;
        }
        cout << count << endl;
    }
}
int main(){
    faster();
    solve();
}
