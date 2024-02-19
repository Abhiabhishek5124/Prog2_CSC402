

#include "myStack.h"

using namespace std;

vector<Employee>& myStack::getElts() {
    return elts;
}

void myStack::Push(Employee emp) {
    elts.insert(elts.end(), emp);
}

Employee myStack::Pop() {
    if (isempty()) {
        // Handle empty stack case
        throw runtime_error("Stack is empty");
    }
    Employee topEmp = elts.back();
    elts.pop_back();
    return topEmp;
}

bool myStack::isempty() {
    return elts.empty();
}

void myStack::printStack() {
    for (auto it = elts.rbegin(); it != elts.rend(); ++it)
        cout << *it << endl<<endl;
}

myStack myStack::operator+(const myStack& other) {

    myStack tempStack = *this; // Make a copy of stack S1

    for (auto it = other.elts.rbegin(); it != other.elts.rend(); ++it)
        tempStack.Push(*it); // Push each element from stack S2 onto the temp stack

    return tempStack; // Return the resulting stack
}




