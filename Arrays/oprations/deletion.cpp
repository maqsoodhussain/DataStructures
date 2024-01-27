#include<iostream>
using namespace std;

int main(){
    int num[20]={0};
    int i,j,n,p;
    
    //taking array size
    cout<<"\n Enter how many elements you want to enter \n";
    cin>>n;

    //taking elements from user 
    cout<<"Enter 5 Elements\n";
    for(i=0; i<n; i++)
    cin>>num[i];

  //printing elements
    cout<<"\n  Elements with Address\n";

    for(i=0; i<n; i++)
       {
            cout<<"\n  Element is : ";
            cout<<num[i];

       }



      //take position and element
      cout<<"\n Enter position you want to delete";
      cin>>p; 
      p--;

     //blow three lines are logic of the program
      for(i=0; i<n; i++){
        if(i>=p)         //when we encounter that position  
            num[i]=num[i+1];    // we fill that postion with next 
      }

     //printing after delteion
       for(i=0; i<n; i++){
        if(num[i]!=0)
          cout<<" ";
          cout<<num[i];
       }
    return 0;
}