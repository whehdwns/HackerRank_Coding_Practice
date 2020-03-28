#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int act_day, act_month, act_year;
    cin >>act_day;
    cin>> act_month;
    cin>>act_year;
    int exp_day, exp_month, exp_year;
    cin>>exp_day;
    cin>>exp_month;
    cin>>exp_year;
    int fine= 0;
    if(act_year>exp_year){
        fine = 10000;
    }else if(act_year == exp_year){
        if(act_month > exp_month){
            fine = (act_month-exp_month)*500;
        }else if(act_month ==exp_month ){
            if(act_day > exp_day){
                 fine = (act_day-exp_day)*15;
            }
        }
    }
    /*fine = (act_year>exp_year)? 1000 :(act_year == exp_year)? (act_month > exp_month)://(act_month>exp_month)*500?(act_month==exp_month):(act_day-exp_day>0)?(act_day-exp_day)*15:0;*/
    cout<<fine;

    /*  Read input from STDIN. Print output to STDOUT */   
    return 0;
}
