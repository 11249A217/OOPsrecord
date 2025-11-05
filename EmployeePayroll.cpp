#include<iostream>
using namespace std;
class Employee {
    public:
    int empID;
    string name;
    float salary;
    //Member function defined inside the class
    void setEmployee(int id,string n,float s){
        empID=id;
        name=n;
        salary=s;
    }
    //Member function declaration(to be defined outside)
    void displayEmployee();
};
//Function defined outside class using scope resolution
    void Employee::displayEmployee(){
    cout<<"Employee ID:"<<empID
    <<",Name:"<<name
    <<",Salary:rs"<<salary<<endl;
}
int main(){
    Employee e1,e2;
    //Call function defined inside class
    e1.setEmployee(101,"Ravi",50000.75);
    e2.setEmployee(102,"priya",65000.50);
    //call function defined outside class
    e1.displayEmployee();
    e2.displayEmployee();
    return 0;
}
