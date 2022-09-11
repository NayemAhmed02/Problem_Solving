#include<bits/stdc++.h>
using namespace std;

class Triplet
{
public:
    int x;
    int y;
    int gcd;
};

void extendedEuclid(int a, int b, Triplet *ans)
{
    if(b == 0)
    {
        ans->gcd = a;
        ans->x = 1;
        ans->y = 0;
    }

    extendedEuclid(b, a%b, ans);
    int temp = ans->x;
    ans->x = ans->y;
    ans->y = temp - (a/b)*ans->y;

}

int main()
{
    int a, b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;

    Triplet ans;
    extendedEuclid(a, b, &ans);

    cout<<" a = "<<ans.x<<"\n";
    cout<<" b = "<<ans.y<<"\n";
    cout<<" GCD = "<<ans.gcd<<"\n";

    return 0;
}

