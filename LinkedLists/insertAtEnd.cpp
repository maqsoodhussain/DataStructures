#include<iostream>
using namespace std;

struct Node{
    int item;
    Node *next;

    Node(int data){
        item = data;
        next = NULL;
    }
};


void insertAtEnd(Node *end, int data){
   Node *newnode = new Node(data); 
    end ->next = newnode;
    end = newnode;   

}

void show(Node *head){
   Node *temp = head;

   while(temp!=NULL){
     cout<<temp->item<<"->";
     temp = temp->next;
   }
   cout<<"NULL";

}

int main(){
  
  Node *head, *tail;
  Node *node1= new Node(1);
  head = tail = node1;
  
    insertAtEnd(tail, 2);
    show(head);
    return 0;
}