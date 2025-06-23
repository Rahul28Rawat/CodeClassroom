#include<stdio.h>

int main() {

    FILE* ptr;
    ptr= fopen("studentlist.txt","r");
    
    //first parameter = pointer to the file 
    //second parameter = length of offset
    //third parameter = The position from which the offset is added.
        //SEEK_SET: Beginning of the file.
        // SEEK_CUR: Current position of the file pointer.
        // SEEK_END: End of the file.
    fseek(ptr,11,SEEK_SET);

    char ans= fgetc(ptr);
    printf("%c\n",ans);

    fseek(ptr,2,SEEK_CUR);
    char ans2= fgetc(ptr);
    printf("%c\n",ans2);

    return 0;
}