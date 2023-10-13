#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

ll dp[105][105];
vector < vector <int> > grid(105);

ll uniquePath(int x, int y)
{
    if ((x == 0 && y == 0) && (grid[x][y] == 0)){
        return 1;
    }

    if ((x == -1 || y == -1) || (grid[x][y] == 1)){
        return 0;
    }

    if (dp[x][y] != -1)
        return dp[x][y];

    ll noOfPath = (uniquePath(x-1, y) + uniquePath(x, y-1));

    return dp[x][y] = noOfPath;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < 105; i++){
            grid[i].clear();
    }

    int m, n;
    cin>>m>>n;

    int z;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin>>z;
            grid[i].push_back(z);
        }
    }
    
    cout<<uniquePath(m-1, n-1);
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
