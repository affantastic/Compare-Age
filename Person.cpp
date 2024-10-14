#include <iostream>
using namespace std;

class Person
{
    private:
    string name;
    int age;
    string city;

    public:
    void inputDetails ()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter city: ";
        cin >> city;
    }

    int getAge()
    {
        return age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: "<< age << endl;
        cout << "City: " << city << endl;
    }

};

int main()
{
    Person ob1, ob2;

    cout << "Enter details for person 1: "<< endl;
    ob1.inputDetails();

    cout << "Enter details for person 2: " << endl;
    ob2.inputDetails();

    cout << "The elder person is: " << endl;
    if (ob1.getAge() > ob2.getAge()) {
        ob1.display();
    } else if (ob2.getAge() > ob1.getAge()) {
        ob2.display();
    } else {
        cout << "Both persons are of the same age." << endl;
    }
    return 0;
}