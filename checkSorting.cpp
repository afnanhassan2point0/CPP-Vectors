// it is buggy in some cases! Be careful while implementing this code! (Logical Error)
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int value;
    bool sorted = 1;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value : ";
        cin >> value;
        v.push_back(value);
    }
    cout << "\nThe Given Dynamic/Vector array is : {";
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[0] && v[i] < v[i + 1]) // if(v[i] > v[0] && v[i] > v[i+1])
            sorted = 0;
        cout << setw(4) << v[i];
    }
    cout << "  }\n";
    if (sorted)
        cout << "YES, it is found SORTED!!";
    else
        cout << "NO, it is NOT sorted!!";
    return 0;
}