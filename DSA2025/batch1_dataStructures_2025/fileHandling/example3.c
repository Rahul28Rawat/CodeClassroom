#include<stdio.h>

int main() {

    //read
    //write
    //append
    
    FILE* ptr1 = fopen("teacherslist.txt","r");
    char value=fgetc(ptr1);
    printf("%c\n",value);

    //first parameter = pointer to the source file.
    //second parameter = length of offset
    //third parameter = The position from which the offset is added.
        //SEEK_SET: Beginning of the file.
        // SEEK_CUR: Current position of the file pointer.
        // SEEK_END: End of the file.
    fseek(ptr1,6,SEEK_SET);
    value=fgetc(ptr1);
    printf("%c\n",value);
    
    // char name[30];
    // //first parameter -> string where the extracted text will be stored
    // //second parameter -> no of characters that we need to extract
    // //third parameter -> adrress of source file.
    // fgets(name,14,ptr1);
    // printf("%s",name);

    fclose(ptr1);

    return 0;
}