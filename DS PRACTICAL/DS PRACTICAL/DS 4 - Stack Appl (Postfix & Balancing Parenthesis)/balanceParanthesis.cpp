#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;
int count1 = 0;
int count2 = 0;
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
int isExpressionBalanced(string expr, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
		{
			push(expr[i]);
		}
		else if (expr[i] == ')')
		{
			if (top != NULL)
			{
				if (top->data == '(')
				{
					pop();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		else if (expr[i] == '}')
		{
			if (top != NULL)
			{
				if (top->data == '{')
				{
					pop();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		else if (expr[i] == ']')
		{
			if (top != NULL)
			{
				if (top->data == '[')
				{
					pop();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	if (top != NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	string val;
	cout << "Enter your equation in Infix form :- " << endl;
	cin >> val;
	int length = val.size();
	if (isExpressionBalanced(val, length) == 0)
	{
		cout << "Expression is not Balanced" << endl;
	}
	else if (isExpressionBalanced(val, length) == 1)
	{
		cout << "Expression is Balanced" << endl;
	}
}