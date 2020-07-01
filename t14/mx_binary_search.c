#include <stdio.h>

#include "mx_strcmp.c"
//int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {

    count++;

    int mid_index = (size - 1) / 2;

    int result = mx_strcmp(arr[mid_index], s);

    if (mid_index >= 0) {

        if (result == 0) {
            return mid_index;
        } else if (result > 0) {
            mx_binary_search(&arr[mid_index], mid_index +1, s, count);
        } else {
            mx_binary_search(arr, mid_index +1, s, count);
        }
    }

    return -1;
}

int main() {
    char* arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    int count = 0;

    int x = mx_binary_search(arr, 6, "ab", &count);
    printf("position of string in array: %d\n", x);
    printf("Number of iterations: %d\n", count);
}
