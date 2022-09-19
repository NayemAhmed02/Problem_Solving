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

Treenode<int>* takeInputLevelWise()
{
    int rootData;
    cout<<"Enter root data: ";
    cin>>rootData;

    if(rootData == -1) return NULL;

    Treenode<int>* root = new Treenode<int>(rootData);

    queue<Treenode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty())
    {
        Treenode<int>* frontt = pendingNodes.front();
        pendingNodes.pop();

        // Enter left child and make connection
        cout<<"Enter left child of "<<frontt->data<< " : ";
        int leftData;
        cin>>leftData;

        if(leftData != -1)
        {
            Treenode<int>* leftChild = new Treenode<int>(leftData);
            frontt->left = leftChild;
            pendingNodes.push(leftChild);
        }

        // Enter right child and make connection
        cout<<"Enter right child of "<<frontt->data<< " : ";
        int rightData;
        cin>>rightData;

        if(rightData != -1)
        {
            Treenode<int>* rightChild = new Treenode<int>(rightData);
            frontt->right = rightChild;
            pendingNodes.push(rightChild);
        }
    }

    return root;
}

int main()
{
    // Take input from user
    Treenode<int>* root = takeInputLevelWise();

    // print the elements of tree
    cout<<"\n\nThe elements of given tree print below : \n\n";
    printTree(root);

    // After all work finally delete the tree from memory
    delete root;

}


