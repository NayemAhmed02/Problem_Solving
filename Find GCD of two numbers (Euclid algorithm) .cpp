#include<bits/stdc++.h>
using namespace std;

int findGCD(int a, int b)
{
    if(b == 0) return a;
    return findGCD(b, a%b);
}

int main()
{
    int a, b;
    cout<<"Enter a number A: ";
    cin>>a;
    cout<<"Enter another number B: ";
    cin>>b;

    int gcd = findGCD(a, b);
    cout<<"The GCD of number "<<a<<" and "<<b<<" is : "<<gcd<<"\n";
}
