#include<stdio.h>
#include<string.h>

union school{ 
    int rollno;
    char section;
};

// Z=90

int main() {

    union school s;
    int ans=sizeof(s);
    printf("%d",ans);
    // s.rollno = 90;
    // printf("%c\n",s.section);

    return 0;
}