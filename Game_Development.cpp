// Name: Om Tanoj Doshi
// PRN: B24CE1066
// Assignment 2
// Problem Statement: Game Development:
// write a game development program that implements the Bubble Sort algorithm. The program will simulate a simple game where the player can input a set of numbers, and the numbers will be sorted using Bubble Sort to simulate a "level-up" scenario where the player's scores are sorted in ascending order.

#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int pass;
    cout << "Enter size of Array for Players: \n";
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements of array for Player 1: ";
        cin >> a[i];
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements of array for Player 2: ";
        cin >> b[i];
    }
    // Passes
    for (pass = 0; pass < n; pass++)
    {
        for (int i = 0; i < n - pass - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                // swapping
                int temp;
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
            if (b[i] < b[i + 1])
            {
                // swapping
                int temp;
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }
    // Printing sorted arrays
    cout << "Player 1 : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nPlayer 2 : ";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    // Finding winner
    if (a[0] == b[0])
    {
        cout << "\nTie! Scorers are same!";
    }
    else if (a[0] > b[0])
    {
        cout << "\nPlayer 1 wins!";
    }
    else
    {
        cout << "\nPlayer 2 wins!";
    }
    return 0;
}
