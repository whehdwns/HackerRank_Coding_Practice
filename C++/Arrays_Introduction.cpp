#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int length;
    cin >> length;
    int a[length];
    for(int i=0; i<length; i++ ){
        cin>>a[i];
    }
    for(int i=length-1; i>=0; i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
