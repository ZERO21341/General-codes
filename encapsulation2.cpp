#include <iostream>
#include <vector>
using namespace std;

class student{

private:
string Name;
string Section;

public:
  student(string name, string section){
    this -> Name = name;
    this -> Section = section;
  }

  string getname(){
    return Name;
  }

  void setname(string name){

    this -> Name = name;
  }

  void display(){
    cout<<"Name:"<<Name<<endl;
    cout<<"Section:"<<Section<<endl;
  }
};

int main(){

    string name,section,removename;
    
    vector<student> students{};

    while(true){
        cout<<"enter name:";
        cin>>name;
        if(name == "exit"){
            cout<<"-------------------------------"<<endl;
            break;
        }
        cout<<"Enter Section:";
        cin>>section;
        students.push_back(student(name,section));
    }



    for (int i = 0; i < students.size(); i++)
    {
        students[i].display();
    }

    cout << "Remove name----------------------------------" << endl;

    cout << "Name to remove: ";
    cin >> removename;
    for (int i = 0; i < students.size(); i++)
    {
        if (removename == students[i].getname())
        {
            students.erase(students.begin() + i);
            break;
        }
    }

    cout << "Display----------------------------------" << endl;

    for (int i = 0; i < students.size(); i++)
    {
        students[i].display();
    }

    return 0;
}
