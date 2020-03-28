#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    //Write your code here
    stack <char> stacked;
    queue<char> queued;
    public:
    void  pushCharacter(char ch){
        stacked.push(ch);
    }
    void enqueueCharacter(char ch){
        queued.push(ch);
    }
    char popCharacter() {
        return stacked.top();
    }
    char dequeueCharacter() {
        return queued.front();
    }
};

