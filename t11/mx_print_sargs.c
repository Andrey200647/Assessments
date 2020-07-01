int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strcmp(const char *s1, const char *s2);

void swap_elements(char **str1, char **str2){
char *temp = NULL;
temp = *str1;
*str1 = *str2;
*str2 = temp;
}

int main(int argc, char *argv[]){
        for(int i = 1; i < argc; i++){
        	for(int j = 1; j < argc; j++){
		if(mx_strcmp(argv[i], argv[j]) < 0){
		swap_elements(&argv[i], &argv[j]);
		}
		}

        }

for(int k = 1; k < argc; k++){
mx_printstr(argv[k]);
mx_printchar('\n');
}
}
