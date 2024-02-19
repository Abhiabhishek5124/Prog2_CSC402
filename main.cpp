/*
  Author: Abhishek Shrestha
  CSC 402 - Program #2
  This C++ program showcases the implementation of custom stacks and queues without relying on standard libraries. It emphasizes operator overloading to introduce additional features, such as combining two stacks or queues. The program reads input from files, processes the data, sorts the structures, and prints the results.
  Date: 02/12/2024
 */



#include <iostream>
#include <fstream>
#include <algorithm>
#include "myStack.h"
#include "myQueue.h"
using namespace std;

// Overloading << operator for Employee objects
ostream & operator<<(ostream& out , const Employee & E) {
    out << E.getLastName() << " " << E.getFirstName() << " " << E.getSocSecNum() << " " << E.getDeptNum() << " " << E.getWage();
    return out;
}

int main() {
    // Create myStack object S1 and myQueue object Q1
    myStack S1;
    myQueue Q1;

    // Open and read from the first input file
    ifstream file1;
    string filePath1;
    cout << "Please enter a path for file #1 : ";
    cin >> filePath1;
    file1.open(filePath1);
    if (!file1.is_open()) {
        cerr << "Unable to open first input file!" << endl;
        return 1;
    }

    string fName, lName, socSec, deptNum;
    double wage;
    while (file1 >> lName >> fName >> socSec >> deptNum >> wage) {
        Employee emp(fName, lName, socSec, deptNum, wage);
        S1.Push(emp);
        Q1.Enqueue(emp);
    }
    file1.close();

    // Create second myStack object S2 and myQueue object Q2
    myStack S2;
    myQueue Q2;

    // Open and read from the second input file
    ifstream file2;
    string filePath2;
    cout << "Please enter a path for file #2 : ";
    cin >> filePath2;
    file2.open(filePath2);
    if (!file2.is_open()) {
        cerr << "Unable to open second input file!" << endl;
        return 1;
    }
    cout<<endl;

    while (file2 >> lName >> fName >> socSec >> deptNum >> wage) {
        Employee emp(fName, lName, socSec, deptNum, wage);
        S2.Push(emp);
        Q2.Enqueue(emp);
    }
    file2.close();

    // Print stack #1
    cout << "STACK #1" << endl << "________" << endl;
    S1.printStack();
    cout << endl;

    // Print queue #1
    cout << "QUEUE #1" << endl << "________" << endl;
    Q1.printQueue();
    cout << endl;

    // Print stack #2
    cout << "STACK #2" << endl<< "________" << endl;
    S2.printStack();
    cout << endl;

    // Print queue #2
    cout << "QUEUE #2" << endl<< "________" << endl;
    Q2.printQueue();
    cout << endl;

    // Sort the stacks and queues using the overloaded < operator
    sort(S1.getElts().begin(), S1.getElts().end());
    sort(S2.getElts().begin(), S2.getElts().end());
    sort(Q1.getElts().begin(), Q1.getElts().end());
    sort(Q2.getElts().begin(), Q2.getElts().end());

    cout<<" AFTER SORTING ALL VECTORS"<<endl<<endl;

    // Print sorted stacks and queues
    // Print stack #1
    cout << "STACK #1" << endl << "________" << endl;
    S1.printStack();
    cout << endl;

    // Print queue #1
    cout << "QUEUE #1" << endl << "________" << endl;
    Q1.printQueue();
    cout << endl;

    // Print stack #2
    cout << "STACK #2" << endl<< "________" << endl;
    S2.printStack();
    cout << endl;

    // Print queue #2
    cout << "QUEUE #2" << endl<< "________" << endl;
    Q2.printQueue();
    cout << endl;

    // Create third myStack object S3 and third myQueue object Q3
    myStack S3;
    myQueue Q3;

    // Add S1 and S2 into S3 using the overloaded + operator
    S3 = S1 + S2;

    // Add Q1 and Q2 into Q3 using the overloaded + operator
    Q3 = Q1 + Q2;

    // Print myStack S3 and myQueue Q3
    cout<<"After overloaded operator +"<<endl<<endl;
    cout << "STACK #3" << endl<< "________" << endl;
    S3.printStack();
    cout<< endl;
    cout << "QUEUE #3" << endl<< "________" << endl;
    Q3.printQueue();
    cout <<endl;

    // Sort myStack S3 and myQueue Q3
    sort(S3.getElts().begin(), S3.getElts().end());
    sort(Q3.getElts().begin(), Q3.getElts().end());


    cout<<"AFTER SORTING"<<endl<<endl;

    // Print sorted stacks 3 and queue 3
    cout << "STACK #3" << endl << "________" << endl;
    S3.printStack();
    cout << endl;

    // Print queue #1
    cout << "QUEUE #3" << endl << "________" << endl;
    Q3.printQueue();
    cout << endl;

    // Pop all items from myStack S2
    cout << "REMOVING ALL ITEMS FROM S2 and Q2" << endl<<endl;
    cout << "Items POPPED from STACK S2"<<endl<<endl;
    while (!S2.isempty()) {
        cout << "POPPING "<< S2.Pop() << endl<<endl;
    }
    cout << "ERROR - STACK IS EMPTY"<<endl<<endl;

    // Dequeue all items from myQueue Q2
    cout << "Items DEQUEUED from Queue Q2" << endl<<endl;
    while (!Q2.isempty()) {
        cout << "DEQUEUEING " <<Q2.Dequeue() << endl<<endl;
    }
    cout<<"ERROR - QUEUE is EMPTY"<< endl <<endl << "PROGRAM EXECUTION IS COMPLETE"<< endl;
}

