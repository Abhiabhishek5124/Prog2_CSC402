#ifndef MYQUEUE_H
#define MYQUEUE_H

#include "Employee.h"
#include <vector>
using namespace std;

class myQueue {
private:
    vector<Employee> elts;

public:
    vector<Employee>& getElts();
    void Enqueue(const Employee& emp);
    Employee Dequeue();
    bool isempty() const;
    void printQueue() const;

    myQueue operator+(const myQueue& other) const;
};

#endif // MYQUEUE_H
