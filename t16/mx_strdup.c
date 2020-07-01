#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);

char *mx_strdup(const char *str){
	int i = mx_strlen(str);
	char *str2 = mx_strnew(i);
	mx_strcpy(str2, str); 
return str2;	
}
//int main(){
//printf("%s\n", mx_strdup("Follow"));
//}
