#include<stdio.h>

int main() {
    
    FILE* ptr = fopen("studentlist.txt","a+");
    FILE* ptr2 = fopen("teacherslist.txt","a+");

    
    // fputc('z',ptr);

    // printf("%c",fgetc(ptr));

    // fputs("hello I am riya.",ptr);
    char str[100];
    fgets(str,11,ptr);
    printf("%s",str);

    fclose(ptr);
    fclose(ptr2);

    return 0;
}
