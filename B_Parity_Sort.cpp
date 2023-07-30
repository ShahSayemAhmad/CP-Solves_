#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n), temp;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    temp = v;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++){
        if (v[i]%2 != temp[i]%2){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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
