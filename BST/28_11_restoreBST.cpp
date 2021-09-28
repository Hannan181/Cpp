#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void calcPOinters(Node*root,Node**first,Node**mid,Node**last,Node**prev){
      if(root==NULL)return;
      if(*prev &&root->data<(*prev->data))
}
void restoreBST(Node *root)
{
    Node *first = NULL;
    Node *mid = NULL;
    Node *last = NULL;
    Node *prev = NULL;

    calcPOinters(root, &first, &mid, &last, &prev);
    //case1;
    if (first && last)
    {
        swap(&first->data, &last->data);
    }else if(first&&mid){
       swap(&(first->data),&(last->data));
    }
}
int main()
{

    return 0;
}