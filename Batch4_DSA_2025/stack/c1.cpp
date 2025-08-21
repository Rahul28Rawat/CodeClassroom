#include <iostream>
using namespace std;

int stack[6];
int n = 6; // it is the maximum size of my stack
int top = -1;

void push(int val)
{
    if (top < n - 1)
    {
        top++;
        stack[top] = val;
    }
    else
    {
        cout << "Stack OVERFLOW!!!!" << endl
             << endl;
    }
}

void pop()
{
    if (top >= 0)
    {
        top--;
    }
    else
    {
        cout << "Stack UNDERFLOW!!!" << endl
             << endl;
    }
}

void display()
{
    int i = top;
    while (i >= 0)
    {
        cout << "| " << stack[i] << " |" << endl;
        i--;
    }
    cout << "-----" << endl
         << endl;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    return 0;
}