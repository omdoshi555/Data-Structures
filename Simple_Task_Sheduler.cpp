//Name: Om Tanoj Doshi
//PRN: B24CE1066
//Assignment 4
//PROBLEM STATEMENT:
/* Simple Task Scheduler:
 Write a program that implements a simple task scheduler using a singly linked list. Each
  node in the linked list represents a task with its priority and execution time. Tasks are 
  scheduled based on their priority, with higher priority tasks being executed first.
*/
#include <iostream>
using namespace std;

class Node {
public:
    string task_name;
    int priority;
    int exe_time;
    Node *next;

    Node(string t, int p, int e) {
        task_name = t;
        priority = p;
        exe_time = e;
        next = NULL;
    }

    void display() {
        cout << "Task Name: " << task_name 
             << ", Priority: " << priority 
             << ", Execution Time: " << exe_time << endl;
    }
};

int main() {
    int n;
    Node *header = NULL, *temp, *current, *previous;
    string tn;
    int p, e;

    cout << "Enter No. of Tasks: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter Task Name : ";
        cin >> tn;
        cout << "Enter Priority : ";
        cin >> p;
        cout << "Enter Execution Time : ";
        cin >> e;

        temp = new Node(tn, p, e);

        if (header == NULL || header->priority < p) {
            // Insert at head
            temp->next = header;
            header = temp;
        } 
        else {
            // Traverse to correct position
            previous = header;
            current = header->next;
            while (current != NULL && current->priority >= p) {
                previous = current;
                current = current->next;
            }
            // Insert between previous and current
            previous->next = temp;
            temp->next = current;
        }
    }

    cout << "\nTasks in Priority Order:\n";
    Node *t = header;
    while (t != NULL) {
        t->display();
        t = t->next;
    }

    return 0;
}
