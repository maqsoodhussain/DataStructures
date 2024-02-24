//Here i am using Floyds Cycle finding algorithm

#include<iostream>
using namespace std;

struct  Node{
        int val;
        Node *next;

        Node(int x):val(x),next(nullptr){}
};

//append function 
void append(Node **head, int data){
        Node *newNode = new Node(data);
        if(*head==nullptr){
                *head = newNode;
                return;
        }

        Node *last = *head;
        while(last->next != nullptr){
                last = last->next;
        }

        last->next= newNode;
}

bool hasloop(Node *head){

}

int main(){
    
}




