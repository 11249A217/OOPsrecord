#include<iostream>
using namespace std;
class Student {
    string name;
    int roll;
    int marks[5];
    static int count;
    public:
    Student(string n,int r,int m[]) {
        name=n;roll=r;
        for(int i=0;i<5;i++)marks[i]=m[i];
        count++;
    }
    Student(){
        cout<<"Student"<<name<<"removed."<<endl;
    }
    inline int totalMarks(){
        int total=0;
        for(int i=0;i<5;i++)total +=marks[i];
        return total;
    }
    string getName() {return name;}
    static void showCount() {cout<<"Total Students:"<<count<<endl;}
};
int Student::count=0;
//Compare two students and print who scored more
void compare(Student s1,Student s2){
    if(s1.totalMarks()>s2.totalMarks())
    cout<<s1.getName()<<"scored more"<<endl;
    else
    cout<<s2.getName()<<"scored more"<<endl;
}
//Return topper from array
Student topper(Student s[],int n){
    int index=0;
    int maxTotal=s[0].totalMarks();
    for(int i=1;i<n;i++){
        if(s[i].totalMarks()>maxTotal){
            maxTotal=s[i].totalMarks();
            index=i;
        }
    }
    return s[index];
}
class Employee {
    string name;
    double salary;
    static int empCount;
    public:
    Employee(string n,double s){
        name=n;salary=s;empCount++;
    }
    Employee() {
        cout<<"Employee"<<name<<"removed."<<endl;
    }
    double getSalary() {return salary;}
    string getName() {return name;}
    static void showCount() {cout<<"Total Employees:"<<empCount<<endl;}
};
//Compare two employees
void compare(Employee e1,Employee e2){
    if(e1.getSalary()>e2.getSalary())cout<<e1.getName()<<"earn more"<<endl;
    else cout<<e2.getName()<<"earns more"<<endl;
}
int Employee::empCount=0;
class BankAccount {
    string holder;
    int accNo;
    double balance;
    static double totalBalance;
    public:
    BankAccount(string h,int a,double b){
        holder=h,accNo=a,balance=b;
        totalBalance +=b;
    }
    BankAccount(){
        cout<<"Bank Account of"<<holder<<"closed."<<endl;
    }
    void deposit(double amt){
        balance +=amt;totalBalance +=amt;
}
double getBalance() {return balance;}
string getHolder() {return holder;}
static void showTotalBalance() {cout<<"Total Bank balance:"<<totalBalance<<endl;
}
};
//Return richest account
BankAccount richestAccount(BankAccount arr[],int n){
    int index=0;double maxBal=arr[0].getBalance();
    for(int i=1;i<n;i++)
    if(arr[i].getBalance()>maxBal){maxBal=arr[i].getBalance();index=i;}
    return arr[index];
}
double BankAccount::totalBalance=0;
class Book {
    string title;
        string authors[2];
    double price;

public:
    Book(string t,string a1,string a2,double p) {
        title=t; authors[0]=a1; authors[1]=a2; price=p;
    }

    void display() {
        cout << "Book: " << title << ", Authors: " << authors[0] << ", " << authors[1] << ", Price: " << price << endl;
    }

    double getPrice() { return price; }
};

// Return most expensive book
Book expensiveBook(Book b[], int n) {
    int index=0; double maxPrice = b[0].getPrice();
    for(int i=1;i<n;i++)
        if(b[i].getPrice() > maxPrice) { maxPrice=b[i].getPrice(); index=i; }
    return b[index];
}
class Classroom {
    int length, width;

public:
    Classroom(int l,int w) { length=l; width=w; }

    inline int area() { return length*width; }
};
int main() {
    // Students
    int m1[5]={90,85,88,92,80};
    int m2[5]={78,80,82,79,85};
    int m3[5]={95,90,93,88,92};
    Student s[3]={Student("Ravi",101,m1),Student("Sita",102,m2),Student("Anu",103,m3)};

    compare(s[0],s[1]);
    Student top=topper(s,3);
    cout << "Topper: " << top.getName() << endl;
    Student::showCount();

    cout << "---------------------------\n";

    // Employees
    Employee e[3]={Employee("Ravi",50000),Employee("Sita",60000),Employee("Anu",55000)};
    compare(e[0],e[1]);
    Employee::showCount();

    cout << "---------------------------\n";

    // Bank Accounts
    BankAccount b[3]={BankAccount("Ravi",101,5000),BankAccount("Sita",102,10000),BankAccount("Anu",103,8000)};
    b[0].deposit(2000);
    BankAccount::showTotalBalance();
    BankAccount rich=richestAccount(b,3);
    cout << "Richest account holder: " << rich.getHolder() << endl;

    cout << "---------------------------\n";

    // Books
    Book bk[3]={Book("C++","Bjarne","Stroustrup",500),Book("Java","James","Gosling",400),Book("Python","Guido","Rossum",600)};
    for(int i=0;i<3;i++) bk[i].display();
    Book exp=expensiveBook(bk,3);
    cout << "Most expensive book price: " << exp.getPrice() << endl;

    cout << "---------------------------\n";

    // Classrooms
    Classroom cr1(10,15), cr2(20,30);
    cout << "Classroom 1 area: " << cr1.area() << endl;
    cout << "Classroom 2 area: " << cr2.area() << endl;

    return 0;
}
