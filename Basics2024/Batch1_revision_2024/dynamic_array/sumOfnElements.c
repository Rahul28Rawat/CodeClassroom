#include<stdio.h>
#include<stdlib.h>
int main() {

    int num;

    printf("Enter the number of elements");
    scanf("%d", &num);

    int *ptr=(int*)malloc(num*sizeof(int));

    int sum=0;
    for(int i=0; i<num; i++){
        scanf("%d",&ptr[i]);
        sum=sum+ptr[i];
    }
    printf("%d",sum);

    return 0;
}