#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, zero = 0, one = 0;
    cin>>n;
    string s;
    cin>>s;

    for (int i = 1; i < n; i++){
        if ((s[i] != s[i-1]) && s[i-1] == '1'){
            one++;
        }
    }
    
    cout<<one;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
