#include<stdio.h>
#include<string.h>

int StringCompare(char str1[], char str2[]){
    int i = 0;
    while( str[i]!='\0' && str2[i]!='\0' ){
        if(str1[i]>str2[i]){
            return 1;
        }
        else if(str1[i]<str2[i]){
            return -1;
        }
        i++;
    }
    return 0;
}

int main() {

    char name[]="riza";
    char name2[]="riya";

    int ans = strcmp(name,name2);
    printf("%d",ans);

    return 0;
}