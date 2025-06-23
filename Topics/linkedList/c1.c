#include<stdio.h>

struct car{
    int capacity;
    int speed;
};


int main() {

    int a=5;
    double z=7.3;

    int* ptr1=&a;
    double* ptr2=&z;


    struct car c1;
    c1.capacity=4;
    c1.speed=120;

    struct car* ptr=&c1;

//    printf("%d",(*ptr).capacity);
    printf("%d",ptr->capacity);

    // struct car c2;
    // c2.capacity=5;
    // c2.speed=150;

    // printf("%d\n",c1.capacity);
    // printf("%d\n",c1.speed);

    return 0;
}