#include<bits/stdc++.h>
using namespace std;

void mergee(int arr[], int s, int m, int e)
{
    int len1 = m-s+1;
    int len2 = e-m;

    int left[len1], right[len2];

    for(int i=s, j=0; i<=m; i++,j++)
    {
        left[j] = arr[i];
    }

    for(int i=m+1, j=0; i<=e; i++,j++)
    {
        right[j] = arr[i];
    }

    int i = 0, j = 0, k = s;

    while(i < len1 && j < len2)
    {
        if(left[i] <= right[j])
        {
            arr[k] = left[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = right[j];
            k++;
            j++;
        }
    }

    while(i < len1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < len2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int endd)
{
    if(start >= endd) return;

    int mid = (start + endd) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, endd);

    mergee(arr, start, mid, endd);
}

int main()
{
    int arr[10] = {2, 9, 4, 6, 1, 3, 25, 15, 18, 21};

    cout<<"Before sort:  ";
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"\n\n";

    mergeSort(arr, 0, 9);

    cout<<"After sort:  ";
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"\n\n";
}
