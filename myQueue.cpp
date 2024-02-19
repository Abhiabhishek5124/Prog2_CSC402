

#include "myQueue.h"
using namespace std;
#include <iostream>

vector<Employee>& myQueue::getElts() {
    return elts;
}

void myQueue::Enqueue(const Employee& emp) {
    elts.push_back(emp);
}

Employee myQueue::Dequeue() {
    Employee front = elts.front();
    elts.erase(elts.begin());
    return front;
}

bool myQueue::isempty() const {
    return elts.empty();
}

void myQueue::printQueue() const {
    for (const auto& emp : elts) {
        cout << emp << endl<<endl;
    }
}

myQueue myQueue::operator+(const myQueue& other) const {
    myQueue temp = *this;
    for (const auto& emp : other.elts) {
        temp.Enqueue(emp);
    }
    return temp;
}


