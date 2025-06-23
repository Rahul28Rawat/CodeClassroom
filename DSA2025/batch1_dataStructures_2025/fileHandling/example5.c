#include<stdio.h>

int main() {
    
    FILE* ptr = fopen("studentlist.txt","r");

    //write in a file
    fprintf(ptr,"Hello my name is rahul\n");
    
    char str[200];

    //fgets
    // fgets(str,15,ptr);
    // printf("%s ",str);

    // while(fscanf(ptr,"%s",str)!=EOF){
    //     printf("%s ",str);
    // }

    // fgetc()
    char value;
    while(1){
        //read in a file
        value=fgetc(ptr);
        if(value==EOF){
            break;
        }
        //display the file
        printf("%c",value);
    }
   
    fclose(ptr);

    return 0;
}
