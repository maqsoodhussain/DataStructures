#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class Queue{
     node *front,*rear;

     public:
        Queue(){
            front=rear=NULL;
        }
    
        void enqueue();
        void dequeue();
        void display();
};

void Queue::enqueue(){
    int item;
     cout<<"Enter Element : ";
     cin>>item; 
     

    node *newNode= new node();
    newNode->data = item;
    newNode->next = NULL;



     if(front == NULL)
        front = rear  = newNode;
    else{
        rear->next = newNode;
        rear = newNode;

    } 
   
}

void Queue::dequeue(){

}

void Queue::display(){
        node *temp;
        temp = front;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
}


int main(){

   Queue queue;
    while(true){

        
        cout<<"\n-----------------------------------------"<<endl;
        cout<<"1.INSERT  ";
        cout<<"2.DELETE  ";
        cout<<"3.SHOW   ";
        cout<<"4.EXIT \n";
        cout<<"-----------------------------------------"<<endl;
        cout<<"Enter choice : ";
        int c ;
        cin>>c;


         switch (c)
         {
            case 1: queue.enqueue();continue;
            case 2: queue.dequeue();continue;
            case 3: queue.display();continue;
            case 4:exit(0);
            default:cout<<"Enter Right Choice: "<<endl;
         }

    }
    return 0;
}