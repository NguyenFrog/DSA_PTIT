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

void rev(string& s,int k){    
    char t = '0';
    int pos = 0, cnt=0;
    while(k--){
        for(int i=cnt;i<s.length();i++){
        	if(s[i]>=t){
        		t = s[i];
        		pos = i;
			}
    	}
    	swap(s[cnt],s[pos]);
    	t = '0';
        cnt++;
    }
    cout << s << endl;
}

void solve(){
    int t; cin>>t;
    while(t--){
        int k; cin>>k;
        clean();
        string s; cin>>s;
        rev(s,k);
    }
}
int main(){
    faster();
    solve();
}
