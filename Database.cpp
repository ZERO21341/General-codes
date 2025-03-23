#include<iostream>
#include<vector>
using namespace std;




int main(){
vector<string> names;
string personName;
string removeName;

while(true)
{
    cout<<"Enter Name";
    cin >> personName;

    if (personName == "Exit")
    {
        break;
    }
    names.push_back(personName);
}
display(names);

cout
return 0;
}