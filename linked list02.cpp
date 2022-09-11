#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

node* takeInput()
{
    node *head = NULL;
    node *tail = NULL;

    int data;
    cin>>data;
    while(data != -1)
    {
        node *newNode = new node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        cin>>data;
    }
    return head;
}

void print(node *head)
{
    node *temp = head;
    cout<<"Linked List Elements are: \n";
    while(temp != NULL)
    {
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
    cout<<"\n\n=======================\n\n";
}

node* insertNewNode(node *head, int data, int position)
{
    node *newNode = new node(data);
    if(position == 1)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    node *temp = head;
    int cnt = 2;
    while(cnt < position && temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp != NULL)
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
    else
    {
        cout<<"Invalid Position\n";
    }
    return head;
}

node* deleteNode(node *head, int posi)
{
    node *temp = head;
    if(posi < 1)
    {
        cout<<"Invalid position.\n";
        return head;
    }
    if(posi == 1)
    {
        head = head->next;
        delete(temp);
        return head;
    }
    int cnt = 2;
    while(cnt < posi && temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next != NULL)
    {
        node *temp2 = temp->next;
        temp->next = temp2->next;
        delete(temp2);
    }
    else cout<<"Invalid position.\n";

    return head;
}
int main()
{
    // Take input from user
    cout<<"Enter node element : ( -1 is the terminating point ) : ";
    node *head = takeInput();

    // Print
    print(head);

    // Insert New Node
    int data, position;
    cout<<"Enter data you want to be inserted: ";
    cin>>data;
    cout<<"Enter position: ";
    cin>>position;
    head = insertNewNode(head, data, position);

    //print after inserted new node
    cout<<"After inserted "<<data<<" in "<<position<<"th position\n";
    print(head);

    // Delete A specific position node
    int posi;
    cout<<"Enter the position of the node you want to deleted: ";
    cin>>posi;
    head = deleteNode(head, posi);

    // print after delete a node
    cout<<"After deleting "<<posi<<"th node.\n";
    print(head);
}
