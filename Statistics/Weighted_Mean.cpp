#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int size;
    cin >> size;
    int *arr = new int[size];
    int *w = new int[size];
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++) {
        cin >> w[i];
    }
    
    double sum, cnt = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i] * w[i];
        cnt += w[i];
    }
    
    double wmean = sum / cnt;
    
    cout << fixed << setprecision(1) << wmean;
    /*Read input from STDIN. Print output to STDOUT */   
    return 0;
}
