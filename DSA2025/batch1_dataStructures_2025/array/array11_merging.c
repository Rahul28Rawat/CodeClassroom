#include<stdio.h>

int main() {

    int a[]={3,5,11,13,20,21};
    int b[]={1,25,30};
    int c[8];
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    int i=0,j=0,k=0;

    for( int m=0; (i<n1)&&(j<n2); m++ ){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++, k++;
        }
        else{
            c[k]=b[j];
            j++,k++;
        }
    } 
    while(i<n1){
        c[k]=a[i];
        i++, k++;
    }
    while(j<n2){
        c[k]=b[j];
        j++, k++;
    }


    printf("Elements of your array are : \n");
    for( int x=0; x<n1+n2; x++ ){
        printf("%d ", c[x]);
    }  

    return 0;
}