#include<bits/stdc++.h>

using namespace std;

struct BSTNODE{

int data;

BSTNODE* left;
BSTNODE* right;
} ;

BSTNODE* getNewNode(int data){

BSTNODE* newnode=new BSTNODE();

newnode->data=data;

newnode->left=newnode->right=NULL;

return newnode;

}

bool Search(BSTNODE* root,int data){
   if(root==NULL){
   return false;
   }
   else if(root->data==data){
    return true;
   }
   else if(root->data>=data){

      return Search(root->left,data);

   }
   else{
     return Search(root->right,data);
   }

}

BSTNODE* insertdata(BSTNODE* root,int data){

      if(root==NULL){

         root=getNewNode(data);
         return root;
      }
      else if(root->data>=data){

        root->left=insertdata(root->left,data);

      } else{
       root->right=insertdata(root->right,data);
      }

      return root;

}


int main(void){


BSTNODE* root=NULL;

root=insertdata(root,15);
root=insertdata(root,10);
root=insertdata(root,20);
root=insertdata(root,25);

int sdata;

cin>>sdata;

if(Search(root,sdata)==true)

cout<<"Found";

else{
cout<<"not Found";
}

}
