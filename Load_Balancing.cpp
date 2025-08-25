// Name: Om Tanoj Doshi
// PRN: B24CE1066
// Assignment 3
// PROBLEM STATEMENT:
/*Load Balancing: For example, imagine you have a set of servers that handle requests for a web application. The key to load balancing is using the hash value of a client's IP address or a request ID to determine which server should handle the request. The hash function is typically designed so that the data is evenly distributed across the servers, ensuring that no single server is overloaded. Write a program of a load balancing system*/
#include <iostream>
using namespace std;
int main()
{
    int server;

    // Accept no. of servers from users 
    cout<<"Enter no. of servers:"; 
    cin>>server;

    string ans;
    while (true)
    {
        cout << "Do you want to send a request? (Yes/No):";
        cin >> ans;

        if (ans == "No")
        {
            break;
        }
        else if (ans == "Yes")
        {
            int client_id;
            cout << "Enter request ID(integer):";
            cin >> client_id;
            int ser = client_id % server;
            cout << "Server " << ser << " is assigned to request ID " << client_id << endl;
        }
        else
        {
            cout << "\nInvalid input! Type Yes or No.\n";
        }
    }
    cout << "Load balancing finished!";
    return 0;
}
