#include<iostream>
using namespace std;
 
int main(){

    // int age=15;

    // // if(condition){
    // //     //print
    // // }

    // //Ques 1
    // if( age>18 ){
    //     cout<<"You are eligible to vote"<<endl;
    // }
    // else if( age==18 ){
    //     cout<<"You are eligible to vote"<<endl;
    // }
    // else{
    //     cout<<"You are not eligible to vote"<<endl;
    // }


    // //Ques 2
    // char alphabet;
    // cin>>alphabet;

    // //OR operator
    // if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' || alphabet=='A' || alphabet=='E' || alphabet=='O' || alphabet=='I' || alphabet=='U'  ){
    //     cout<<"Alphabet is vowel"<<endl;
    // }
    // else{
    //     cout<<"Alphabet is consonent"<<endl;
    // }


    // //Ques 3
    // int num;
    // cin>>num;
    // //AND operator
    // if( num%2==0 && num%3==0 ){
    //     cout<<"number is divisible by both 2 and 3"<<endl;
    // }
    // else{
    //     cout<<"number is not divisible by both 2 and 3"<<endl;
    // }

    // //Ques 4- create two int variables and check whether both of them are under 50 or not

    // //Ques 5
    // //NOT operator
    // int num1;
    // cin>>num1;
    // if(num1!=100){
    //     cout<<"It is a not century"<<endl;
    // }
    // else{
    //     cout<<"It is a century"<<endl;
    // }

    string option;
    cin>>option;

    if( option=="rock" ){//false
        cout<<"I choose paper";
    }
    else{ //scissor , paper
        if(option=="paper"){
            cout<<"I choose scissor";
        }
        else{
            if(option=="scissor"){
                cout<<"I choose rock";
            }
            else{
                cout<<"Invalid option";
            }
        }
    }




    return 0;
}