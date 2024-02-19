#include "Employee.h"
using namespace std;

Employee::Employee() : firstName(""), lastName(""), socsecnum(""), deptNum(""), wage(0.0) {}

Employee::Employee(string fName, string lName, string socSec, string dNum, double w) :
        firstName(fName), lastName(lName), socsecnum(socSec), deptNum(dNum), wage(w) {}

void Employee::setFirstName(const string fName) {
    firstName = fName;
}
string Employee::getFirstName() const {
    return firstName;
}

void Employee::setLastName(const string lName) {
    lastName = lName;
}

string Employee::getLastName() const {
    return lastName;
}

void Employee::setSocSecNum(const string socSec) {
    socsecnum = socSec;
}

string Employee::getSocSecNum() const {
    return socsecnum;
}

void Employee::setDeptNum(const string dNum) {
    deptNum = dNum;
}

string Employee::getDeptNum() const {
    return deptNum;
}

void Employee::setWage(double w) {
    wage = w;
}

double Employee::getWage() const {
    return wage;
}

bool Employee::operator<(const Employee & other) const {
    if (deptNum != other.deptNum)
        return deptNum < other.deptNum;
    if (lastName != other.lastName)
        return lastName < other.lastName;
    return firstName < other.firstName;
}