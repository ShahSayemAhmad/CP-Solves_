#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int d, m;
    cin>>d>>m;

    vector <int> days(m);
    for (int i = 0; i < m; i++){
        cin>>days[i];
    }
    
    int tarik = 0, cnt = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < days[i]; j++){
            if (tarik%7 == 5 && j == 12)
                cnt++;

            tarik++;
        }
    }
    
    cout<<cnt;
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
