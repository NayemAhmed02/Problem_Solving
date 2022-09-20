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

void inOrderTraversal(Treenode<int>* root)
{
    if(root == NULL) return;

    inOrderTraversal(root->left);
    cout<<root->data<<"\n";
    inOrderTraversal(root->right);
}


// 1 2 3 4 5 8 -1 -1 -1 6 7 -1 -1 -1 -1 -1 -1
int main()
{
    // Take input from user
    Treenode<int>* root = takeInputLevelWise();

    // Pre order traversal
    cout<<"\n\nDisplay tree elements in inorder fashion : \n\n";
    inOrderTraversal(root);


    // After all work finally delete the tree from memory
    delete root;

}





