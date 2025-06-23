#include<stdio.h>

// create a structure for student details;
// display student details along with its percentage.

// struct student_details{
//     int roll_no;
//     int class;
//     float percentage;
// };

struct student_details{
    char name[30]; //string
    int roll_no;
    int class;
    int maths;
    int science;
    int sst;
};


int main() {

    struct student_details arr[5]; //s1
    struct student_details s1;
    scanf("%s",s1.name);

    for( int i=0; i<5; i++){
        printf("Enter value for index %d\n",i);
        printf("Enter name: ");
        scanf("%s",&arr[i].name);
        scanf("%d",&((arr[i]).roll_no));
        scanf("%d",&((arr[i]).class));
        scanf("%d",&((arr[i]).maths));
        scanf("%d",&((arr[i]).science));
        scanf("%d",&((arr[i]).sst));
    }
    printf("\n--------------------\n");
    for( int i=0; i<5; i++){
        printf("\n");
        printf("ROLL NO : %d\n",(arr[i]).roll_no);
        printf("CLASS : %d\n",(arr[i]).class);
        float percentage=((arr[i].maths)+(arr[i].science)+(arr[i].sst))/3;
        printf("PERCENTAGE : %.2f\n",percentage);
    }

    return 0;
}