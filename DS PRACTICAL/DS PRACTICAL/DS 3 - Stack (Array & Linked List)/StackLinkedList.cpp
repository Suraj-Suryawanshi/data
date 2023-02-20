#include <iostream>
#include <cstdlib>
using namespace std;
struct Node {
 int data;
 struct Node *next;
};
struct Node* top = NULL;
void push(int val) {
 struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
 newnode->data = val;
 newnode->next = top;
 top = newnode;
}
void pop() {
 if(top==NULL)
 cout<<"Stack is empty"<<endl;
 else {
 cout<<"The popped element is "<< top->data <<endl;
 top = top->next;
 }
}
void display() {
struct Node* ptr;
 if(top==NULL)
 cout<<"stack is empty";
 else {
 ptr = top;
 cout<<"Stack elements are: ";
 while (ptr != NULL) {
 cout<< ptr->data <<" ";
 ptr = ptr->next;
 }
 }
 cout<<endl;
}
int main() {
 int ch, val;
 cout<<"1) Push an element in the stack"<<endl;
 cout<<"2) Pop an element from stack"<<endl;
 cout<<"3) Display"<<endl;
 cout<<"4) Top element "<<endl;
 cout<<"5) Exit"<<endl;
 do {
 cout<<"Enter choice: "<<endl;
 cin>>ch;
 switch(ch) {
 case 1: {
 cout<<"Enter your element :"<<endl;
 cin>>val;
 push(val);
 break;
 }
 case 2: {
 pop();
 break;
 }
case 3: {
 display();
 break;
 }
 case 4: {
 
if(top==NULL)
 cout<<"stack is empty"<<endl;
 else {
 cout<<"Top element in the stack is "<<endl;
 cout<< top->data <<" ";
 }
break;
}
 case 5: {
 cout<<"Exit"<<endl;
 break;
 }
 default: {
 cout<<"Invalid Choice"<<endl;
 }
 }
 }while(ch!=5);
 return 0;
}

