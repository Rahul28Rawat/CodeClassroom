#include<stdio.h>

int main(){

    char alpha;
    printf("Enter a character: ");
    scanf("%c",&alpha);

    if( alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' ){
        printf("The character is a vowel.");
    }
    else{
        printf("The character is a consonant.");
    }


    //e,i,o,u

    // if(alpha=='a'){
    //     printf("The character is a vowel.");
    // }
    // else{
    //     if(alpha=='e'){
    //         printf("The character is a vowel.");
    //     }
    //     else{
    //         if(alpha=='i'){
    //             printf("The character is a vowel.");
    //         }
    //         else{
    //             if(alpha=='o'){
    //                 printf("The character is a vowel.");
    //             }
    //             else{
    //                 if(alpha=='u'){
    //                     printf("The character is a vowel.");
    //                 }
    //                 else{
    //                     printf("The character is Consonent.");
    //                 }
    //             }
    //         }
    //     }
    // }



    

    return 0;
}