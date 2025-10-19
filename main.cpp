/* Leah Cochrum-Helbach
 * 828316587
 * 10/17/2025
 */

/* Task:
 *  Create an object s1("Alex", 20) and then use it to initialize another object s2
 *  Print both objects' data
 *  Explain when the copy constructor is called
 *          --> the copy constructor is called after the first student's info is called but before
 *              the info is printed
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) : name(n), age(a) {}

    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called\n";
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    string nameOne = "Alex";
    int ageOne = 20;

    Student s1(nameOne, ageOne);

    Student s2 = s1;

    cout << setw(35) << "First Student's Information = ";
    s1.display();

    cout << setw(35) << "Second Student's Information = ";
    s2.display();

    return 0;
}