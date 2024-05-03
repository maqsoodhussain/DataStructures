#include<iostream>
using namespace std;

int fact(int n){
    if(n ==0)
        return 1;
    return n * fact(n-1);
}

//34 factorial = 0
//31 overflow
int main(){
    cout<<fact(32);
}