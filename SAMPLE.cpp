#include <iostream>
#include <vector>
using namespace std;

void display(vector<string> v){
    /*for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }*/

    for(const auto&x:v){
        cout << x << endl;
    }
}

int main()
{
    cout<<"Before erasing--------------------------------------------"<<endl;
    vector<string> v;
    v.push_back("Arf");
    v.push_back("Bark");
    v.push_back("Carts");
    v.push_back("Dark");
    v.push_back("Ears");
    v.push_back("Fond");
    v.push_back("Gnome");
    v.push_back("hello");
    v.push_back("interstellar");
    display(v);
       cout<<"After erasing--------------------------------------------"<<endl;

    v.erase(v.begin()+1);

    display(v);

    cout<<"Delete All";
    v.clear();



   
return 0;
}   