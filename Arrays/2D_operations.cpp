#include<iostream>
using namespace std;
 
 //Breaking operations in functions 

 //Inseration operation 
 void inseration(){
      //creating array
      int arr[5][5]={0,0},i,n,el,at;
      int* p;

      cout<<"Enter how many elments you want to enter (<25)\n";
      cin>>n;

     //pointer p holds first index address
      p = &arr[0][0];
 
      cout<<" \nEnter "<<n<<" Elements: ";
      for(i =0; i<n; i++)
          cin>> *p++;

    p = &arr[0][0];
    cout<<"\n You enter \n";
    for(i =0; i<n; i++,p++)
    cout<<" "<<*p;

    
 }


 //driver program
int main(){

    inseration();
    return 0;
}