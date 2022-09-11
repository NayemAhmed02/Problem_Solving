#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int a,b,c,k;
        cin>>a>>b>>c>>k;

        if(k == 0)
        {
            if(a==b && b==c)
            {
                cout<<"Case "<<i<<": Peaceful\n";

            }
            else
            {
                cout<<"Case "<<i<<": Fight\n";
            }
        }

        else if((a+b+c) % 3 == 0)
        {
            if(a==b && b==c)
            {
                cout<<"Case "<<i<<": Peaceful\n";
            }
            else if(a == b)
            {
                int d = abs(a-c);
                if(d % (2*k) == 0)
                {
                    cout<<"Case "<<i<<": Peaceful\n";
                }
                else
                {
                    cout<<"Case "<<i<<": Fight\n";
                }
            }
            else if(c == b)
            {
                int d = abs(a-c);
                if(d % (2*k) == 0)
                {
                    cout<<"Case "<<i<<": Peaceful\n";
                }
                else
                {
                    cout<<"Case "<<i<<": Fight\n";
                }
            }
            else if(a == c)
            {
                int d = abs(b-c);
                if(d % (2*k) == 0)
                {
                    cout<<"Case "<<i<<": Peaceful\n";
                }
                else
                {
                    cout<<"Case "<<i<<": Fight\n";
                }
            }
            else
            {
                int x = abs(a-b);
                int y = abs(b-c);
                int z = abs(c-a);

                if((a+b+c) % 3 == 0 && x%k== 0 && y%k==0 && z%k==0)
                {
                    cout<<"Case "<<i<<": Peaceful\n";
                }
                else
                {
                    cout<<"Case "<<i<<": Fight\n";
                }
            }

        }
        else
        {
            cout<<"Case "<<i<<": Fight\n";
        }
    }
    return 0;

}
