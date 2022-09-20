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

Treenode<int>* takeInput()
{
    int rootData;
    cout<<"Enter data: ";
    cin>>rootData;

    if(rootData == -1) return NULL;

    Treenode<int>* root = new Treenode<int>(rootData);
    Treenode<int>* leftChild = takeInput();
    Treenode<int>* rightChild = takeInput();

    root->left = leftChild;
    root->right = rightChild;
}

// 1 2 4 -1 -1 5 6 -1 -1 7 -1 -1 3 8 -1 -1 -1
int main()
{
    // Take input from user
    Treenode<int>* root = takeInput();

    // print the elements of tree
    cout<<"\n\nThe elements of given tree print below : \n\n";
    printTree(root);

    // After all work finally delete the tree from memory
    delete root;

}

