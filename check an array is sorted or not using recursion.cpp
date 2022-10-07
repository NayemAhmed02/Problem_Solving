#include<bits/stdc++.h>
using namespace std;

bool isSortedInAsc(int arr[], int len)
{
    if(len == 0) return true;
    if(len == 1) return true;

    if(arr[len-1] < arr[len-2]) return false;

    return isSortedInAsc(arr, len-1);
}

bool isSortedInAsc2(int arr[], int len)
{
    if(len == 0 || len == 1) return true;

    if(arr[0] > arr[1]) return false;

    return isSortedInAsc2(arr+1, len-1);
}

bool isSortedInDes(int arr[], int len)
{
    if(len == 0) return true;
    if(len == 1) return true;

    if(arr[len-1] > arr[len-2]) return false;

    return isSortedInDes(arr, len-1);
}

bool isSortedInDes2(int arr[], int len)
{
    if(len == 0 || len == 1) return true;

    if(arr[0] < arr[1]) return false;

    return isSortedInDes2(arr+1, len-1);
}

int main()
{
    int arr[10] = {100, 24, 22, 22, 15, 11, 10, 9, 9, 8};

    bool ans = isSortedInAsc(arr, 10);
    if(ans == true) cout<<"array is sorted in ascending order\n";
    else cout<<"array is not sorted in ascending order\n";

    bool ans2 = isSortedInDes(arr, 10);
    if(ans2 == true) cout<<"array is sorted in descending order\n";
    else cout<<"array is not sorted in descending order\n";
}
