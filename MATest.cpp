#include <iostream>

using namespace std;

class Student{
private:
string Name;
int Id;
double Gpa;

public:
 Student(string name,int id,double gpa){
    Name=name;
    Id=id;
    Gpa=gpa;
}
string getName(){
    return Name;
}
int getId(){
    return Id;
}
float getGpa(){
    return Gpa;
}

void display(){
    cout<<"Name: "<<Name<<", "<<"ID Num: "<<Id<<", "<<"Gpa score: "<<Gpa;
}

};

int main(){
Student S1("Raymund Jhon",1300015184,5.98);

S1.display();





    return 0;
}