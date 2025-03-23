#include <iostream>
using namespace std;

class person{
    public:
    string name;
    int age;

    person(string name = "no name", int age = 0){
        this->name = name;
    }

    void display(){
        cout<<"Your name is:"<<name<<endl;
        cout<<"your age is:"<<age<<endl;
    }
};

int main(){

    person p1,p2;
p1.name="Alice";
p1.age=25;
p1.display();
p2.display();
}