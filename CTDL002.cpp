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
int n,a[100],final;
void print(string s){
    int cnt = 1;
    For(i,0,(int)s.length()){
        if(isdigit(s[i])) cout << s[i];
        else cout << a[cnt++];
    }
    cnt = 1;
    cout << endl;
}
void setup(string s){
    For(i,1,n+1){
        a[i] = 0;
    }
    print(s);
}
void next(string s){
    int i = n;
    while(i>0 && a[i]){
        a[i]=0;
        i--;
    }
    if(!i) final = 0;
    else{
        a[i]=1;
        print(s);
    }
}
void solve(){
    int t;cin>>t;
    while(t--){
	    string s; cin>>s;
        For(i,0,(int)s.length()) if(!isdigit(s[i])) n++;
        setup(s);
        final = 1;
        while(final){
            next(s);
        }        
        n = 0;
        final = 1;
    }
}
int main(){
	faster();
	solve();
}