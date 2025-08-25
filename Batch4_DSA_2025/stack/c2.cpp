#include <iostream>
using namespace std;

// how to make array
// how to implement stack using array
// prefix,postfix,infix notation
// how to implement queue using array
// LINKED LIST
// how to implement stack using Linked List
// how to implement queue using Linked List
// trees
// graph

int stack[7];

// 0,1,2,3,4,5,6
// last index=n-1
// second last index= n-2

int n = 7; // total size
int top = -1;

void push(int value)
{
    if (top < n - 1)
    {
        top++;
        stack[top] = value;
    }
    else
    {
        cout << "STACK OVERFLOW!!!" << endl;
    }
}

int pop()
{
    if (top >= 0)
    {
        int val = stack[top];
        top--;
        return val;
    }
    else
    {
        cout << "STACK UNDERFLOW!!!" << endl;
    }
}

// void display()
// {
//     int i = top;
//     while (i >= 0)
//     {
//         cout << stack[i] << endl;
//         i--;
//     }
//     cout << endl;
// }

void display()
{
    int i = top;
    while (i >= 0)
    {
        cout << "| " << stack[i] << " |" << endl;
        i--;
    }
    cout << "------" << endl
         << endl;
}

// peek function --> it returns the value of the element which is at
//  the top of the stack.
int peek()
{
    if (top >= 0)
    {
        return stack[top];
    }
    else
    {
        cout << "empty stack!!!" << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    cout << peek();
    // push(60);
    // push(70);
    // push(80);
    // display();

    return 0;
}