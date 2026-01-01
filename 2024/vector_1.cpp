#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    // vec[0] = 1000;
    // vec.push_back(1000);
    // vec.push_back(2000);
    // vec.push_back(3000);
    vec.insert(vec.end(), {12, 15, 17, 18, 10});

    cout << "vector size :" << vec.size() << endl;
    cout << "vector capacity :" << vec.capacity() << endl;
    for (int element : vec)
    {
        cout << element << " ";
    }

    cout << "\nindex number one " << vec[0] << endl;

    return 0;
}