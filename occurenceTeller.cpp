#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, times = 0, n, u;
    cout << "How many numbers to initialize with : ";
    cin >> u;
    vector<int> x(u);
    for (i = 0; i < u; i++)
    {
        cout << "Enter value " << i << " :: ";
        cin >> x[i];
    }
    cout << "\nEnter the number to be found : ";
    cin >> n;
    for (i = 0; i < u; i++)
    {
        if (x[i] == n)
            times++;
    }
    if (times == 0)
        cout << "Given number not found!!";
    else
        cout << "Given number occured " << times << " times!";
    return 0;
}