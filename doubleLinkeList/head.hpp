
#include"main.hpp"

struct Node{
   
   string name;
   int id;
   Node *left;
   Node *right;
   };

   Node *Head =NULL;
   Node *Tail=NULL;
   void insertBegin(Node)
   {
   Node *newNode=new Node();
   cout<<"enter your name : ";
   cin>>newNode->name;
   cout<<"enter your ID : ";
   cin>>newNode->id;
   newNode->left=NULL;
   newNode->right=NULL;
    newNode->right=Head;
    Head->left=newNode;
  
   
   }