#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
  int a;
  int b;
  int c;
};

typedef struct triangle triangle;

void swap(triangle* a, triangle* b){
    triangle temp = *a;
    *a = *b;
    *b = temp;
}

double area_of_triangle(triangle tr){
    int a = tr.a;
    int b= tr.b;
    int c = tr.c;
    double p = (a+b+c)/2.0;
    double area =  sqrt(p*(p-a)*(p-b)*(p-c));
    return area;
}
void sort_by_area(triangle* tr, int n) {
  /**
  * Sort an array a of the length n
  */
    for(int i= 0; i< n; i++){
        for(int j =0; j<n-i-1; j++){
            if(area_of_triangle(tr[j])> area_of_triangle(tr[j+1])){
                swap(&tr[j], &tr[j+1]);
            }
        }
    }
    
}

int main()
{
  int n;
  scanf("%d", &n);
  triangle *tr = malloc(n * sizeof(triangle));
  for (int i = 0; i < n; i++) {
    scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
  }
  sort_by_area(tr, n);
  for (int i = 0; i < n; i++) {
    printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
  }
  return 0;
}