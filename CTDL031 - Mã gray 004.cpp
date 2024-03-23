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

string convert_binary(int n){
    if(!n) return "";
    return convert_binary(n/2) + (char) (n%2 + '0');
}
int rev(string s){
    int ans = 0;
    int t = s.length();
    For(i,0,t){
        ans += (s[i] - '0') * (1<<(t-i-1));
    }
    return ans;
}
void solve(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string binary = convert_binary(n);
        string gray = ""; gray += binary[0];
        For(i,1,(int)binary.length()){
            if(binary[i] != binary[i-1]) gray += '1';
            else gray += '0';
        }
        cout << rev(gray) << endl;
    }
}
int main(){
	faster();
	solve();
}
