#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

double mean (vector<int> arr, int n){
    int sum = 0;
    for(int i =0 ; i < n; i++){
        sum += arr[i];
    }
    return sum / (double) n;
    
}

int main() {
    int N;
    int val;
    cin >> N;
    vector<int> arr;
    for(int i =0 ; i< N; i++){
        cin >> val;
        arr.push_back(val); 
    }
    double sum = mean(arr, N);
    //
    double std =0;
    for(int i =0 ;i < N; i++){
        std += pow((arr[i] - sum), 2);
    }
    std = sqrt(std/ N);
     cout << fixed << setprecision(1) << std << endl;

    /*Read input from STDIN. Print output to STDOUT */   
    return 0;
}
