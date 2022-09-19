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

int main()
{
    // create tree
    Treenode<int>* root = new Treenode<int>(1);
    Treenode<int>* node1 = new Treenode<int>(2);
    Treenode<int>* node2 = new Treenode<int>(3);

    root->left = node1;
    root->right = node2;

    // After all work finally delete the tree from memory
    delete root;

}
