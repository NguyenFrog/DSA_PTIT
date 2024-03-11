#include <bits/stdc++.h>
using namespace std;
string s;

void numnext () {
    int l=s.length(), check=1, k;
    for (int i=l-1; i>=0; i--) 
        if (s[i]=='0') {
            check=0;
            k=i;
            break;
        }
    s[k]='1';
    for (int i=k+1; i<=l; i++)
        s[i]='0';   
    if (check) {
        for (int i=0; i<l; i++)
            cout <<0;
    }   else {
            cout <<s;
        }
    cout <<endl;

}

int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >>t;
    while (t--) {
        cin >>s;
        numnext ();
    }
    return 0;
}