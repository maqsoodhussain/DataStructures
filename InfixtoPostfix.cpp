
#include<iostream>
using namespace std;
#include<stack>

int precdence(char c){
    if(c=='^')
        return 3;
    else if(c=='*' || c == '/')
        return 2;
    else if(c=='+' || c == '-')
        return 1;
    else
        return -1;
}

string infixPostfix(string s){
    stack<char>st; //declearing stack st of type char 

    string res;

    for(int i = 0; i<s.length(); i++){
        if((s[i]>='a' && s[i] <='z') || (s[i]>='A' && s[i] <='Z'))
            res += s[i];
        else if(s[i]=='(')
            st.push(s[i]);
        else if(s[i]==')'){
            while((!st.empty()) && (st.top()!='(')){
                res += st.top();
                st.pop();
            }
        if(!st.empty()){
            st.pop();
        }
        else{
            while ((!st.empty()) && precdence(st.top()) > precdence(s[i])){
                res +=st.top();
                st.pop();
            }
            st.push(s[i]);
            
            
        }
        }

        while (!st.empty()){
            res +=st.top();
            st.pop();
        }
       
        
    }
return res;

}

int main(){
   
    string s = infixPostfix("a+b+c");
     cout<<s;
    return 0;
}