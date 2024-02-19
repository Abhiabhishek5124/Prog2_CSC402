
#ifndef PROG2_MYSTACK_H
#define PROG2_MYSTACK_H
#include <vector>
#include "Employee.h"
using namespace std;

class myStack {
private:
    vector<Employee> elts;

public:
    vector<Employee> & getElts();

    void Push(Employee emp);

    Employee Pop();

    bool isempty();

    void printStack();

    myStack operator+(const myStack& other);
};


#endif //PROG2_MYSTACK_H
