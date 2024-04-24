#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node *next;
};

class Circular_Queue{
    Node *front,*rear;
    public:
    Circular_Queue(){
        front=rear=NULL;
    }
   void enqueue(int);
   void dequeue();
   void display();

};



void Circular_Queue::enqueue(int item){
    Node *newNode = new Node();
    newNode->data = item;
    newNode->next= NULL;


    if(front==NULL){
        front=rear=newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
    cout<<item<<" Inserted";
    cout<<endl;
}


void Circular_Queue::dequeue(){
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
    }else if(front==rear){
        Node *temp = front;
        front = rear=NULL;
        delete(temp);
    }else{
        Node *temp = front;
        front = front->next;
        rear->next = front;
        delete(temp);
    }
}



void Circular_Queue:: display(){
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
    }else{
        Node *temp = front;
            do{
                cout<<temp->data<<" ";
                temp = temp->next;
            }while(temp!=front);
            cout<<endl;
}
}
int main(){
     Circular_Queue q1;
     q1.enqueue(5);
     q1.enqueue(6);
     q1.enqueue(7);
     q1.enqueue(8);

     q1.display();
     q1.dequeue();
     q1.display();
 return 0;
}