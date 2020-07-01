#include <unistd.h>
void mx_printchar(char c);

void mx_print_alphabet(void){
    int i;
    for(i=65; i<91; i = i+2){

        char char1 = i;
        mx_printchar(char1);

        char char2 = i + 33;
        mx_printchar(char2);
    }
    mx_printchar('\n');
}

//int main(){
//    mx_print_alphabet();
//}

