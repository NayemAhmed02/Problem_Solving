#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l,w;

    while(cin>>l>>w)
    {
        if(l == 0 && w == 0) break;
        double f = l * 0.625;
        double rest = l-f;
        double cross = (f*f) - (rest*rest);
        cross = sqrt(cross);

        double result = f + f + (w - cross);

        cout<<fixed<<setprecision(4)<<result<<"\n";
    }
    return 0;
}
