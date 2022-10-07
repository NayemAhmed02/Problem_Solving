#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(char str[])
{
    if(str[0] == '\0') return;

    if(str[1] == str[0])
    {
        int i = 1;
        while(str[i] != '\0')
        {
            str[i] = str[i+1];
            i++;
        }
        removeDuplicate(str);
    }

    else removeDuplicate(str+1);
}

int main()
{
    char str[100];
    cin>>str;

    removeDuplicate(str);
    cout<<"After remove duplicate:    "<<str<<"\n";
}
