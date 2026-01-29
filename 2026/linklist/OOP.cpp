#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Empolyee
{
private:
    string password = "302hsourn";

public:
    string name;
    int age;
    int salary;
    int id;
    Empolyee(string name, int age, int id)
    {
        this->name = name;
        this->age = age;
        this->salary = 898;
        this->id = id;
    }
    // Creat the Custom copy contructor
    Empolyee(Empolyee &Org)
    {
        this->name = Org.name;
        this->age = Org.age;
        this->id = Org.id;
    }
};
int main()
{
    Empolyee a("sakhawat", 77, 8800);
    Empolyee b(a);
    cout << "name: " << a.name << endl;
    cout << "age: " << a.age << endl;
    cout << "id: " << a.id << endl;
    cout << "b name: " << b.name << endl;
    cout << "b age ;;;;;;" << b.age << endl;
    return 0;
}