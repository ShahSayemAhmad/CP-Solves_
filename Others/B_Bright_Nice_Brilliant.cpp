#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n;
    cin>>n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if (j == 0 || j == i)
                cout<<1<<" ";
            else
                cout<<0<<" ";
        }
        cout<<"\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        // cout<<"\n";
    }

    return 0;
}