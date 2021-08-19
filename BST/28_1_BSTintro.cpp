/*
Time cmplexity-->O(log n)
*/
#include <iostream>
#include <stack>
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

Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}
//Delete
//to delete we must preserve the rules are not violated
Node *inorderSucc(Node *root)
{
    Node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
Node *toDelete(Node *root, int k)
{
    if (k < root->data)
    {
        root->left = toDelete(root->left, k);
    }
    else if (k > root->data)
    {
        root->right = toDelete(root->right, k);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = toDelete(root->right, temp->data);
    }
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
//Search
Node *searchInBST(Node *root, int k)
{
    if (root == NULL)
        return NULL;
    if (root->data == k)
    {
        return root;
    }
    if (root->data > k)
    {
        return searchInBST(root->left, k);
    }
    return searchInBST(root->right, k);
}
//Check for BST
bool isBST(Node *root, Node *min = NULL, Node *max = NULL)
{
    if (root == NULL)
        return true;
    if (min != NULL && min->data >= root->data)
    {
        return false;
    }
    if (max != NULL && max->data <= root->data)
    {
        return false;
    }
    bool leftValid = isBST(root->left, min, root);
    bool rightValid = isBST(root->right, root, max);
    return leftValid && rightValid;
}
//Sorted array toBST
Node *sortedArray(int arr[], int start, int end)
{
    if (start > end)
        return NULL;
    int mid = (start + end) / 2;
    Node *root = new Node(arr[mid]);
    root->left = sortedArray(arr, start, mid - 1);
    root->right = sortedArray(arr, mid + 1, end);
    return root;
}
//zig-zag Traversal

void zigzag(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> currLevel;
    stack<Node *> nextLevel;

    bool leftTOright = true;
    currLevel.push(root);
    while (!currLevel.empty())
    {
        Node *temp = currLevel.top();
        currLevel.pop();

        if (temp)
        {
            cout << temp->data;

            if (leftTOright)
            {
                if (temp->left)
                {
                    nextLevel.push(temp->left);
                }
                if (temp->right)
                {
                    nextLevel.push(temp->right);
                }
            }
            else
            {
                if (temp->right)
                {
                    nextLevel.push(temp->right);
                }
                if (temp->left)
                {
                    nextLevel.push(temp->left);
                }
            }
        }
        if (currLevel.empty())
        {
            leftTOright = !leftTOright;
            swap(currLevel, nextLevel);
        }
    }
}
//Are BST identical
//identical BST must be identical in structure

int main()
{
    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    // inorder(root);

    cout << endl;
    /*  if(searchInBST(root,5)){
      cout<<"K exist";
  }else{
      cout<<"K doesnot exist";
  }
  root=toDelete(root,5);
  inorder(root);
  */
    //isBST
    /*Node* root2=new Node(2);
 root2->left=new Node(1);
 root2->right=new Node(3);
cout<<isBST(root2,NULL,NULL);
*/
    //sorted array to BST
    /*
int arr[]={10,20,30,40,50};
Node* root3=sortedArray(arr,0,4);
inorder(root3);
*/
    Node *root4 = new Node(12);
    root4->left = new Node(9);
    root4->right = new Node(15);
    root4->left->left = new Node(5);
    root4->left->right = new Node(10);
    zigzag(root4);
    return 0;
}