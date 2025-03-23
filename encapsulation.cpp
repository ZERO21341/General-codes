#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int* ID;

    public: 
    Student(string Name, int Id) : name(Name) {
        ID = new int; // Dynamically allocate memory for ID
        *ID = Id;     // Assign the value to the allocated memory
        cout << "Constructor called for " << name << endl;
    }

    ~Student(){
        cout<<"Deleted:"<<*ID;
        delete ID;
        
    }

    void setStudent(string Name, int Id) {
        name = Name;
        *ID = Id;
    }
string getname(){
    return name;
}
int getid(){
    return *ID;
}

void display(){

    cout<<"Your Name is: "<<name<<", "<<"and your ID number is: "<<*ID<<endl;
}

};

int main(){
    string Name;
    int Id;

cout<<"enter Your name: ";
getline(cin,Name);
cout<<"Enter ID num: ";
cin>>Id;

Student p1(Name,Id);
p1.display();

    return 0;
}