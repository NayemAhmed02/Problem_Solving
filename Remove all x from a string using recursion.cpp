#include<bits/stdc++.h>
using namespace std;

int findLength(char str[])
{
    if(str[0] == '\0') return 0;
    return 1 + findLength(str+1);
}

void removeX(char str[])
{
    if(str[0] == '\0') return;

    if(str[0] == 'x')
    {
        int i=1;

        while(str[i] != '\0')
        {
            str[i-1] = str[i];
            i++;
        }

        str[i-1] = '\0';
        removeX(str);
    }

    else removeX(str+1);
}

int main()
{
    char str[100];
    cin>>str;

    int len = findLength(str);
    cout<<"Length is: "<<len<<"\n";

    removeX(str);
    cout<<"after remove all x string will be:  "<<str<<"\n\n";

    return 0;
}

