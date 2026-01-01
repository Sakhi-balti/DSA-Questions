#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student
{
private:
    int roll_no; // Member variable for roll number
    string name; // Member variable for name
    int age;

public:
    // default constructor
    Student()
    {
        roll_no = 0;
        name = " ";
        age = 0;
    }
    // Constructor to initialize roll number, name and age

    Student(int Roll_no, string Name, int age)
    {
        this->roll_no = Roll_no; // Use 'this' pointer to distinguish member variable
        this->name = Name;
        this->age = age;
    }

    ~Student()
    {
        cout << "\nDestructor called" << endl;
        
    }

    void display()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name : " << name << endl;
        cout << "Age :" << age << endl;
    }
};
int main()
{
    Student st(12, "dg", 34);
    Student st1(23, "uu", 45);
    // cout << st.get_roll_no(21);

    st.display();
    //@@@@@@
    st1.display();

    return 0;
}