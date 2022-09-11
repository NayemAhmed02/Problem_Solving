#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    int countFactor = 0;

    for(int i=1; i*i<=num; i++)
    {
        if((i*i) == num)
            countFactor++;
        else if(num % i == 0)
            countFactor += 2;
    }

    if(countFactor == 2) return true;
    else return false;
}

int main()
{
    int n;
    cout<<"Enter Range: ";
    cin>>n;

    int numberOfPrime = 0;

    for(int i=1; i<=n; i++)
    {
        if(isPrime(i))
            numberOfPrime++;
    }

    cout<<"Total number of prime from 1 to "<<n<<" is : "<<numberOfPrime<<"\n";
}
