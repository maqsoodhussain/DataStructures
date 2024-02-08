#include<iostream>
using namespace std;

//creating a list using structure
struct list{
    int n;
    int *p;
};

int main(){
    struct list item0, item1,item2;
    item2.n=3;
    item2.p = NULL;

    item1.n =2;
    item1.p= &item2.n;

    item0.n=1;
    item0.p=&item1.n;

    cout<<item0.n<<" ";
    cout<<item1.n<<" ";
    cout<<item2.n;

    return 0;

}
