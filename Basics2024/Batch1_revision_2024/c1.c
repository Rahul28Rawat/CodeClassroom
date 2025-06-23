#include<stdio.h>
#include<stdlib.h>

int randgenerator(){
    return (rand()%3) + 1;
}

// 100%3=0+1=1
// 5990%3=1+1=2
// 11%3=2+1=3

// 1,2,3


int main(){
    
    printf("\n----------welcome to Stone paper Scissor---------");
    while(1>0){
        printf("\n\n-----------------New Game-----------------------");
        printf("\n Enter a value : 1->Stone , 2->paper, 3->Scissors \n");
        int choice1,choice2;
        scanf("%d", &choice1);

        choice2=randgenerator();

        if(choice1==1 && choice2==3){
            printf("I choose Stone and Computer choose Scissors\n So I win!!");
        }
        else if(choice1==2 && choice2==1){
            printf("I choose Paper and Computer choose Stone\n So I win!!");
        }
        else if(choice1==3 && choice2==2){
            printf("I choose Scissors and Computer choose Paper\n So I win!!");
        }
        else if(choice1==choice2){
            printf("It's a tie");
        }
        else{
            printf("Bad Luck! Computer Won");
        }
        printf("\n\nDo you want to play again? (1/0) \n");
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
    }
    printf("\n--------------------GAME OVER---------------------");

    return 0;
}