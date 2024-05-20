#include<iostream>
using namespace std;

int h=1;
struct  node
{
    int data;
    node *next;
};

class Stack{
    node *head;
    node *top;
    
    public:
    
        Stack(){
            top = NULL;
        }

    void push();
    int pop();
    int peek();
    void isEmpty();
    
};


void Stack::push(){
    int value;
    cout<<"\nEnter data item: "<<endl;
    cin>>value;
    
    node *newNode = new node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    if(h == 1){
        head = top;
    }
    h++;
}


int Stack::pop(){
    if(top==NULL){
        cout<<"Stack underflow"<<endl;
        return -1;
    }

    node *temp = top;
    int popData = top->data;

    top= top->next;
    delete(temp);
    return popData;
}

int Stack::peek(){
    if(top==NULL){
        cout<<"Stack empty"<<endl;
        return -1;
    }

    return top->data;

}

void Stack::isEmpty(){
    if(top == NULL)
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty"<<endl;
    
}



int main(){

    Stack stack;
    

    while(true){

        
         cout<<"-----------------------------------------"<<endl;
        cout<<"1.PUSH  ";
        cout<<"2.POP   ";
        cout<<"3.PEEK   ";
        cout<<"4.EMPTY - NOT-EMPTY   ";
        cout<<"5.EXIT \n";
        cout<<"-----------------------------------------"<<endl;
        cout<<"Enter choice : ";
        int c ;
        cin>>c;


         switch (c)
         {
            case 1:
                stack.push();
                    continue;
            case 2:
                cout<<"Poped element: "<<stack.pop()<<endl;
                    continue;
            case 3:
                cout<<"Peek : "<<stack.peek()<<endl;
                continue;
            case 4:
                stack.isEmpty();
                continue;
            case 5:
                    exit(0);
         default:
            cout<<"Enter Right Choice: ";
         }

    }

   
    return 0;
}
