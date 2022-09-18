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

void printTreeLevelWise(Treenode<int>* root)
{
    queue<Treenode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty())
    {
        Treenode<int>* frontt = pendingNodes.front();
        pendingNodes.pop();
        cout<<frontt->data<<" : ";

        for(int i=0; i<frontt->children.size(); i++)
        {
            cout<<frontt->children[i]->data<<" , ";
            pendingNodes.push(frontt->children[i]);
        }
        cout<<"\n";
    }
}

int main()
{
    Treenode<int>* root = takeInputLevelWise();

    cout<<"\n\n Display Tree elements : \n\n";
    printTreeLevelWise(root);
}


