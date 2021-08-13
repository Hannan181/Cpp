#include<iostream>
using namespace std;
 
 //Balanced Height Tree->>>>For Each Node the difernece between the left subtree and the right subtree <=1;
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
 int height(Node* root){
     if(root==NULL)return 0;
     int lheight=height(root->left);
     int rheight=height(root->right);
     return max(lheight,rheight)+1;
 }
 bool isBalanced(Node* root){
     if(root==NULL)return true;
     if(!isBalanced(root->left)){
        return false;
     };
     if(!isBalanced(root->right)){
         return false;
     }
     int lh=height(root->left);
     int rh=height(root->right);
 }
int main(){
     Node* root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->left->right=new Node(5);
   root->right->left=new Node(6);
   root->right->right=new Node(7);
   cout<<isBalanced(root);
return 0;
}