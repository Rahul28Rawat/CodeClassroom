#include<stdio.h>
#include<string.h>

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b=temp;
}

int lengthStr(char arr[]){ // {'R','a','h','u','l','\0'}
    int count=0;
    while(arr[count]!='\0'){
        count++;
    }
    return count;
}

void ReverseWord( char word[], int start, int end ){
    int i=start;
    int j=end-1;

    while(i<j){
        swap(&word[i],&word[j]);
        i++;
        j--;
    }
}

void ReverseString( char str[]){
    int i=0;
    int j=0;
    while(str[i]!='\0'){
        if(str[i]!=' '){
            j++;
        }
        else{
            ReverseWord(str,i,j-1);
            i=j+1;
        }
        i++;
    }
}

int main() {

    char str[]="how are you";
    ReverseString(str);
    printf("%s",str);

    return 0;
}