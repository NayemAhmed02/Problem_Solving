#include<bits/stdc++.h>
using namespace std;

int subSequences(string inp, string out[])
{
    if(inp.size() == 0)
    {
        out[0] = "";
        return 1;
    }
    string smallString = inp.substr(1);
    int num = subSequences(smallString, out);

    for(int i=num,j=0; i<2*num; i++,j++)
    {
        out[i] = out[j] + inp[0];
    }

    return num * 2;
}

int main()
{
    string input;
    cout<<"Enter a string:   ";
    cin>>input;

    string output[1000];
    int num = subSequences(input, output);
    cout<<"\n\nNumber of subsequences:  "<<num<<"\n\n";
    cout<<"Subsequences are :   \n\n";

    for(int i=0; i<num; i++)
    {
        cout<<i+1<<" ---------- "<<output[i]<<"\n";
    }

}
