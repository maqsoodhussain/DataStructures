#include<iostream>
using namespace std;
#define SIZE 10

class CircularQueue{ 
        int a[SIZE]={0};
        int rear, front;

    public:
        CircularQueue():rear(-1),front(-1){}

    
        bool isfull();
        bool isEmpty();
        void enQueue();
        int deQueue();
        void display();
        int size();
};


bool CircularQueue::isfull(){
   // return ((rear +1 ) % 10) == front; // one way to check is queue full or not 

   //another way 
    if(front == 0 && rear == SIZE-1){
        //cout<<"Queue Is Full"<<endl;
        return true;
        }
        
    
    if(front == rear + 1){
        //cout<<"Queue Is Full"<<endl;
        return true;
    }

    //cout<<"Queue is not Full"<<endl;
    return false;
}

bool CircularQueue::isEmpty(){
     if(front == -1){
       // cout<<"Queue is Empty"<<endl;
        return true;
     }

    // cout<<"Queue is Not Empty"<<endl;
        return false;

}

void CircularQueue::enQueue(){
        int data;
        cout<<"Enter Element: ";
        cin>>data;

        if(isfull()){cout<<"Quueu is full"<<endl;}
        else{
            if(isEmpty()){
                front = 0;
            }
                rear   = (rear+1) % SIZE ;
                a[rear] = data;
                cout<<"Inserted value "<<data<<endl;

            }
        }


int CircularQueue::deQueue(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
        return -1; 
    }else{
        int temp = a[front];
        if(front == rear){//only present one element so remove that front rear = -1 
            front = rear = -1;
        }else{
            front = (front+1) % SIZE;
        }
        return temp;
    }
}

void CircularQueue::display(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"Elements of Circular Queue: ";
        for(int i=front; i!=rear, i = ((i+1)%SIZE);){
                cout<< a[i]<<" ";
        }

        cout<<" "<<a[rear]<<endl;
    }
    
}

int CircularQueue::size(){
        if(isEmpty()){
            return 0;
        }else if(rear >= front){
            return rear-front+1;
        }
}

int main(){


    CircularQueue queue;
        while(true){

        
        cout<<"\n-------------------------------------------------------"<<endl;
        cout<<"1.ENQUEUE ";
        cout<<"2.DEQUEUE ";
        cout<<"3.DISPLAY ";
        cout<<"4.SIZE ";
        cout<<"5.EXIT \n";
        cout<<"------------------------------------------------------"<<endl;
        cout<<"Enter choice : ";
        int c ;
        cin>>c;


         switch (c)
         {
            case 1: queue.enQueue();continue;
            case 2:cout<<"Dequeued Element : "<<queue.deQueue()<<endl;continue;
            case 3:queue.display();continue;
            case 4:cout<<"Size : " <<queue.size()<<endl;continue;
            case 5:exit(0);
            default:cout<<"Enter Right Choice: "<<endl;
         }

    }


    return 0;
}