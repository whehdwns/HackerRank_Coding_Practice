#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double new_tip_cost = 0;
    double new_tax_cost = 0;
    new_tip_cost = meal_cost * ((double)tip_percent / 100);
    new_tax_cost= meal_cost * ((double)tax_percent / 100);
    float totalcost = meal_cost + new_tip_cost + new_tax_cost;
    double cost = round(totalcost);
    cout << cost<< endl;
    
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
