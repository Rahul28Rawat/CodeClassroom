#include<iostream>
using namespace std;

class instagram{
    public:
        string name;
        int followers;
        int posts;

        instagram( string name, int followers, int posts){
            this->name = name;
            this->followers = followers;
            this->posts=posts;
        }

        instagram(){
            this->name = "unknown";
            this->followers = 0;
            this->posts = 0;
        }

        instagram( instagram &obj1 ){
            this->name = obj1.name;
            this->followers = obj1.followers;
            this->posts=posts;
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Followers: "<<followers<<endl;
            cout<<"Posts: "<<posts<<endl;
        }

};

instagram operator+( instagram &o1, instagram &o2 ){
    instagram o3;
    o3.name = o1.name;
    if(o1.followers > o2.followers){
        o3.followers = o1.followers;
    }
    else{
        o3.followers = o2.followers;
    }
    o3.posts=o1.posts+ o2.posts;
    return o3;
}

// ostream& operator<<( ostream &COUT, instagram &o1 ){
//     o1.display();
//     return COUT;
// }

int main(){

    instagram p1("tanishka",100,29);
    // p1.display();
    instagram p2("taru",40,5);
    // p2.display();
    instagram p3;
    p3=p1+p2;
    p3.display();
    //name-> pick any one
    //followers-> which ever is maximum
    //posts-> sum of both object's posts


    return 0;
}