#include<iostream>
using namespace std;

int main(){
    int num[5], i;

    cout<<"Enter 5 Elements\n";
    for(i=0; i<5; i++)
    cin>>num[i];

    cout<<"\n  Elements with Address\n";

    for(i=0; i<5; i++)
       {
            cout<<"\n  Element is : ";
            cout<<num[i] ;
            cout<<" Address is : ";
            cout<<&num[i];

       }
     
    return 0;
}