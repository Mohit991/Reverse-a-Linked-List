#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
insertt()
{
    struct node *temp = new node;
    cin>>temp->data;
    if(start==NULL)
    {
        start = temp;
        temp->next =NULL;
    }
    else{
        struct node *k;
        k=start;
        while(k->next!=NULL)
        {
            k=k->next;
        }
        k->next=temp;
        temp->next=NULL;
    }
}
display()
{
    struct node *t=start;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}
reversee()
{
    cout<<"Reversing LINKED LIST....\n";
    struct node *t=start;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    struct node *q=start;
      struct node *n = q->next;
      struct node *m = q->next->next;
      q->next->next = start;
      q->next = NULL;
    while(m!=NULL)
    {
       struct node *k=m->next;
        m->next=n;
        n=m;
        m=k;


    }
    start  = t;

    //the following loop is to print the reversed linked list.
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}

int main()
{
    cout<<"LINKED LIST\n";

        cout<<"How many elements to enter \n";
        int c;
        cin>>c;
        cout<<"Enter "<<c<<" elements\n";
        for(int i=0;i<c;i++){
         insertt();
        }

    reversee();
    return 0;
}
