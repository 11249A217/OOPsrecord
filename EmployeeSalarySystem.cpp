#include<iostream>
using namespace std;
class Employee{
    string name;
    double salary;
    static int empCount;
    public:
    Employee(string n,double s){
        name=n;
        salary=s;
        empCount++;
    }
    Employee(){
        cout<<name<<"removed."<<endl;
    }
    double getSalary(){ return salary;}
    string getName(){ return name;}
    static void showCount(){
        cout<<"Total Employees:"<<empCount<<endl;
    }
};
//Compare salaries
void compare(Employee e1,Employee e2){
    if(e1.getSalary()>e2.getSalary()) cout<<e1.getName()<<"earns more"<<endl;
    else cout<<e2.getName()<<"earns more"<<endl;
}
int Employee::empCount=0;
int main(){
    Employee e[3]={
        Employee("Ravi",50000),
        Employee("Sita",60000),
        Employee("anu",55000)
    };
    compare(e[0],e[1]);
    Employee::showCount();
    return 0;
}
