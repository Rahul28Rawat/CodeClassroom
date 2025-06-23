#include<stdio.h>

int main() { //4byte= 32 bits

    // int a=12; // 00001100
    // int b=25; // 00011001
    // // ans =     00001000 //8  
    // //bitwise operators(&,|,^,~)


    // int a=13; // 00001101
    // int b=21; // 00010101
    //      ans= 00000101

    //AND(&) Operator :- 
    // int ans = a&b;
    // printf("%d",ans);


    // int a=12; // 00001100
    // int b=25; // 00011001
    // // ans =     00011101


    // int a=13; // 00001101
    // int b=21; // 00010101
    // //      ans= 00011101

    // //OR(|) Operator :- 
    // int ans = a|b;
    // printf("%d",ans);

    // int a=12; // 00001100
    // int b=25; // 00011001
    // // ans =     00010101  


    // int a=22; // 00010110
    // int b=39; // 00100111
    // //      ans= 00110001

    // //XOR(^) Operator :- (same digits=0, different digits=1)
    // int ans = a^b;
    // printf("%d",ans);

    // int a=22; // 00010110 (22)
    //      ans= 11101001 (-23)

    // int a=39; // 00100111 (39)
    // //      ans= 11011000 (-40)

    // //complement(~) Operator :- (1=0, 0=1)
    // int ans = ~a;
    // printf("%d",ans);

    // 1101 (-3)
    // 2's complement karna
    // 1101
    // 0010 (1's complement)
    //   +1
    // 0011 (2's complement)
    // 3


    // 10010 (-14)

    // 2's complemnt
    // 10010
    // 01101 (1's complement)
    //    +1
    // 01110 (2's complement)
    // (14)



    // // unary operators
    // //right shift >>
    // int a=22;
    // int ans= a>>2;
    // printf("%d",ans);
    
    // unary operators
    //left shift >>
    int a=22;
    int ans= a<<2;
    printf("%d",ans);

    return 0;
}