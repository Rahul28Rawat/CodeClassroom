#include<stdio.h>
#include<string.h>

// void Stringconcatanate(char str1[],char str2[]){
//     int i=0;
//     int j=0;
//     while(str1[i]!='\0'){
//         i++;
//     }
//     while(str2[j]!='\0'){
//         str1[i]=str2[j];
//         i++;
//         j++;
//     }
//     str1[i]='\0';
// }

int lengthStr(char arr[]){ // {'R','a','h','u','l','\0'}
    int count=0;
    while(arr[count]!='\0'){
        count++;
    }
    return count;
}

void strConcatenate(char str1[], char str2[]){
    int n1=lengthStr(str1);
    int n2=lengthStr(str2);
    for(int i=0; i<=n2; i++){
        str1[i+n1]=str2[i];
    }
}

int main() {

    char name[50]="muskan";
    char surname[50]="Singh";

    // strcat(name,"rawat");
    strConcatenate(name,"rawat");
    printf("%s",name);
    
    
    // i=7
    // j=3
    
    // "riya"
    // ='r','i','y','a','r','a','m','\0'
    
    // "Ram"
    // ='r','a','m','\0'

    // // while(str2[j]!='\0'){
    // //     str1[i]=str2[j];
    // //     i++;
    // //     j++;
    // // }
    // str1[i]='\0'

    return 0;
}