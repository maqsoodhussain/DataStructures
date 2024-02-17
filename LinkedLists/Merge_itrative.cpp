#include<iostream>
using namespace std;



//creaing structre of linked lis using class
class Node{
    public:
    int data;
    Node *next;
};

//-------Insertation function method 2 --- other waay ----
void insertEnd(Node **head, int item){
        Node *newnode = new Node();
        newnode->data = item;
        newnode->next=NULL;

        if(*head==NULL){
            *head = newnode;
            cout<<"Inserted : "<<newnode->data<<endl;
            return;
        }

        Node *temp = *head;
        while(temp->next != NULL)
            temp = temp->next;
        
        
        temp->next= newnode;
        cout<<"Inserted : "<<newnode->data;
}


//function to merge two linked lists
 Node *merge(Node* &head1, Node* &head2){
        Node *p1 = head1;
        Node *p2 = head2;
        Node *demyNode =new Node();
        Node *p3 = demyNode;
 }


 

void display(Node *head){
    while(head !=NULL){
        cout<<head->data<<" -> ";
        head = head ->next;
    }
    cout<<"NULL";
}

int main(){

    //creating first node 
    Node *head = NULL;
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    cout<<endl;

    //pasing first node to function 
    display(head);
    return 0;


}