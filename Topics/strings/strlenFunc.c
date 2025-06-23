#include<stdio.h>
#include<string.h>

// int lengthOfstr(char arr[]){ // {'R','a','h','u','l','\0'}
//     int count=0;
//     while(arr[count]!='\0'){
//         count++;
//     }
//     return count;
// }

int lengthstring(char str[]){
    int l=0;
    while(str[l]!='\0'){
        l++;
    }
    return l;
}

int main() {

    char name[]="Muskan";
 
 
    int ans= lengthstring(name);
    printf("%d",ans);

    return 0;
}