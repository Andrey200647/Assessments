#include <stdio.h>
  
char *mx_strcpy(char *dst, const char *src){
int i = 0;
while(src[i]){
dst[i] = src[i];
i++;
}
dst[i] = '\0';
return dst;
}
//int main(){
//char src[] = "qwert";
//char dst[20] = "qew";
//printf("%s", mx_strcpy(dst, src));
//}