#include<bits/stdc++.h>
using namespace std;

vector<int> ans;
vector<int> ans2;

vector<int> findAllIndicesRightToLeft(int arr[], int len, int x)
{
    if(len == 0)
    {
        ans.push_back(-1);
        return ans;
    }
    if(arr[len-1] == x) ans.push_back(len-1);

    return findAllIndicesRightToLeft(arr, len-1, x);

}

vector<int> findAllIndicesLeftToRight(int arr[], int len, int x, int indx)
{
    if(len == 0)
    {
        ans2.push_back(-1);
        return ans2;
    }
    if(arr[0] == x) ans2.push_back(indx);

    return findAllIndicesLeftToRight(arr+1, len-1, x, indx+1);

}

int main()
{
    int arr[20] = {1,2,3,4,5,6,7,8,9,11,2,3,4,5,6,2,3,2,5,5};
    int x;

    cin>>x;

    findAllIndicesRightToLeft(arr, 20, x);

    if(ans[0] == -1) cout<<"The number "<<x<<" does not found in given array.\n\n";
    else
    {
        cout<<"The number "<<x<<" found in   ";
        for(int i=0; i<ans.size()-1; i++)
        {
            cout<<ans[i]<<" , ";
        }
        cout<<"  indices\n\n";
    }


    findAllIndicesLeftToRight(arr, 20, x, 0);

    if(ans2[0] == -1) cout<<"The number "<<x<<" does not found in given array.\n\n";
    else
    {
        cout<<"The number "<<x<<" found in   ";
        for(int i=0; i<ans2.size()-1; i++)
        {
            cout<<ans2[i]<<" , ";
        }
        cout<<"  indices\n\n";
    }
}

