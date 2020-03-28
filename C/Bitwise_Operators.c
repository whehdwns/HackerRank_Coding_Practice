#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int first= 0, second=0, third = 0;
  for(int i =1;i<n; i++){
      for(int j = n; j> i; j--){
        if ((i&j)<k && (i&j)>first) {
            first= i&j;
        }
        if ((i|j)<k && (i|j)>second) {
            second = i|j;
        }
        if ((i^j)<k && (i^j)>third) {
            third = i^j;
        }
      }
  }
  printf("%d\n""%d\n""%d\n", first, second,third);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
