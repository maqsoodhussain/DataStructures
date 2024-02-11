#include<iostream>
using namespace std;



//creaing structre of linked lis using class
class Node{
    public:
    int data;
    Node *next;
};

//creating linked list class
class Linked_list{
    private:
    //creating head node
        Node *head;

    public:
    Linked_list(){
        head = NULL;
    }

    //decleration because function are delcerated outside class 

  void insertEnd(Node**,int);
  void display();

};

//creating functions outside class so resolution oprator :: used 



//-------Insertation function method 2 --- other waay ----
void insertEnd(Node **head, int item){
        Node *newnode = new Node();
        newnode->data = item;
        newnode->next=NULL;

        if(*head==NULL){
            *head = newnode;
            cout<<"Inserted "<<newnode->data<<endl;
            return;
        }

        Node *temp = *head;
        while(temp->next != NULL)
            temp = temp->next;
        
        
        temp->next= newnode;
}



int main(){
    Node *head = NULL;
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    return 0;


}