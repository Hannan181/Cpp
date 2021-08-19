#include<iostream>
using namespace std;
 
 struct Node
 {
     int data;
     Node* left;
     Node* right;
     Node(int val){
         data=val;
         left=NULL;
         right=NULL;
     }
 };

 Node* constructBST(int preorder[],int* preorderidx,int key,int min,int max,int n){
     if(*preorderidx>=n)return NULL;
     Node* root=NULL;
     if(key>min && key>min){
         root=new Node(key);
         *preorderidx=*preorderidx+1;

         if(*preorderidx<n){
             root->left=constructBST(preorder,preorderidx,preorder[*preorderidx],min,key,n);
         }
         if(*preorderidx<n){
             root->right=constructBST(preorder,preorderidx,preorder[*preorderidx],key,max,n);
         }
     }
     return root;
 }
 void printPreorder(Node* root){
     if(root==NULL)return ;
     cout<<root->data<<" ";
     printPreorder(root->left);
     printPreorder(root->right);
 }
int main(){
   int preorder[]={10,2,1,13,11};
   int idx=0;
   Node* root=constructBST(preorder,&idx,preorder[0],INT_MIN,INT_MAX,5);
   printPreorder(root);
return 0;
}