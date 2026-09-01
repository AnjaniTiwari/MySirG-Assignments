#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Q1
int fact(int num) {
    if(num == 0)
        return 1;
    return num*fact(num-1);
}

int combination(int n, int r) {
    return fact(n)/(fact(r)*fact(n-r));
}

char** string_combination(char* str, int r) {
    int len = strlen(str);
    int x = combination(len, r);
    char** arr = (char**)calloc(x, sizeof(char*));
    int z = 0, l;
    for(int i = 0; len-i >= r; ++i) {
        for(int j = l = i+1; len-j >= r-1; ++j) {
            arr[z] = (char*)calloc(r+1, sizeof(char));
            if(arr[z]) {
                arr[z][0] = str[i]; 
                for(int k = 1; k < r; ++k) 
                    arr[z][k] = str[j+k-1];
                z++;
            }
        }
    }
    return arr;
}

void print_strings(char** str, int x) {
    for(int i = 0; i < x; ++i) {
        printf("%s\n", str[i]);
        free(str[i]);
        str[i] = NULL;
    }
    free(str);
    str = NULL;
}

int main() {
    system("clear");
    char str[] = "ABCD";
    int x = combination(strlen(str), 3);
    char** arr = string_combination(str, 3);
    print_strings(arr, x);
    return 0;
}