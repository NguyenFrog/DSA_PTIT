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

int n,a[20],b[20];
bool check(){
	string s1 = "", s2 = "";
	For(i,0,n){
    	s1 += to_string(a[i]);
    	s2 += to_string(b[i]);
	}
	return s1<s2;
}
void swap_arr(){
	For(i,0,n){
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
void solve(){
    int t; cin>>t;
    while(t--){
    	cin>>n;
        int cnt = 0;
        For(i,0,n) cin>>a[i];
        For(i,0,n) cin>>b[i];
        if(!check()) swap_arr();
        do{
            bool check = true;
            For(i,0,n){
                if(a[i] != b[i]) check = false;
            }
            if(!check) cnt++;
            else{
                cout << cnt << endl;
                break;
            }
        }while(next_permutation(a,a+n));
    }
}
int main(){
	faster();
	solve();
}
