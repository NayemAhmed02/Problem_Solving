#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {

        int n,a,b,total = 0;
        int maxi = 0;
        cin>>n;

        while(n--)
        {
            cin>>a>>b;
            total += a;
            total -= b;

            cout<<total<<"\n";
            maxi = max(maxi, total);
            cout<<maxi<<"\n";
        }

        cout<<"Case "<<i<<": "<<maxi<<"\n";
    }
    return 0;
}

