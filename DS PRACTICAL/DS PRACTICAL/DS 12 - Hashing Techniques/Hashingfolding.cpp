#include<iostream>
using namespace std;
int getDigitCount(int n) {
 int numDigits = 1;
 while (n > 9) {
 n /= 10;
 numDigits++;
 }
 return numDigits;
 } 
 
void folding(int arr[],int size)
{
int value;
int temp;
cout<<"Enter your value:- "<<endl;
cin >> value;
int a = 0;
temp = value;
int valueCounter=getDigitCount(value);
while(value != 0)
{
 if(valueCounter<=3){
 a =a + value % 10;
 value = value / 10;
 }
 else if(valueCounter>=4 || valueCounter <=5){
 a =a + value % 100;
 value = value / 100;
 }
else if(valueCounter>5)
 {
 a =a + value % 1000;
 value = value / 1000;
}
 }
 
 int index = a % size;
 
 do{
 
 if(index == size-1 && arr[index]!= -1)
 {
 index = 0;
 }
 if(arr[index]== -1 )
 {}
 else
 {
 cout << "It already has element "<<endl;
 cout <<endl;
 index++;
 }
 }while(arr[index] != -1);
 if(arr[index] == -1)
 {
 arr[index] = temp;
 cout << "Value added"<<endl;
 }
 }
int main()
{
int size;
cout << "Enter the size of the array"<<endl;
cin >> size;
int arr[size];
int choice;
for(int i = 0; i<size;i++)
{
arr[i] = -1;
}
do{
int count =0;
cout << "1. Enter elements"<<endl;
cout << "2. Search element"<<endl;
cout << "3. Display"<<endl;
cout << "4. Exit"<<endl;
cout << "Enter your choice "<<endl;
cin >> choice;
cout << endl;
 
switch(choice) {
case 1:
for(int i = 0; i<size;i++)
 
{
 if(arr[i] == -1)
 
{
 count++;
 
}
 
}
 if(count > 0)
 
{
 folding(arr,size);
 
}
 else
 
{
 cout << "Array is full" <<endl; }
break;
case 2:
cout << "Enter value to search :- ";
int val;
cin >> val;
 for(int i = 0; i<size;i++) {
if(arr[i] == val ) {
cout << "Value is in index "<< i<< endl; }}
cout << endl;
break;
case 3:
cout << "Elements of the array are :- "<<endl;
for(int i = 0; i<size;i++)
 
{
 cout << arr[i] << " ";
 
}
 cout << endl;
break;
case 4:
break; }
}while(choice!=4); }
