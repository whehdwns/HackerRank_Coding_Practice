#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void getMean(const vector<int> &array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    double mean = (double)(sum) /size;
    cout << mean<< endl;
}

void getMedian(const vector<int> &array, int size) {
    double median = 0;
    vector<int> copy (size);
    copy = array;
    sort (copy.begin(), copy.end());  
    if(size % 2 == 0)
        median = (double) (copy[size/2 - 1] + copy[size/2]) / 2;
    else {
        median = (double) copy[(size-1)/2];
    }
    cout << median << endl;
}

void getMode(const vector<int> &array, int size) {
    int mode, count, max = 0;
    vector<int> copy (size);
    copy = array;
    sort (copy.begin(), copy.end());  
    int current = 0;
    for(int i = 0;i < size;i++) {
       if (copy[i] == current) {
           count++;
       } else {
           count = 1;
           current = copy[i];
       }
       if (count > max) {
           max = count;
           mode = copy[i];
       }
     }
     cout << mode << endl;
}

int main() {
    int size;
    cin >> size;
    vector<int> a(size);
    for (int i = 0;i < size;i++) 
        cin >> a[i];
    getMean(a, size);
    getMedian(a, size);
    getMode(a, size);
    return 0;
}
