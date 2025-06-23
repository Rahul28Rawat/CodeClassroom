#include<stdio.h>
#include<string.h>

void StringCopy(char str1[], char str2[]){ //rahul\0
    int i=0;
    while(str2[i]!='\0'){
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
}

int main() {

    char name[]="riya"; //string 1
    char name2[100]=""; //string 2
    

    StringCopy(name2,name); //inbuilt function
    printf("%s\n",name2);


    return 0;
}