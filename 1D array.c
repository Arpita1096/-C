#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int *arr, n, i;
    int sum=0;
    scanf("%d", &n);
    arr=(int*) malloc(n * sizeof(int));
    if(arr==NULL)
    {
        exit(EXIT_FAILURE);
    } 
    for(i=0; i<n;i++)

    {
        scanf("%d", arr+i);
        sum+=*(arr+i);

    }  
    printf("%d", sum);
    free(arr);
   
    return 0;
}
