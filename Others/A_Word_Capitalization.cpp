#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    if (s[0] < 97){
        cout<<s<<endl;
    }
    else{
        s[0] = s[0]-32;
        cout<<s<<endl;
    }
    //s[0] = toupper(s[0]);
    //cout<<s<<endl;
    
    return 0;
}