#include<bits/stdc++.h>
using namespace std;

int makeSieve(int num)
{
    bool isPrime[num+1];

    for(int i=0; i<=num; i++)
    {
        isPrime[i] = true;
    }

    isPrime[0] = false;
    isPrime[1] = false;

    for(int i=2; i*i<=num; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=num; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }

    int cnt = 0;
    for(int i=0; i<=num; i++)
    {
        if(isPrime[i])
            cnt++;
    }

    return cnt;
}

int main()
{
    int n;
    cout<<"Enter Range: ";
    cin>>n;

    int numberOfPrime = makeSieve(n);

    cout<<"Total number of prime from 1 to "<<n<<" is : "<<numberOfPrime<<"\n";
}

