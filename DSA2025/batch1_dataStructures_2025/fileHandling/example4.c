#include<stdio.h>

int main() {
    //name of the file
    //file mode
    FILE* ptr = fopen("studentlist.txt","a+");
    // fprintf(ptr,"Hello my name is Rahul Rawat.");
    char value;
    while(1){
        value=fgetc(ptr);
        if (value == EOF){  
            break;
        }
        printf("%c",value);
    }


    fclose(ptr);

    return 0;
}
