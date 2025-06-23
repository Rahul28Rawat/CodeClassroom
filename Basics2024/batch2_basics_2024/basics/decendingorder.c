#include<stdio.h>
// 5192
int main(){

    int num,a,b,c,d;
    scanf("%d",&num);
    
    int lastdigit= num%10;
    num=num/10;
    a=lastdigit;

    lastdigit= num%10;
    num=num/10;
    lastdigit>a?(b=a,a=lastdigit): (b=lastdigit);

    lastdigit= num%10;
    num=num/10;
    (lastdigit>a)?(c=b,b=a,a=lastdigit) : lastdigit>b? (c=b,b=lastdigit) : c=lastdigit;

    lastdigit= num%10;
    num=num/10;
    (lastdigit>a)?(d=c,c=b,b=a,a=lastdigit) : lastdigit>b?(d=c,c=b,b=lastdigit) : lastdigit>c? (d=c,c=lastdigit) : d=lastdigit;

    int newnumber= a*1000 + b*100 + c*10 + d*1;

    printf("%d", newnumber);

    return 0;
}