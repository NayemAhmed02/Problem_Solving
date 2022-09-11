#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        string str1,str2;
        int noq;
        cin>>str1>>str2;
        cin>>noq;

        for(int i=0; i<noq; i++)
        {
            int ind, l1, r1, l2, r2, l3, r3, l4, r4;
            char ch1, ch2;
            cin>>ind;

            if(ind == 1)
            {
                cin>>l1>>r1>>ch1;
                for(int i=l1-1; i<r1; i++)
                {
                    str1[i] = ch1;
                }
            }
            else if(ind == 2)
            {
                cin>>l2>>r2>>ch2;
                for(int i=l2-1; i<r2; i++)
                {
                    str2[i] = ch2;
                }
            }
            else if(ind == 3)
            {
                cin>>l3>>r3>>l4>>r4;
                //string x = str1.substr(l3-1, r3-l3+1);
                //string y = str2.substr(l4-1, r4-l4+1);

                string ans = (str1.substr(l3-1, r3-l3+1)) + (str2.substr(l4-1, r4-l4+1));

                set < string > us;

                for(int i=0; i<ans.size(); i++)
                {
                    string ss = "";
                    for(int j=i; j<ans.size(); j++)
                    {
                        ss = ss + ans[j];
                        us.insert(ss);
                    }
                }

                //cout<<ans<<"\n";
                int n = ans.size();
                cout<<((n*(n+1))/2)-1<<"\n";
            }
        }

    }
    return 0;
}
