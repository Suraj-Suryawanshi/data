#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;
struct node {
 int value;
 int priority;
node* next;
};
node* head = NULL;
void enqueue(int value, int priority) {
 node* newnode = (node*)malloc(sizeof(node));
 newnode->value = value;
 newnode->priority = priority;
 newnode->next = NULL;
 if (head == NULL || priority > head->priority) {
newnode->next = head;
head = newnode;
 }
 else {
 node* temp = head;
 while (temp->next != NULL && temp->next->priority >= priority) {
 temp = temp->next;
}
 newnode->next = temp->next;
 temp->next = newnode;
 }}
int dequeue() {
 if (head == NULL) {
 return INT_MIN;
 }
 node* temp = head;
 head = head->next;
 int value = temp->value;
 delete temp;
 return value;
}
void display() {
 node* temp = head;
 while (temp != NULL) {
cout << temp->value << " (priority: " << temp->priority << ")" << endl;
temp = temp->next;
 }
}int main() {
 int a;
 cout << "1. Enter elements in queue" << endl;
 cout << "2. Delete elements in queue" << endl;
 cout << "3. Display" << endl;
 cout << "4. Exit" << endl;
 do {
cout << "Enter your choice " << endl;
cin >> a;
switch (a) {
 case 1: {
 cout << "Enter the value to be enqueued: ";
 int value;
cin >> value;
 cout << "Enter the priority: ";
 int priority;
 cin >> priority;
 enqueue(value, priority);
 break;
 }
 case 2: {
 cout << "Deleted value is: " << dequeue() << endl;
 break;
 }
 case 3: {
 display();
 break;
 }
 case 4: {
 break;
 }
 default: {
 cout << "Invalid choice." << endl;
 break;
 }}
 } while (a != 4);
 return 0;
}
