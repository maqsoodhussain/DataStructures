/* applicaiton of linked list polynomial
polynomial example= 3x^2+5x


add two polynomial 1. 3x^2+5x
                   2. 6x + 8
        result =    3x^2 + 11x + 8


Three things a node has :
1.Co-efficient
2.exponent
3. link to next node 

cpp progrogram to add to polynomial using linked list 
*/

#include<iostream>
using namespace std;


//structure of polynomial node
struct Node{
    int coeff; //holds coefficent
    int pow;  //holds exponent or power
    Node *next;   //addrss of next node


    Node(int c, int p):coeff(c),pow(p),next(NULL){}
};

Node *addpolly(Node *first, Node *second){
    Node *result = NULL;
    Node *last = NULL; // points to last node of result
}
