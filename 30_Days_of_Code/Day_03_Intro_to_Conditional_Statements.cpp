#include <bits/stdc++.h>

using namespace std;
int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (N % 2 == 0)
    {
        if  (N < 6 or N > 20)
        {
            cout << "Not Weird";
        }
        else
        {
            cout << "Weird";
        }
    }
    else
    {
        cout << "Weird";
    } 
    return 0;
}
