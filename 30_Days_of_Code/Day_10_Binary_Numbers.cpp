#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int rem,s,t = 0;
    while ( n > 0){
        rem  = n%2;
        n = n/2;
        if(rem == 1){
            s++;
            if(s >= t){
                t =s;
            }
        }
        else{
            s = 0;
        }
    }
    cout << t <<endl;
    return 0;
}
