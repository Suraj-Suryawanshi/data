#include <iostream>
using namespace std;
void display(int arr[], int tops)
{
int top = tops;
for(int i = top-1;i >= 0 ; i--)
{
cout << arr[i] << " " ;
}
cout << endl;
}
void push(int arr[],int i,int top,int size)
{
if(top < size)
{
arr[top] = i;
 }
 else
 {
 cout<<"Stack is full"<<endl;
}
}
void pop(int arr[],int top)
{
if(top > -1)
{
 cout << "You have popped "<<arr[top]<<endl;
 }
 else
 {
 cout << "Stack is empty"<<endl;
}
}
int main(int argc, char** argv) {
int size;
int top = -1;
cout << "Enter the size of the array";
cin >> size;
int arr[size];
int choice;
do
{
cout << "1. Push an element in the stack"<<endl;
cout <<"2. Pop an element"<<endl;
cout << "3. Display stack elements"<<endl;
cout << "4. Display top element"<<endl;
cout << "5. Exit"<<endl;
cin >> choice;
switch(choice)
 {
 case 1: {
 cout << "Push an element in the stack"<<endl;
 int element;
 cin >> element;
 top++;
 push(arr,element,top,size);
break;
 }
 
 case 2: {
 cout <<"Pop an element"<<endl;
 pop(arr,top);
 top--;
break;
 }
 
 case 3: {
 cout << "Display stack elements"<<endl;
 display(arr, top);
 
break;
 }
 case 4: {
 if(top != -1)
 {
cout << "Top Element is "<< arr[top]<<endl;
 }
 else
 {
 cout << "Stack is empty "<<endl;
}
break;
 }
 case 5: {
 cout << "Exit"<<endl;
break;
 }
 default: {
 cout<< "Invalid Option" <<endl;
break;
 }
 }
 
}while(choice !=5);
return 0;
}
