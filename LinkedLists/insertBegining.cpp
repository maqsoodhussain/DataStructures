#include<iostream>
using namespace std;

class Node{
    public:
        int data;
         Node *next;
};

class Linked_list{
        private:
            Node *head;
        public:
          Linked_list(){
            head = nullptr;
          }
  void insertBeg(int);
  void display();

     
};

void Linked_list:: insertBeg(int data){
            Node *newnode = new Node();
            newnode->data = data;
            newnode->next = head;
            head = newnode;
            cout<<"Inserted: "<<newnode->data<<endl;
        }

void Linked_list:: display(){
        Node *temp = head;
        while(temp !=nullptr){
            cout<<temp->data <<"->";
            temp = temp->next;
        }

        cout<<"NULL";

    }

int main(){
    Linked_list mylist ;

    mylist.insertBeg(4);
     mylist.insertBeg(3);
     mylist.display();
}