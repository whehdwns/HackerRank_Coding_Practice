#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /*Read input from STDIN. Print output to STDOUT */
    
    int n;
    int sum= 0;
    scanf ("%d", &n);
    int *array = (int*)malloc(sizeof(int)*n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("%i",sum);

    return 0;
}
