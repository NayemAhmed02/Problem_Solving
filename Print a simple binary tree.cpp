#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Treenode
{
public:
    T data;
    Treenode* left;
    Treenode* right;

    Treenode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~Treenode()
    {
        delete left;
        delete right;
    }
};

void printTree(Treenode<int>* root)
{
    if(root == NULL) return;

    cout<<root->data<<"  :  ";

    if(root->left != NULL) cout<<"L"<<root->left->data<<" ";
    if(root->right != NULL) cout<<"R"<<root->right->data<<" ";

    cout<<"\n";

    printTree(root->left);
    printTree(root->right);
}

int main()
{
    // create tree
    Treenode<int>* root = new Treenode<int>(1);
    Treenode<int>* node1 = new Treenode<int>(2);
    Treenode<int>* node2 = new Treenode<int>(3);

    root->left = node1;
    root->right = node2;

    // print the elements of tree
    cout<<"The elements of given tree print below : \n\n";
    printTree(root);

    // After all work finally delete the tree from memory
    delete root;

}
