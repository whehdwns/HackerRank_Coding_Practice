#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int N;
    string name;
    long number;
    cin>> N;
    map<string, long> dictionary;
    for(int i =0; i< N; i++){
        cin>>name;
        cin >> number;
        dictionary[name] = number;
    }
    while(cin>>name){
        if(dictionary.find(name) !=dictionary.end()){
            cout <<name<<"=" << dictionary.find(name)->second <<endl;
        }else{
            cout<<"Not found" <<endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

