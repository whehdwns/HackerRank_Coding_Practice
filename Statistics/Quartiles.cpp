#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int median (vector<int> arr, int start, int end){
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
    vector<int> arr(N);
    for(int i =0; i< N; i++){
        cin>> arr[i];
    }
    sort(arr.begin(), arr.end());
    //left half
    cout << median(arr, 0, N/2 -1) << endl;
    //middle
    cout << median(arr, 0, N - 1) << endl;
    //right half
     if (N % 2 == 0) {
        cout << median(arr, N/ 2, N - 1) << endl;
    }
    else {
        cout << median(arr, N / 2 + 1, N - 1) << endl;
    }

    /* Read input from STDIN. Print output to STDOUT */   
    return 0;
}
