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

vector<int> v;
void print(){
    string s = "[";
    for(auto x:v) s += to_string(x) + " ";
    s.pop_back();
    s += "]";
    cout << s << endl;
}
void refresh(){
    vector<int> rf;
    for(int i=0;i<v.size()-1;i++){
        rf.pb(v[i] + v[i+1]);
    }
    v = rf;
}
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        For(i,0,n){
            int x; cin>>x;
            v.pb(x);
        }
        do{
            print();
            refresh();
        }while(v.size());
    }
}
int main(){
    faster();
    solve();
}
