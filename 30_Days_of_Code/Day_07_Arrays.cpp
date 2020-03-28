#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main()
{
    int n;
    cin >> n;
    int *array = (int*)malloc(sizeof(int)*n);
    for(int i =0 ; i< n; i++){
       cin >> array[i];
    }
    for(int i =0; i < n; i++){
        cout << array[(n-1) -i] <<" ";
    }

}
