#include<bits/stdc++.h>
using namespace std;

int findLastIndex(int arr[], int len, int x)
{
    if(len == 0) return -1;
    if(arr[len-1] == x) return len-1;

    return findLastIndex(arr, len-1, x);

}

int main()
{
    int arr[15] = {1,2,3,4,5,6,7,8,9,11,2,3,4,5,6};
    int x;


    while(cin>>x)
    {
        if(x == -1) break;
        int ans = findLastIndex(arr, 15, x);

        cout<<"The number "<<x<<" last appear in "<<ans<<"th index\n";
    }
}

