#include<bits/stdc++.h>
using namespace std;

int partitionn(int ar[], int s, int e)
{
    int pivot = ar[s];
    int soe_cnt = 0;
    for(int i=s+1; i<=e; i++)
    {
        if(ar[i] <= pivot) soe_cnt++;
    }

    int p = soe_cnt + s;

    swap(ar[s], ar[p]);

    int i=s, j=e;

    while(i < p && j > p)
    {
        if(ar[i] > pivot  &&  ar[j] <= pivot)
        {
            swap(ar[i], ar[j]);
            i++;
            j--;
        }

        else
        {
            if(ar[j] > pivot) j--;
            if(ar[i] <= pivot) i++;
        }
    }

    return p;
}

void quickSort(int arr[], int start, int endd)
{
    if(start >= endd) return;

    int posi = partitionn(arr, start, endd);

    quickSort(arr, start, posi-1);
    quickSort(arr, posi+1, endd);
}

int main()
{
    int arr[8] = {8,7,6,5,4,3,2,1};

    cout<<"Before sorting:   ";
    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"\n\n";

    quickSort(arr, 0, 7);

    cout<<"After sorting:   ";
    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"\n\n";
}
