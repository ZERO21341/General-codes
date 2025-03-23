#include <iostream>
using namespace std;

class Student{
    private:
    int ID;
    string name;
    string course;
    string section;

    public:
   void  GetStudent(int id, string Name,string Course,string Section){
        ID=id;
        name= Name;
        course =Course;
        section =Section;
    }
    int getID(){
        return ID;
    }

    string getname(){
        return name;
    }
    string getcourse(){
        return course;
    }
    string getsection(){
        return section;
    }

    void display(){

        cout<<"your id num is: "<<ID<<"your name is"<<name<<"your course is"<<course<<"your section is"<<section;
    }
};

int main(){
Student S1;

S1.GetStudent(1110,"Raymund","BSIT","IT2A");

S1.display();





    return 0;
}