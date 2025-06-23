#include<stdio.h>

int main() {

    FILE* ptr;
    ptr= fopen("studentlist.txt","r");
    char sentence[23]; //string

    //first parameter -> string where the extracted text will be stored
    //second parameter -> no of characters that we need to extract
    //third parameter -> adrress of source file.
    fgets(sentence,10,ptr);
    
    printf("%s",sentence);
    
    // fprintf(ptr,"My name is Rahul Rawat.\n");


    fclose(ptr);

    return 0;
}