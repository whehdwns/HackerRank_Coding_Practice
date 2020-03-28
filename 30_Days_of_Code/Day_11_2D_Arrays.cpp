#include <bits/stdc++.h>
#include <climits>

using namespace std;

/*int hourglass(vector<vector<int>> arr){
    int result = -63;
    for(int i =0; i< 4; i++){
        for(int j =0; j< 4; j++){
            int sum = arr[i][j]+ arr[i][j+1]+ arr[i][j+2]+
                arr[i+1][i+1]+ arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            //result = max(result, sum);
            if(sum > result)
                result = sum;
        }
    }
    return result;
}
*/

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    //int result = hourglass(arr);
    //cout << result << "\n"; 
    
    int sum;
    int result=INT_MIN;
    for( int i=0; i<4; i++){
        for( int j=0; j<4; j++){
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+
                arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            result = max(result, sum);
        }
    }
    cout<<result;

return 0;
}
