#include<iostream>
using namespace std;

int queue[5];
int rear=0;
int front = 0;

void insert();
void del();
void show();


int main(){


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
            case 1: insert();continue;
            case 2: del();continue;
            case 3:show();continue;
            case 4:exit(0);
            default:cout<<"Enter Right Choice: "<<endl;
         }

    }

    return 0;
}


void insert(){
    if(rear >5){
        cout<<"Queue is Full"<<endl;
        return;
    }

    cout<<"Enter Element: ";
    cin>>queue[rear];
    cout<<"Element entered : "<<queue[rear]<<endl;
    rear++;

}

void del(){
        if(rear==0){
            cout<<"Queue is empty"<<endl;
        }

        queue[front] = 0;
        front++;
}

void show(){
    cout<<"Queue = ";
    for(int i=0; i<rear; i++){
        cout<<" "<<queue[i];
    }
    
}