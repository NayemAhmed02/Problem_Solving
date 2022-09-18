#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,maximum;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        maximum = max(a, max(b, c));
        cout<<"Case "<<i<<": "<<maximum<<"\n";
    }

    return 0;
}

