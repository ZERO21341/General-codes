#include <iostream>
#include <vector>
using namespace std;

class Students
{
private:
    string name;
    string section;

public:
    Students(string name, string section)
    {
        this->name = name;
        this->section = section;
    }



    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Section: " << section << endl;
    }
};

int main()
{
    string studentName;
    string studentSection;
    string removeName;
    string searchName;
    string updatedName;

    vector<Students> students;
    while (true)
    {
        cout << "Enter student name: ";
        cin >> studentName;
        cout << "Enter student section: ";
        cin >> studentSection;

        if (studentName == "exit")
        {
            break;
        }

        students.push_back(Students(studentName, studentSection));
    }

    for (int i = 0; i < students.size(); i++)
    {
        students[i].display();
    }

    cout << "Remove name----------------------------------" << endl;

    cout << "Name to remove: ";
    cin >> removeName;
    for (int i = 0; i < students.size(); i++)
    {
        if (removeName == students[i].getName())
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

    cout << "Update----------------------------------" << endl;

    cout << "Update name " << endl;
    cout << "Enter name to update: ";
    cin >> searchName;
    cout << "Enter the updated name: ";
    cin >> updatedName;

    for (int i = 0; i < students.size(); i++)
    {
        if (searchName == students[i].getName())
        {
            students[i].setName(updatedName);
        }
    }

    cout << "Display----------------------------------" << endl;

    for (int i = 0; i < students.size(); i++)
    {
        students[i].display();
    }

    return 0;
}