#include<iostream>
using namespace std;
class Book {
    string title;
    string authors[2];
    double price;
    public:
    Book(string t,string a1,string a2,double p){
        title=t;
        authors[0]=a1;
        authors[1]=a2;
        price=p;
    }
    void display(){
        cout<<"Book:"<<title<<",Authors:"<<authors[0]
        <<","<<authors[1]<<",Price:"<<price<<endl;
    }
    double getPrice() {return price;}
};
//Return most expensive Book
Book expensiveBook(Book b[],int n){
    int index=0;
    double maxPrice=b[0].getPrice();
    for(int i=1;i<n;i++){
        if(b[i].getPrice()>maxPrice){
            maxPrice=b[i].getPrice();
            index=i;
        }
    }
    return b[index];
}
int main(){
    Book b[3]={
        Book("C++ Programming","Bjarne","Stroustrup",500),
        Book("Java Programming","James","gosling",400),
        Book("Python Programming","guido","Rossum",600)
    };
    for(int i=0;i<3;i++)b[i].display();
    Book exp=expensiveBook(b,3);
    cout<<"Most expensive book:"<<exp.getPrice()<<endl;
    return 0;
}
