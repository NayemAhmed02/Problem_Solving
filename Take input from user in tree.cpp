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

Treenode<int>* takeInput()
{
    cout<<"Enter root node data: ";
    int rootData;
    cin>>rootData;
    Treenode<int>* root = new Treenode<int>(rootData);

    cout<<"Enter number of children of "<<rootData<<" : ";
    int numOfChild;
    cin>>numOfChild;

    for(int i=0; i<numOfChild; i++)
    {
        Treenode<int>* child = takeInput();
        root->children.push_back(child);
    }

    return root;
}

void printTree(Treenode<int>* root)
{
    cout<<root->data<<" : ";

    for(int i=0; i<root->children.size(); i++)
    {
        cout<<root->children[i]->data<<" , ";
    }
    cout<<"\n";

    for(int i=0; i<root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    Treenode<int>* root = takeInput();

    cout<<"\n\n Display Tree elements : \n\n";
    printTree(root);
}
