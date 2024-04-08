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

void merge(int a[],int l,int r,int mid){
    int i = l, j = mid+1, n = r-l+1;
    int k = 0;
    int *b = new int[n];
    while(i<=mid && j<=r){
        if(a[i]<a[j]){b[k]=a[i]; k++; i++;}
        else{b[k]=a[j]; k++; j++;}
    }
    while(i<=mid){b[k]=a[i]; k++; i++;}
    while(j<=r){b[k]=a[j]; k++; j++;}
    i = l;
    For(k,0,n){
        a[i] = b[k];
        i++;
    }
    delete[] b;
}
void merge_sort(int a[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,r,mid);
    }
}
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int& x:a) cin>>x;
        merge_sort(a,0,n-1);
        for(int x:a) cout << x << " ";
        cout << endl;
    }
}
int main(){
	faster();
	solve();
}
