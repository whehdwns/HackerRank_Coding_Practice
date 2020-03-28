#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

//The interquartile range of an array is the difference between its first () and third () quartiles (i.e., ).
double median (vector<int> arr, int start, int end){
    int med= 0;
    int size = end - start +1;
    if(size % 2 == 0){
        med = (arr[start + size/2-1] + arr[start+size/2])/2;
    }else{
        med = arr[start + (size-1)/2];
    }
    return med;
}

int main() {
    int N;
    cin >> N;
    int freq;
    vector<int> arr(N);
    for(int i =0; i< N; i++){
        cin>> arr[i];
    }
    for(int i = 0; i < N; i++) {
        int element = arr[i];
        cin >> freq;
        while(freq-- > 1) {
            arr.push_back(element);
        }
    }
    sort(arr.begin(), arr.end());
    //left half
    N = arr.size();
    float left=  median(arr, 0, N/2 -1) ;
    //right half
     if (N % 2 == 0) {
        float right= median(arr, N/ 2, N - 1);
        //cout << right - left << endl;
        cout << fixed << setprecision(1) << right - left << endl;
    }
    else {
       float rightnew =  median(arr, N / 2 + 1, N - 1);
       //cout <<rightnew - left << endl;
       cout << fixed << setprecision(1) << rightnew - left << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
