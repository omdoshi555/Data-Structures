#include <iostream> 
using namespace std;
class parenthesis_checker
{
    char stack[100];
    int N = 5;
    char x;
    int top = -1;

public:
    bool isFull();
    bool isEmpty();
    void push(char x);
    char pop();
    void display();
    char peek();
};

bool parenthesis_checker::isFull()
{
    if (top == N - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool parenthesis_checker::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void parenthesis_checker::push(char x)
{
    if (isFull())
    {
        cout << "stack is full!" << endl;
    }
    else
    {
        top++;
        stack[top] = x;
        cout << "inserted" << stack[top] << endl;
    }
}
char parenthesis_checker::pop()
{
    if (isEmpty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        x = stack[top];
        cout << "popped" << x << endl;
        top--;
    }
    return x;
}
char parenthesis_checker::peek()
{
    cout << stack[top];
    return stack[top];
}
int main()
{
    parenthesis_checker s;
    char x;
    int n;
    cout << "enter number of characters:";

    cin >> n;
    char exp[n];

    cout << "\nEnter expression:";
    cin >> exp;

    for (int i = 0; i < n; i++)
    {
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(')
        {
            s.push(exp[i]);
            x = s.peek();
        }
        else if ((exp[i] == '}' && x == '{') || (exp[i] == ')' && x == '(') || (exp[i] == ']' && x == '['))
        {
            x = s.pop();
        }
    }

    return 0;
}
