//
// Created by Ziao Huang on 9/15/24.
//
#include <iostream>
#include "LinkedList.h"
#include "Node.h"
using namespace std;
#include <string>

class Student {

    public:
    string name;
    int num;

    Student() {
        name = "";
        num = 0;
    }

    Student(string name, int num) {
        this->name = name;
        this->num = num;
    }

    bool isEqual (Student other) {
        return (name == other.name && num == other.num);
    }

    void print() { cout << "(" << name << ", " << num << ")"; }


};

int main() {
    LinkedList<Student> students;
    students.append(Student("John", 2));
    students.prepend(Student("John", 0));
    students.insertAfter(Student("John", 0), Student("John", 1));
    students.printList();

    return 0;
}