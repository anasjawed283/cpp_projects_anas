#include <iostream>
using namespace std;

int main() {
    int num, n1 = 0, n2 = 1, flag = 0;

    cout << "Enter the number of terms to be displayed in the series: ";
    cin >> num;

    cout << "The Series is: ";

    for (int i = 1; i <= num; ++i)//to maintain the loop until the series reaches the end tearm
    {
        if(i == 1)//initial condition
        {
            cout << n1 << ", ";
            continue;
        }
        if(i == 2)
        {
            cout << n2 << ", ";
            continue;
        }
        flag = n1 + n2;
        n1 = n2;
        n2 = flag;
        
        cout << flag << ", ";
    }
    return 0;
}
