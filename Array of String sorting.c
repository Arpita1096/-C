#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a , b);

}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b , a);
}
#define CHARS   26
int distinctChars(const char *a)
{
   int distinct = 0;
    int chars[CHARS] = {0};

    while (*a != '\0') {
        int chr = (*a++) - 'a';
        if (chr < CHARS)
            chars[chr]++;
    }
    
    for (int i = 0; i < CHARS; i++)
        if (chars[i])
            distinct++;

    return distinct;
}
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int result = distinctChars(a) - distinctChars(b);
    return result ? result : lexicographic_sort(a,b);
}

int sort_by_length(const char* a, const char* b) {
    int result = strlen(a) - strlen(b);
    return result ? result : lexicographic_sort(a,b);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int sorted = 0;
    int top = len - 1;
    while(!sorted)
    {
        sorted = 1;
        for(int i=0;i<top;i++)
        {
            if(cmp_func(arr[i], arr[i+1])>0){
            char *temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            sorted = 0;
            }
        }
         top--;
    }
   
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
