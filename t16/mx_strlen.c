#include <stdio.h>

int mx_strlen(const char *s){
	int i;
	for(i = 0; s[i] != '\0'; i++);
	return i;

}
//int main(){
//printf("%d", mx_strlen("ggg"));
//}
