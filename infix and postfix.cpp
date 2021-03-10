#include<iostream>
#include<stack>
using namespace std;
 
bool isOperator(char c)
{
 if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
 {
 return true;
 }
 else
 {
 return false;
 }
}
 
int precedence(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 

bool isOperand(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    }
    else {
        return false;
    }
}
 
string PostfixToInfix(string postfix)
{
    stack<string> s;
    for (int i = 0; i < postfix.length(); i++) {
        if (isOperand(postfix[i])) {
            string op(1, postfix[i]);
            //string op=postfix[i];
            s.push(op);
        }
        else {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push("(" + op2 + postfix[i] + op1 + ")");
        }
    }
 
    return s.top();
}
 
string InfixToPostfix(stack<char> s, string infix)
{
 string postfix;
 for(int i=0;i<infix.length();i++)
 {
 if((infix[i] >= 'a' && infix[i] <= 'z')
 ||(infix[i] >= 'A' && infix[i] <= 'Z'))
 {
 postfix+=infix[i];
 }
 else if(infix[i] == '(')
 {
 s.push(infix[i]);
 }
 else if(infix[i] == ')')
 {
 while((s.top()!='(') && (!s.empty()))
 {
 char temp=s.top();
 postfix+=temp;
 s.pop();
 }
 if(s.top()=='(')
 {
 s.pop();
 }
 }
 else if(isOperator(infix[i]))
 {
 if(s.empty())
 {
 s.push(infix[i]);
 }
 else
 {
 if(precedence(infix[i])>precedence(s.top()))
 {
 s.push(infix[i]);
 } 
 else if((precedence(infix[i])==precedence(s.top()))&&(infix[i]=='^'))
 {
 s.push(infix[i]);
 }
 else
 {
 while((!s.empty())&&( precedence(infix[i])<=precedence(s.top())))
 {
 postfix+=s.top();
 s.pop();
 }
 s.push(infix[i]);
 }
 }
 }
 }
 while(!s.empty())
 {
 postfix+=s.top();
 s.pop();
 }
 
 return postfix;
}
 
int main() 
{  
 
    string infix_exp, postfix_exp;
    string infix, postfix;
    int choice;
    stack <char> stack;
    
    cout<<"1. Infix to postfix\n2. Postfix to infix";
    cout<<"\nInput your choice : ";cin>>choice;
    switch(choice)
    {
      case 1:
        cout<<"Enter a Infix Expression :"<<endl;
        cin>>infix_exp;
        
        cout<<"INFIX EXPRESSION: "<<infix_exp<<endl;
        postfix_exp = InfixToPostfix(stack, infix_exp);
        cout<<endl<<"POSTFIX EXPRESSION: "<<postfix_exp;
        break;
        
      case 2:
        cout << "Enter a POSTFIX Expression :" << endl;
        cin >> postfix;
        cout << "POSTFIX EXPRESSION: " << postfix << endl;
        infix = PostfixToInfix(postfix);
        cout << endl << "INFIX EXPRESSION: " << infix;
        
    }
    
   
 return 0;
}