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

stack<int> st;
void solve(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        if(s == "PUSH"){
            int x; cin>>x;
            st.push(x);
        }
        else if(s == "POP"){
            if(st.empty()) continue;
            else st.pop();
        }
        else{
            cout << ((st.empty()) ? "NONE" : to_string(st.top())) << endl;
        }
    }
}
int main(){
	faster();
	solve();
}
