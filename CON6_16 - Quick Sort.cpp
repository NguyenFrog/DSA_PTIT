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

int partition(int a[],int l,int r){
    int pivot = a[l];
    int i = l+1, j = r;
    do{
        while(i<=j && a[i]<=pivot) i++;
        while(i<=j && a[j]>pivot) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++; j--;
        }
    }while(i<=j);
    swap(a[l],a[j]);
    return j;
}
void quick_sort(int a[],int l,int r){
    if(l<r){
        int p = partition(a,l,r);
        quick_sort(a,l,p-1);
        quick_sort(a,p+1,r);
    }
}
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int& x:a) cin>>x;
        quick_sort(a,0,n-1);
        for(int x:a) cout << x << " ";
        cout << endl;
    }
}
int main(){
	faster();
	solve();
}
