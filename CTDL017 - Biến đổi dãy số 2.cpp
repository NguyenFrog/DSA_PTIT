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
        queue<int> q;
        cout << "[";
        For(i,0,n){
            int x; cin>>x;
            if(i!=n-1) cout << x << " ";
            else cout << x;
            q.push(x);
        }
        cout << "]" << endl;
        while(q.size()>1){
            vector<int> v;
            while(1){
            	int top1 = q.front(); q.pop();
            	int top2 = q.front();
            	q.push(top1 + top2);
            	v.pb(top1 + top2); 
            	if(v.size() == q.size() - 1) break;
        	}
        	q.pop();
            cout << "[";
            For(i,0,(int)v.size()){
                if(i!=v.size()-1) cout << v[i] << " ";
                else cout << v[i];
            }
            cout << "]" << endl;
        }
    }
}
int main(){
	faster();
	solve();
}
