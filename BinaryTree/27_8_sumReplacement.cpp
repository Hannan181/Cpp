#include<iostream>
using namespace std;
 
 //Sum Replacement-->replace the value of each Node with the sum of all subtree node and itself
 /*
          1             15
         / \           / \
        2   3  =>     11  3
       / \           / \
      4   5         4   5
 */
struct Node{
     int data;
     struct Node* left;
     struct Node* right;

     Node(int val){
         data=val;
         left=NULL;
         right=NULL;
     }
 };
 void sumReplaceMent(Node* root){
     if(root==NULL)return;
     sumReplaceMent(root->left);
     sumReplaceMent(root->right);
     if(root->left)root->data+=root->left->data;
     if(root->right)root->data+=root->right->data;
 }
 void preorder(Node* root){
     if(root==NULL)return;
     cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
 }
int main(){
    Node* root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->left->right=new Node(5);
   root->right->left=new Node(6);
   root->right->right=new Node(7);
   preorder(root);
   cout<<endl;
   sumReplaceMent(root);
   preorder(root);
return 0;
}