#include <iostream> 
using namespace std;
class Person { 
protected:
string name; 
int age;
public:
void getData() {
cout << "Enter name and age: "; 
cin >> name >> age;
}
void display() {
cout << "Name: " << name << ", Age: " << age << endl;
}
};
class Teacher : public Person { 
string subject;
float salary; 
public:
void getTeacherData() { 
getData();
cout << "Enter subject and salary: ";
cin >> subject >> salary;
}
void displayTeacher() { 
display();
cout << "Subject: " << subject << ", Salary: " << salary << endl;
}
};
int main() {
Teacher t; 
t.getTeacherData(); 
t.displayTeacher(); 
return 0;
}

Output:

Enter name and age: Ravi 35
Enter subject and salary: Math 55000 
Name: Ravi, Age: 35
subject:math, salary:55000
Subject: Math, Salary: 55000
