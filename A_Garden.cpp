#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e4+5;

void solve()
{
    int n, k;
    cin>>n>>k;

    int ans = INT_MAX;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (k%v[i] == 0)
            ans = min(ans, k/v[i]);
    }
    
    cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
   // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
