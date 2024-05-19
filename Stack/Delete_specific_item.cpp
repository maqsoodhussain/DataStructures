#include<iostream>
using namespace std;

int main(){
    
    int stack[5];
    int top;


    cout<<"Enter elements and put zero to exit\n";

    while(1){
        cin>>stack[top];
        
        if(stack[top]==0)
            break;

        top ++;


        if(top>4){
            cout<<"Stack Full\n";
            break;

        }else
            cout<<"Stack not full yet: Enter Element : ";

        
    }
    cout<<"\n Stack Elements are : ";
        for(int i=0; i<5; i++){
            cout<<stack[i];
        }

    cout<<"\nEnter Element position to delete betweeen 1 - 5";
    int p;
    cin>>p;
    p--;



    //deleting element insert and deletion in only one end if we want to dete and inner position so all elemtes 
    // deletes till that element
    for(int i = 4; i>=p; i--){
        stack[i] = 0;
        
    }
   
    cout<<"\n Stack Elements are : ";
        for(int i=0; i<5; i++){
            cout<<stack[i];
        }

   
    return 0;
}
