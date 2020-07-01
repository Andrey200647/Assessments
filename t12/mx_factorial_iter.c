#include <limits.h>
#include <stdio.h>

int mx_factorial_iter(int n) {
        int f = 1;
        if(n < 0 || n >= 20){
        return 0;
        }
        if(n == 0){
        return 1;
        }
        for(int i = 1; i <= n; i++)
        f=f*i;
        return f;

return 0;

}
//int main(){
//int n = 5;
//printf("%d\n", mx_factorial_iter(n));
//}
