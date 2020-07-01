#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size){
        char *A = malloc(size +1);

        if(A != NULL && size > 0) {
                for (int i = 0; i < size + 1; i++){
                        A[i] = '\0';
                }
                return A;
        }
        return NULL;
}
//int main(){
//      printf("%s\n", mx_strnew(10));
//}
