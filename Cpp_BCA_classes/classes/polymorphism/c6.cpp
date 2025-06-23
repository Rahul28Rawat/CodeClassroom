#include<iostream>
using namespace std;

//operator overloading

class Youtuber{
    public:
        int subscribers;
        string Channelname;

        Youtuber( int subs, string name){
            this->subscribers=subs;
            this->Channelname=name;
        }
        
        Youtuber(){
        }

        // Youtuber( Youtuber &o1){
        //     this->Channelname=o1.Channelname;
        //     this->subscribers=o1.subscribers;
        // }

        void display(){
            cout<<"Channel Name: "<<Channelname<<endl;
            cout<<"Subscribers: "<<subscribers<<endl;
        }
        // friend int operator+( Youtuber &o1, Youtuber &o2 );
        //-,%,/,*,<<,>>
};
//operator overloading
// int operator+( Youtuber &o1, Youtuber &o2){
//     return o1.subscribers + o2.subscribers;
// }

// int operator*( Youtuber &o1, Youtuber &o2){
//     return o1.subscribers * o2.subscribers;
// }

Youtuber operator+( Youtuber &o1, Youtuber &o2){
    Youtuber z;
    z.Channelname= o1.Channelname + ", " + o2.Channelname;
    z.subscribers= o1.subscribers - o2.subscribers;
    return z;
}

ostream& operator<<(ostream &COUT,const Youtuber &o1 ){
    COUT<<"Channel Name: "<<o1.Channelname<<endl;
    COUT<<"Subscribers: "<<o1.subscribers<<endl;
    return COUT;
}

int sum(int a, int b){
    return a+b;
}

int main(){

    Youtuber y1(1000,"physicsWallah");
    // y1.display();

    Youtuber y2(300,"Alakh Panday");
    // y2.display();
{
    // Youtuber y3;
    // y3=y1-y2;
    // y3.display();
}
    Youtuber y3(y1+y2);
    
    cout<<y1<<y2<<y3;

    return 0;
}