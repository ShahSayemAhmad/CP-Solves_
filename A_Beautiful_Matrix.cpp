#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    int ans1 = 0, ans2 = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>a[i][j];
            if (a[i][j] == 1){
                ans1 = abs(j-2);
                ans2 = abs(i-2);
                break;
            }
        }
        if(ans1 != 0 || ans2 != 0){
            break;
        }
    }

    cout<<ans1+ans2<<endl;

    return 0;
}