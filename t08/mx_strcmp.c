#include <stdio.h>
  
int mx_strcmp(const char *s1, const char *s2){
        while(*s1 || *s2){
        if(*s1 < *s2){
        return *s1 - *s2;
        }
        if(*s1 > *s2){
        return *s1 - *s2;
        }
        if(*s1 == *s2){
        s1++;
        s2++;
        }
}
return 0;
}
//int main(){
//char s1[] = "BBBBBB";
//char s2[] = "AAAAAA";
//printf("%d", mx_strcmp(s1, s2));
//}