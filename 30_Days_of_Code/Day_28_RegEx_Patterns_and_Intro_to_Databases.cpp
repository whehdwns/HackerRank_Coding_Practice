#include <bits/stdc++.h>
#include <iterator>
#include <regex>
using namespace std;

vector<string> split_string(string);

int main()
{
    int N;
    cin >> N;
    regex e(".+@gmail\\.com$");
    list<string> lc;
    string fname;
    string email;
    for(int i=0; i< N; i++){
        cin>>fname>>email;
        
        if(regex_match(email,e)){
            lc.push_back(fname);
        }
    }
    lc.sort();
    for(auto & name : lc){
       cout<<name<<endl;
    }

}
