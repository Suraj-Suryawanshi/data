#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;
stringstream stream;
struct Node
{
	char data;
	struct Node *next;
};
struct Node *top = NULL;
void push(char val)
{
	struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
	newnode->data = val;
	newnode->next = top;
	top = newnode;
}
void pop()
{
	if (top == NULL)
		cout << "Stack is empty" << endl;
	else
	{
		// cout<<"The popped element is "<< top->data <<endl;
		top = top->next;
	}
}
void display()
{
	struct Node *ptr;
	if (top == NULL)
		cout << "stack is empty";
	else
	{
		ptr = top;
		cout << "Stack elements are: ";
		while (ptr != NULL)
		{
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
	}
	cout << endl;
}
int main()
{
	string val;
	cout << "Enter your equation in Infix form :- " << endl;
	cin >> val;
	int length = val.size();
	string output;
	for (int i = 0; i < length; i++)
	{
		if (val[i] == '(')
		{
			push(val[i]);
		}
		else if (val[i] == '*' || val[i] == '/')
		{
			if (top == NULL)
			{
				push(val[i]);
			}
			else if (val[i] == '*' && (top->data == '/' || top->data == '*'))
			{
				output = output + top->data;
				pop();
				push(val[i]);
			}
			else if (val[i] == '/' && (top->data == '*' || top->data == '/'))
			{
				output = output + top->data;
				pop();
				push(val[i]);
			}
			else
			{
				push(val[i]);
			}
		}
		else if (val[i] == '+' || val[i] == '-')
		{
			if (top == NULL)
			{
				push(val[i]);
			}
			else if (val[i] == '+' && (top->data == '*' || top->data == '/' || top->data == '+' ||
									   top->data == '-'))
			{
				output = output + top->data;
				pop();
				push(val[i]);
			}
			else if (val[i] == '-' && (top->data == '*' || top->data == '/' || top->data == '+' ||
									   top->data == '-'))
			{
				output = output + top->data;
				pop();
				push(val[i]);
			}
			else
			{
				push(val[i]);
			}
		}
		else if (val[i] == ')')
		{
			while (top->data != '(')
			{
				output = output + top->data;
				pop();
			}
			pop();
		}
		else
		{
			output = output + val[i];
		}
	}
	while (top != NULL)
	{
		if (top->data != '(')
		{
			output = output + top->data;
			pop();
		}
	}
	cout << "Postfix Expression is :- " << output << endl;
	//Solving the Postfix
	for (int j = 0; j < output.size(); j++)
	{
		if (output[j] == '-')
		{
			int a = int(top->data);
			a = a - 48;
			pop();
			int b = int(top->data);
			b = b - 48;
			pop();
			int c = b - a;
			stream << c;
			string val;
			stream >> val;
			push(val[0]);
			stream.clear();
		}
		else if (output[j] == '+')
		{
			int a = int(top->data);
			a = a - 48;
			pop();
			int b = int(top->data);
			b = b - 48;
			pop();
			int c = b + a;
			stream << c;
			string val;
			stream >> val;
			push(val[0]);
			stream.clear();
		}
		else if (output[j] == '*')
		{
			int a = int(top->data);
			a = a - 48;
			pop();
			int b = int(top->data);
			b = b - 48;
			pop();
			int c = b * a;
			stream << c;
			string val;
			stream >> val;
			push(val[0]);
			stream.clear();
		}
		else if (output[j] == '/')
		{
			int a = int(top->data);
			a = a - 48;
			pop();
			int b = int(top->data);
			b = b - 48;
			pop();
			int c = b / a;
			stream << c;
			string val;
			stream >> val;
			push(val[0]);
			stream.clear();
		}
		else
		{
			push(output[j]);
		}
	}
	cout << "Answer of Postfix evaluation is:- " << top->data << endl;
}
