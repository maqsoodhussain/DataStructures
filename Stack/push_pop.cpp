#include<iostream>
using namespace std;

void push();
void pop();
void show();
void peek();
void isFull();
void isEmpty();

static int stack[5]={0};
int top = -1;

int main(){
    while(true){

        
         cout<<"-----------------------------------------------------------"<<endl;
        cout<<"1.PUSH  ";
        cout<<"2.POP   ";
        cout<<"3.SHOW  ";
        cout<<"4.PEEK   ";
        cout<<"5.ISFULL ";
        cout<<"6.ISEMPTY ";
        cout<<"7.EXIT \n";
        cout<<"-----------------------------------------------------------"<<endl;
        cout<<"Enter choice : ";
        int c ;
        cin>>c;


         switch (c)
         {
            case 1:
                push();
                    continue;
            case 2:
                pop();
                    continue;
            case 3:
                show();
                continue;
            case 4:
                peek();
                continue;
            case 5:
                isFull();
                continue;
            case 6:
                isEmpty();
                continue;
            case 7:
                    exit(0);
         default:
            cout<<"Enter Right Choice: ";
         }

    }
    return 0;
}


void push(){
    int data;
    cout<<"\nEnter data item: "<<endl;
    cin>>data;
        if(top>=4){
            cout<<"OverFlow"<<endl;
            return;
        }else{
        top++;
        stack[top]=data;
        }
}



void pop(){
    if(top<0){
        cout<<"UnderFlow"<<endl;
        return;
    }else{
    stack[top]=0;
    top--;
    }
}

void peek(){
   cout<<"\nPeek : "<<stack[top]<<endl;
}

void isEmpty(){
    if(top == -1)
        cout<<"\n STACK IS EMPTY"<<endl;
    else
        cout<<"\n STACK IS NOT EMPTY"<<endl;
        
}

void isFull(){
    if(top == 4)
        cout<<"\n STACK IS FULL"<<endl;
    else
        cout<<"\n STACK IS NOT FULL"<<endl;
        
}


void show(){

    cout<<"\n Stack elements : ";
    for(int i = 0; i<=top; i++){
        cout<<stack[i]<<" ";
    }
}