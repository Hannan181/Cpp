#include<iostream>
#include<algorithm>
using namespace std;
 
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
 //Height is the total depth
 int height(Node* root){
     if(root==NULL)return 0;
     int lheight=height(root->left);
     int rheight=height(root->right);
     return max(lheight,rheight)+1;
 }
 //diameter is longest thread possible through a BT
 int diameter(Node* root){
     if(root==NULL)return 0;
     int lheight=height(root->left);
     int rheight=height(root->right);
     int currDiameter=lheight+rheight+1;

     int ldiameter=diameter(root->left);
     int rdiameter=diameter(root->right);

     return max(currDiameter,max(ldiameter,rdiameter));
 }
 
int main(){
   Node* root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->left->right=new Node(5);
   root->right->left=new Node(6);
   root->right->right=new Node(7);
  cout<<height(root)<<endl;
  cout<<diameter(root);
return 0;
}