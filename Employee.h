

#ifndef PROG2_EMPLOYEE_H
#define PROG2_EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;


class Employee {
private:
    string firstName;
    string lastName;
    string socsecnum;
    string deptNum;
    double wage;

public:
    Employee();
    Employee(string fName, string lName, string socSec, string dNum, double w);

    string getFirstName() const;
    void setFirstName(string fName);

    string getLastName() const;
    void setLastName(string lName);

    string getSocSecNum() const;
    void setSocSecNum(string socSec);

    string getDeptNum() const;
    void setDeptNum(string dNum);

    double getWage() const;
    void setWage(double wage);

    // Overloading << operator
    friend ostream & operator<<(ostream& out, const Employee & E);

    // Overloading < operator
    bool operator<(const Employee & other) const;
};



#endif //PROG2_EMPLOYEE_H
