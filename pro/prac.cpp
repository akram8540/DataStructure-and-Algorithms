#include<iostream>
using namespace std;

class person{
    char name[30];
    int age;

    public:
    void insert(){
        cout << "enter name and age of the person:\n";
        cin >> name >> age;
    }

    void display(){
        cout << "Name = " << name << "\nAge = " << age;
    }

};

int main(){
    person p;

    p.insert();
    p.display();

    return 0;
}