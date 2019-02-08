#include<iostream>
using namespace std;
int main()
{
    char s[9];
    int i;
    for(i=0;i<9;i++)
    {
        cin >> s[i];
    }
    if((s[0]+s[1])%2==0 && (s[3]+s[4])%2==0 && (s[4]+s[5])%2==0 && (s[7]+s[8])%2==0 && (s[2]!="A") && (s[2]!="E") && (s[2]!="I") && (s[2]!="O") && (s[2]!="U") && (s[2]!="Y"))
    cout << "valid";
    else 
    cout << "invalid";
    return 0;
}
