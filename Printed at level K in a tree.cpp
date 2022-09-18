#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Treenode
{
public:
    T data;
    vector<Treenode*> children;

    Treenode(T data)
    {
        this->data = data;
    }
};;

Treenode<int>* takeInputLevelWise()
{
    cout<<"Enter root node data: ";
    int rootData;
    cin>>rootData;
    Treenode<int>* root = new Treenode<int>(rootData);

    queue<Treenode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty())
    {
        Treenode<int>* frontt = pendingNodes.front();
        pendingNodes.pop();

        cout<<"Enter number of children of "<<frontt->data<<" : ";
        int numOfChild;
        cin>>numOfChild;

        for(int i=0; i<numOfChild; i++)
        {
            cout<<"Enter "<<i+1<<"th children of "<<frontt->data<<" : ";
            int childData;
            cin>>childData;
            Treenode<int>* child = new Treenode<int>(childData);
            frontt->children.push_back(child);
            pendingNodes.push(child);
        }
    }


    return root;
}

void printedAtLevelK(Treenode<int>* root, int k)
{
    if(k == 0)
    {
        cout<<root->data<<" , ";
        return;
    }

    for(int i=0; i<root->children.size(); i++)
    {
        printedAtLevelK(root->children[i], k-1);
    }
}

int main()
{
    Treenode<int>* root = takeInputLevelWise();


    int k = 2;
    cout<<"\n\n Display Tree elements at "<<k<<"th level: \n\n";
    printedAtLevelK(root, k);


}


