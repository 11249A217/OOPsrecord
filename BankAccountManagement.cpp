#include<iostream>
using namespace std;
class BankAccount{
    string holder;
    int accNo;
    double balance;
    static double totalBalance;
    public:
    BankAccount(string h,int a,double b){
        holder=h;
        accNo=a;
        balance=b;
        totalBalance+=b;
    }
    BankAccount(){
        cout<<"Account of"<<holder<<"closed."<<endl;
    }
    void deposit(double amount){
        balance+=amount;
        totalBalance+=amount;
    }
    double getBalance(){return balance;}
    string getHolder(){return holder;}
    static void showTotalBalance(){
        cout<<"Total balance in bank:"<<totalBalance<<endl;
    }
};
//Return richest account
BankAccount richestAccount(BankAccount arr[],int n){
    int index=0;
    double maxBal=arr[0].getBalance();
    for(int i=1;i<n;i++){
        if(arr[i].getBalance()>maxBal){
            maxBal=arr[i].getBalance();
            index=i;
        }
    }
    return arr[index];
}
double BankAccount::totalBalance = 0;

int main(){
    BankAccount b[3]={
        BankAccount("Ravi",101,5000),
        BankAccount("Sita",102,10000),
        BankAccount("Anu",103,8000)
    };
    b[0].deposit(2000);
    BankAccount::showTotalBalance();
    BankAccount rich=richestAccount(b,3);
    cout<<"Richestaccount holder:"<<rich.getHolder()<<endl;
    return 0;
}
