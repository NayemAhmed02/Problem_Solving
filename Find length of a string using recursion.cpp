#include<bits/stdc++.h>
using namespace std;

int findLength(char str[])
{
    if(str[0] == '\0') return 0;
    return 1 + findLength(str+1);
}

int main()
{
    char str[100];
    cin>>str;

    int len = findLength(str);
    cout<<"Length is: "<<len<<"\n";
}
