#include<bits/stdc++.h>

#include<queue>

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

//breathfirst tree traversal

void leveordertraversal(BSTNODE* root){
         if(root==NULL){
         return;
         }
         queue<BSTNODE*> q;
         q.push(root);
         while(!q.empty()){
         BSTNODE* current=q.front();
         cout<<current->data<<"-->";
         if(current->left!=NULL){
           q.push(current->left);

         }if(current->right!=NULL){

         q.push(current->right);
         }


        q.pop();

         }
}

void preodertraversal(BSTNODE* root){
     if(root==NULL){
     return;
     }
     cout<<root->data<<"-->";

     preodertraversal(root->left);
     preodertraversal(root->right);

}

void inodertraversal(BSTNODE* root){
     if(root==NULL){
     return;
     }


     inodertraversal(root->left);
     cout<<root->data<<"-->";
     inodertraversal(root->right);

}

void postodertraversal(BSTNODE* root){
     if(root==NULL){
     return;
     }
     postodertraversal(root->left);
     postodertraversal(root->right);
      cout<<root->data<<"-->";

}




int main(void){


BSTNODE* root=NULL;

root=insertdata(root,15);
root=insertdata(root,10);
root=insertdata(root,20);
root=insertdata(root,25);
root=insertdata(root,5);
root=insertdata(root,30);
root=insertdata(root,2);
root=insertdata(root,7);
cout<<endl<<"level-order"<<endl;
leveordertraversal(root);
cout<<endl<<"pre-order"<<endl;
preodertraversal(root);
cout<<endl<<"In-order"<<endl;
inodertraversal(root);
cout<<endl<<"Post-order"<<endl;
postodertraversal(root);

}

