#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Treenode
{
    T data;
    vector<Treenode*> children;

    Treenode(T data)
    {
        this->data = data;
    }
};

void printTree(Treenode<int>* root)
{
    cout<<root.data<<" : ";

    for(int i=0; i<root.children.size(); i++)
    {
        cout<<root.children[i]<<" , ";
    }
    cout<<endl;

    for(int i=0; i<root.children.size(); i++)
    {
        printTree(root.children[i]);
    }
}

int main()
{
    // creating Node
    Treenode<int>* root = new Treenode<int>(1);
    Treenode<int>* first = new Treenode<int>(2);
    Treenode<int>* second= new Treenode<int>(3);
    Treenode<int>* third = new Treenode<int>(4);
    Treenode<int>* fourth = new Treenode<int>(5);

    // Make connection
    root.children.push_back(first);
    root.children.push_back(second);
    first.children.push_back(third);
    first.children.push_back(fourth);

    // Print tree
    printTree(root);

}
