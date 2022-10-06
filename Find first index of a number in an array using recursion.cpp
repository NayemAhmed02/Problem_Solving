#include<bits/stdc++.h>
using namespace std;

int findFirstIndex(int arr[], int len, int x)
{
    if(len == 0) return -1;
    if(arr[0] == x) return 0;

    int smallAns = findFirstIndex(arr+1, len-1, x);
    if(smallAns == -1) return smallAns;
    else return 1+smallAns;
}

int main()
{
    int arr[15] = {1,2,3,4,5,6,7,8,9,11,2,3,4,5,6};
    int x;


    while(cin>>x)
    {
        if(x == -1) break;
        int ans = findFirstIndex(arr, 15, x);

        cout<<"The number "<<x<<" first appear in "<<ans<<"th index\n";
    }
}
