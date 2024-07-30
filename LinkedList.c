#include <stdio.h>
#include<stdlib.h>
void createnode();
struct node {
  int data;
   struct node *next;
};
typedef struct node node;
node *head = NULL;
void main(){
  int i, n;
  printf("Enter the number of node : \n");
  scanf("%d",n);
  for(i =0;i<n;i++){
    createnode();
  }
}
void createnode(){
  node *temp;
  temp = ( node*) malloc (sizeof( node));
  if(temp==NULL) exit(1);
  printf("Enter Data Value : ");
  scanf("%d",&temp->data);
  temp->next=NULL;
  if(head==NULL){
    head= temp;
  }
  else{
   node *p = head;
    while(p->next!= NULL){
      p = p->next;
    }
    p->next = temp;
    p= NULL;
  }
  temp =NULL;
  
}