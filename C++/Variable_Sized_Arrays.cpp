#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


 int main() {
    int seqNum, QueryNum, seqLength;
    cin>>seqNum >> QueryNum;
    
    int** arr= new int*[seqNum];
    int query[2];
    
    for(int i=0;i<seqNum; i++){
        cin>>seqLength;
        arr[i]=new int[seqLength];
        for(int j=0;j<seqLength;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<QueryNum;i++){
        for(int j=0;j<2;j++){
            cin>>query[j];
        }
        cout<<arr[query[0]][query[1]]<<endl;
    }
    return 0;
}
