#include<iostream>


int main(){

    int stack[5]={0};
    int top=0;

    std::cout<<"Enter Elements, put Zero to exit \n";

    while(1){
        std::cin>>stack[top];
        if(stack[top]==0){
            std::cout<<"By choice termination\n";
            exit(0);
        }
        top++;
        if(top >4){
            std::cout<<"Stack is Full\n";
            break;
        }else
            std::cout<<"stack is Not Full yet\n";

        


    }
    std::cout<<"Stack elements are : ";
    for(int i = 0 ; i<5; i++){
            std::cout<<stack[i];
        }  
        



    return 0;
}