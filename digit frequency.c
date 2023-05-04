#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    char* str;
    scanf("%ms", &str);
    for(int i = 0; i < strlen(str); i++) {
        int tmp = *(str + i) - 48;
        if(tmp >= 0 || tmp <= 9) {
            *(arr + tmp) += 1;
        }
    }
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    } 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
