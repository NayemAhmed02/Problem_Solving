#include<bits/stdc++.h>
using namespace std;

class Triplet
{
public:
    int x;
    int y;
    int gcd;
};

Triplet extendedEuclid(int a, int b)
{
    Triplet ans;
    if(b == 0)
    {
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;

        return ans;
    }

    Triplet smallAns = extendedEuclid(b, a%b);
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a/b)*smallAns.y;

    return ans;
}

int main()
{
    int a, b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;

    Triplet ans = extendedEuclid(a, b);

    cout<<" a = "<<ans.x<<"\n";
    cout<<" b = "<<ans.y<<"\n";
    cout<<" GCD = "<<ans.gcd<<"\n";

    return 0;
}
