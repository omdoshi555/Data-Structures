//Name: Om Tanoj Doshi
//PRN: B24CE1066
//Assignment 6
//PROBLEM STATEMENT:
/*
 * Coffee Shop Line (Simple Queue):
Arrival: Customers arrive at the coffee shop and stand in line. 
* Order Processing: The first customer in line gets their order taken, 
* and the barista starts making the coffee.Serving: Once the first 
* customer is served, they leave the queue, and the next customer in 
* line moves forward to be served. Write a program to implement a simple 
* queue
*/
#include<iostream>
using namespace std;
class coffeeShop
{    
    
    int r;
    int f;
    public:
        
        int token_queue[5];
        coffeeShop()
        {
            r = -1;
            f = 0;
        }
        void enqueue(int t);
        int dequeue();
        int isEmpty();
        int isFull();
};
int coffeeShop :: isEmpty()
{
    if(f > r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int coffeeShop :: isFull()
{
    if(r == 5-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void coffeeShop :: enqueue(int t)
{
    if(isFull() == 1)
    {
        cout << "Tokens are Over.";
    }
    else
    {
        r++;
        token_queue[r] = t;
    }
}
int coffeeShop :: dequeue()
{    
    int x = 0;
    if(isEmpty() == 1)
    {
        cout << "All orders processed.";
        return 0;
    }
    else
    {
        x = token_queue[f];
        f++;
        return x;
    }
}

int main()
{    
    int t;
    int x;
    coffeeShop c;
    int choice;
    char ch = 'Y';
    do
    {
        cout<<"Enter your choice from below:";
        cout<<"\n1.Get Token \n2.Process Order \n3.Exit"<<endl;
        cin>> choice;
        switch(choice)
        {
            case 1: 
                cout << "Enter Token No. : ";
                cin >> t;
                c.enqueue(t);
                break;
            case 2:
                x = c.dequeue();
                if(x != 0)
                cout << "\nToken Processed No. : " << x;
                break;
            case 3:
                cout<<"Exiting program..."<<endl;
                break;
        }
        cout<<"\nDo you want to continue?(Y/N) : ";
        cin>>ch;
    }
    while(ch == 'Y');
    return 0;
}
