#include <iostream>
using namespace std;

class ID{
    private:
    string Name;
    int Age;
    
    public:
   void SetID(string name,int age){
Name=name;
Age = age;
    }
    string getName(){
        return Name;
    }
    int getAge(){
        return Age;
    }

    void display(){
        cout<<"Your Name is: "<<Name<<", "<<"And your age is: "<<Age;
    }

};

int main(){



    ID P1;
    P1.SetID("Raymund Jhon Masangcay",21);
    P1.display();

    return 0;
}
