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

int a,b;
void rev(){
    string s1 = to_string(a);
    string s2 = to_string(b);
    For(i,0,(int)s1.length()) if(s1[i]=='5') s1[i]='3';
    For(i,0,(int)s2.length()) if(s2[i]=='5') s2[i]='3';
    int min = stoi(s1) + stoi(s2);
    
    For(i,0,(int)s1.length()) if(s1[i]=='3') s1[i]='5';
    For(i,0,(int)s2.length()) if(s2[i]=='3') s2[i]='5';
    int max = stoi(s1) + stoi(s2);
    
    cout << min << " " << max << endl;
}
void solve(){
    int t; cin>>t;
    while(t--){
        cin>>a>>b;
        rev();
    }
}
int main(){
    faster();
    solve();
}
