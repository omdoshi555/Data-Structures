// Problem Statement: Organizing Cards in a Hand
// Application: When playing card games, players often use an approach similar to insertion sort to organize their cards. They pick one card at a time and insert it into the correct position in their hand, maintaining a sorted sequence. Write a program that demonstrates how to organize (sort) cards in a hand using insertion sort.

#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cout << "Enter no. of cards:";
    cin >> n;
    int arr[n];
    // Accept card numbers
    cout << "Enter your card numbers:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int p = 0; p < n - 1; p++) // Passes
    {
        int i = p + 1; // initialization of unsorted array
        int j = i - 1; // Initialization of sorted array
        temp = arr[i]; // shift operation
        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    // Cards after sorting
    cout << "\nCards in hand:";
    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        cout << arr[i];
    }
    return 0;
}
