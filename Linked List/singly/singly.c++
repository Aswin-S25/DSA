#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* next;

        node(int val)
        {
            data = val;
            next = NULL;
        }
};

// inserting a node at the begining
void insertAtHead(node* &head, int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head = n;
    }
    else
    {
        node* temp = head;
        head = n;
        head->next = temp;
    }
}

//inserting a node  after a position
void insert_position(node* &head, int val, int position)
{
    node* n = new node(val);
    if(head == NULL)
    {
        cout<<"insertion cannot be possible"<<endl;
    }
    else
    {
        node* temp = head;
        for(int i=0;i<position-1;i++)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
    }
}

//inserting a node at the end

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    node* temp = head;
    if(head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        /* code */
        temp = temp->next;
    }
    temp->next = n;
    
}

//delete a node at the begininig
void deleteAtHead(node* &head)
{
    if(head == NULL)
    {
        cout<<"deletion not possible"<<endl;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}

//deleting a node at the end
void deleteAtTail(node* &head)
{
    node* temp = head;
    while (temp->next->next != NULL)
    {
        /* code */
        temp = temp->next;
    }
    node *deleteto = temp->next;
    temp->next = NULL;
    delete deleteto;
    
}

//deleting a node based on data
void deleteData(node* &head, int val)
{
    if(head == NULL)
    {
        cout<<"cannot delete in an empty linked list";
    }
    else if(head->next == NULL)
    {
        deleteAtHead(head);
    }
    else
    {
        node* temp = head;
        while (temp->next->data != val)
        {
            temp = temp->next;
        }
        node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
    
    
}
//deleting a node based on position
void delete_position(node* &head, int position)
{
    if(head == NULL)
    {
        cout<<"deletion cannot be possible";
    }
    else if(position == 1)
    {
        deleteAtHead(head);
    }
    else
    {
        node* temp = head;
        for(int i=1;i<position-1;i++)
        {
            temp = temp->next;
        }
        node* deleteto = temp->next;
        temp->next = deleteto->next;
        deleteto->next = NULL;
        delete deleteto;
    }
}

//displaying the linkd list
void display(node* head)
{
    node* temp = head;
    while (temp != NULL)
    {
        /* code */
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int main()
{
    node* head = NULL;
    int choice, posi, data;
    while(choice != 0)
    {
        cout<<"1 - inserting at begining\n2- inserting at end\n3- inserting based on position"<<endl;
        cout<<"4- deleting at begining\n5- deleting at end\n6- deleting based on data\n7- deleting based on position"<<endl;
        cout<<"0- exit"<<endl;
        cout<<"enter the choice :";
        cin>>choice;
        switch (choice)
        {
        case 1:
            /* code */
            cout<<"enter the data = ";
            cin>>data;
            insertAtHead(head, data);
            break;
        case 2:
            cout<<"enter the data = ";
            cin>>data;
            insertAtTail(head, data);
            break;
        case 3:
            cout<<"enter the data and position:  ";
            cin>>posi;
            insertAtTail(head, posi);
            break;
        case 4:
            deleteAtHead(head);
            break;
        case 5:
            deleteAtTail(head);
            break;
        case 6:
            cout<<"enter the data :";
            cin>>data;
            deleteData(head, data);
            break;
        case 7:
            cout<<"enter the positon : ";
            cin>>posi;
            delete_position(head, posi);
            break;
        case 0:
            break;

        default:
            break;
        }
        cout<<"\n\n";
        display(head);
        cout<<"\n\n";
        
    }
    return 0;
}