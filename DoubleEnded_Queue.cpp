#include<iostream>
using namespace std;


class Node{
   public:
   int value;
   Node *next;
   Node *prev;
  Node(int value):value(value), next(NULL), prev(NULL){}
};


class Dequeue{
    Node *front,*rear;
    int size;

    public:
        Dequeue():front(NULL), rear(NULL), size(0){}

        bool isEmpty() const {return size==0;}
        bool getSize() const {return size;}

        void insertFront(int);
        void insertLast(int);
        int getFront();
        int getRear();
        
};



void Dequeue::insertFront(int value){
            Node* newNode = new Node(value);
            
            if(isEmpty()){
                front = rear=newNode;
                cout<<"Inserted at Front: "<<value<<endl;
            }else{
                newNode->next = front;
                front->prev = newNode;
                front= newNode;
                cout<<"Inserted at Front: "<<value<<endl;
                size++;
            }
        }

void Dequeue::insertLast(int value){
            Node *newNode = new Node(value);
            if(isEmpty()){
                front = rear = newNode;
                cout<<"Inserted at Last: "<<value<<endl;
            }else{
                rear->next = newNode;
                newNode->prev = rear;
                rear = newNode;
                cout<<"Inserted at Last: "<<value<<endl;
            }
            size++;
        }
int Dequeue::getFront(){
    if(isEmpty()){cout<<"Dequeue is Empty"<<endl; return -1;}
    cout<<"Front is : "<<front->value;
    return front->value;
}

int Dequeue::getRear(){
    if(isEmpty()){cout<<"Dequeue is Empty"<<endl; return -1;}
    cout<<"Rear is : "<<rear->value;
    return rear->value;
}

int main(){
    Dequeue dq;
    dq.insertFront(1);
    dq.getFront();
    dq.insertFront(2);
    dq.insertLast(9);
    
    dq.getRear();
    return 0;
}