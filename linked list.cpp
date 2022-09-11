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
    int data;
    cin>>data;

    while(data != -1)
    {
        node *newNode = new node(data);

        if(head == NULL) head = newNode;
        else
        {
            node *temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        cin>>data;
    }
    return head;
}

node* takeInputBetter()
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

node* insertNew(node *head, int posi, int data)
{
    node *newNode = new node(data);

    if(posi == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    int cnt = 1;
    node *temp = head;

    while(temp != NULL && cnt < posi)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp != NULL)
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }

    return head;
}
void print(node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<"\n";
        head = head->next;
    }
}

int main()
{
    // Statically
    node n1(1);
    node n2(2);

    node *head1 = &n1;
    n1.next = &n2;

    print(head1);

    // dynamically
    node *n3 = new node(7);
    node *n4 = new node(9);

    node *head2 = n3;
    n3->next = n4;

    print(head2);

    // Take input
    node *head3 = takeInput();
    print(head3);

    // Take input better
    node *head4 = takeInputBetter();
    print(head4);

    // insert new node
    int position, data;
    cout<<"Enter element to be inserted: ";
    cin>>data;
    cout<<"Enter position ";
    cin>>position;
    head4 = insertNew(head4, position, data);
    cout<<"After insert \n";
    print(head4);


}
