#include <iostream> 
using namespace std;
class Employee { 
protected:
string name; 
int id;
public:
void getEmployee() {
cout << "Enter Employee name and ID: "; 
cin >> name >> id;
}
};
class Manager : public Employee { 
protected:
string dept; 
public:
void getManager() { 
getEmployee();
cout << "Enter department: "; 
cin >> dept;
}
};
class Director : public Manager { 
float salary;
public:
void getDirector() { 
getManager();
cout << "Enter salary: "; 
cin >> salary;
}
void display() {
cout << "Name: " << name << ", ID: " << id << ", Dept: " << dept
<< ", Salary: " << salary << endl;
}
};
int main() {
Director d; 
d.getDirector(); 
d.display();
}

Output:

Enter Employee name and ID: Arjun 101 
Enter department: HR
Enter salary: 90000
Name: Arjun, ID: 101, Dept: HR, Salary: 90000
