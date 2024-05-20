
#include<iostream>
using namespace std;
//tower of Honoi
void toh(int n, int a, int b, int c){

    if(n==1){
        cout<<" Move Disk "<<n<<" from "<<a<<" to "<<b<<endl;
        return;
    }

    toh(n-1, a,c,b);
    cout<<" Move Disk "<<n<<" from "<<a<<" to "<<b<<endl;
    toh(n-1,b,a,c);
}

int main(){
    toh(3,1,2,3);

    return 0;
}