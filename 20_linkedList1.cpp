#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtLast(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertAtFirst(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void deleteAtHead(node *head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}
void deleteitem(node *&head, int val)
{
    node *temp = head;
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
    }
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
bool present(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
//itterator method
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nxtptr;
    while (currptr != NULL)
    {
        nxtptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nxtptr;
    }
    return prevptr;
}
node *reccursiveReverse(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = reccursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}
node *kPartsReverse(node *head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nxtptr;

    int count = 0;
    while (currptr != NULL & count < k)
    {
        nxtptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nxtptr;
        count++;
    }
    if (nxtptr != NULL)
    {
        head->next = kPartsReverse(nxtptr, k);
    }
    return prevptr;
}
//ffloy algorithm//hare and tortiose
bool createcycle(node *&head, int pos)
{
    node *temp = head;
    node *startnode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}
bool detectCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
}
void removeCycle(node *head)
{
    node *fast = head;
    node *slow = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}
int length(node* head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
int intersection(node* head1,node* head2){
      int l1=length(head1);
      int l2=length(head2);

      int d=0;
      node* ptr1;
      node* ptr2;
      
      if(l1>l2){
          d=l1-l2;
          ptr1=head1;
          ptr2=head2;
      }
      else{
          d=l2-l1;
          ptr1=head2;
          ptr2=head1;
      }

      while(d){
          ptr1=ptr1->next;
          if(ptr1==NULL){
              return -1;
          }
          d--;
      }

      while(ptr1!=NULL && ptr2!=0){

          if(ptr1==ptr2){
              return ptr1->data;
          }
          ptr1=ptr1->next;
          ptr2=ptr2->next;
      }
      return -1;
}
node* merge(node* head1,node* head2){
    node* p1=head1;
    node* p2=head2;

    node* dummyNode=new node(-1);
    node* p3=dummyNode;

    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummyNode->next;
}
void evenAfterOdd(node* &head){
    node* odd=head;
    node* even=head->next;\
    node* evenstart=even;
     
     while(odd->next!=NULL && even->next!=NULL){
         odd->next=even->next;
         odd=odd->next;

         even->next=odd->next;
         even=even->next;
     }
     odd->next=evenstart;
     if(odd->next!=NULL){
         even->next=NULL;
     }
}
int main()
{
    node *head = NULL;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 5);
    insertAtFirst(head, 7);
    insertAtFirst(head, 6);
    insertAtFirst(head, 9);
    insertAtFirst(head, 7);
    // display(head);
    // cout<<present(head,3)<<" ";
    // deleteitem(head,1);
    // display(head);
    /*node* newHead=reverse(head);
    display(newHead);

    node* rechead=reccursiveReverse(newHead);
    display(rechead);
    int k=2;
    node* khead=kPartsReverse(rechead,k);
    display(khead);*/

    createcycle(head, 4);
    // cout << detectCycle(head);
    removeCycle(head);
    cout << detectCycle(head);
    return 0;
}