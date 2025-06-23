#include<stdio.h>

void oddeven( int a ){//20
    
    if(a%2==0){
        goto label1;
    }
    else{
        goto label2;
    }

    label1:
        printf("number is even\n");
        return;
    label2:
        printf("number is odd\n");
}

int main(){

    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    oddeven(number);

    return 0;
}