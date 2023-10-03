#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    ll n, x;
    cin>>n;

    ll ans = 1;
    int mn = INT_MAX;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mn = min(v[i], mn);
    }
    
    bool check = 0;
    for (auto it : v){
        if (it == mn && !check){
            it++;

            check = 1;
        }

        ans *= it;
    }

    cout<<ans;
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
