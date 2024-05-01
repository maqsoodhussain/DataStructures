//compile it using versin 11  : g++ -std=c++11 parenthesisCheck.cpp
#include<iostream>
#include<string>
using namespace std;

bool isBalanced(string S) {
    int maxSize = S.length();
    char stack[maxSize];
    int top = -1;

    for (char ch : S) {
        switch (ch) {
            case '(':
            case '{':
            case '[':
                if (top < maxSize - 1)
                    stack[++top] = ch;
                else
                    return false;
                break;
            case ')':
                if (top == -1 || stack[top] != '(')
                    return false;
                top--;
                break;
            case '}':
                if (top == -1 || stack[top] != '{')
                    return false;
                top--;
                break;
            case ']':
                if (top == -1 || stack[top] != '[')
                    return false;
                top--;
                break;
        }
    }

    return top == -1;
}

int main() {
    string str;
    cout<<"Enter Expression : ";
    cin>>str;

    if (isBalanced(str))
        cout << "balanced";
    else
        cout << "not balanced";

    return 0;

}
