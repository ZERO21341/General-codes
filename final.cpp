#include<iostream>
#include<vector>
using namespace std;

class Students {
private:
    string name;
    string section;

public:
    Students(string name, string section) {
        this->name = name;
        this->section = section;
    }

    void display() const {
        cout << "Name: " << name << ", Section: " << section << endl;
    }

    string getName() const {
        return name;
    }
};

// Function to display all students in the vector
void display(const vector<Students>& students) {
    cout << "Students in the list:" << endl;
    for (const Students& student : students) {
        student.display();
    }
}

int main() {
    vector<Students> students;
    string personName;
    string section;
    string removeName;

    // Input student details
    while (true) {
        cout << "Enter a name (or 'exit' to stop): ";
        cin >> personName;
        if (personName == "exit") {
            break;
        }
        cout << "Enter section: ";
        cin >> section;
        students.push_back(Students(personName, section));
    }

    // Display all students
    display(students);

    // Remove a student by name
    cout << "Enter the name to remove: ";
    cin >> removeName;

    for (size_t i = 0; i < students.size(); i++) {
        if (removeName == students[i].getName()) {
            students.erase(students.begin() + i);
            break; // Exit the loop after removing the student
        }
    }

    // Display students after removal
    display(students);

    return 0;
}