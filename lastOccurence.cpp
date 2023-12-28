#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(7);
    int i, n, loc;
    bool found = 0;
    for (i = 0; i < 7; i++)
    {
        cout << "Enter value : ";
        cin >> v[i];
    }
    cout << "\nEnter number to be find : ";
    cin >> n;
    for (i = 6; i >= 0; i--)
    {
        if (v[i] == n)
        {
            found = 1;
            loc = i + 1;
            break;
        }
    }
    if (found)
        cout << "The last occurence is at : " << loc << endl;
    else
        cout << "Given number not found!!";
    return 0;
}