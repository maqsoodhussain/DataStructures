#include<iostream>
using namespace std;


  char stack[20];
  int top = -1; 


void push(char);
void pop();



int main(){

//crearing a variab
    string str;
    cout<<"enter string length upto 20 only : ";
    cin>>str;
    cout<<"\nYou enter: "<<str<<endl;
 

  //pushing single single character in stact implimenting using sta
   int i=0; 
   while(str[i] !='\0'){
      push(str[i]);
      i++;
   }

//pop elements one by one 
  int j=20;
  while(j !=0){
     pop();
      j--;
  }
  
    return 0;
}


//creating push function 
void push(char data){
    top ++;
    stack[top] = data;

}


//creatin pop funciton 
void pop(){
  cout<<stack[top];
  stack[top];
  top--;

}