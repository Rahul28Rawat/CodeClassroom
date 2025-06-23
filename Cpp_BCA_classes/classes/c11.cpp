#include<iostream>
using namespace std;


class recipe{
    private:
        int sugar=50;
        int oil=20;
    public:
        int maida=100;
        int salt=5;
        int water=50;

        void sugarSetter(int s){
            this->sugar=s;
        }
        int sugarGetter(){
            return sugar;
        }

        void desciption(){
        cout<<": take "<<maida<<"g maida and "<<sugar<<"g sugar and "<<oil
        <<"g oil and "<<salt<<"g salt and "<<water<<"g water in a bowl."<<endl;
        }
        

};

int main(){

    recipe cake1;
    cake1.sugarSetter(400);
    cout<<cake1.sugarGetter();
    // cake1.desciption();


    return 0;
}