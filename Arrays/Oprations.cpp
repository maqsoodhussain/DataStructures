#include<iostream>
using namespace std;


//creating function for traversing an array 

void traversing(){
    //creating an array of five elements 
    int arr1[5];
    
    cout<<"Enter 5 elements\n";
    for(int i=0; i<5; i++)
    cin>>arr1[i];


    ////OPERATIN 1 --- TRAVERSING-- meaning to visiting each elements
    cout<<"Entered Array : \n";

     for(int i = 0; i <5; i++)
     cout<<arr1[i]<<" ";

}



int main(){
  //calling traversing array
   traversing();

   
    return 0;
}