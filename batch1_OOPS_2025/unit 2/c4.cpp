#include<iostream>
using namespace std;

class Defence{
    public:
        int id;
        string nickname;
        int age;
        bool retired;

        void NameSetter(string name){
            realName=name;
        }
        void hometownSetter(string hometown){
            this->hometown=hometown;
        }

        string NameGetter(){
            if(retired==true){
                return realName;
            }
            else{
                return "error";
            }
        }

        // Defence(int id, string nickname, int age,string realName, string hometown){
        //     this->id=id;
        //     this->nickname=nickname;
        //     this->age=age;
        //     this->realName=realName;
        //     this->hometown=hometown;
        // }

    private:
        string realName;
        string hometown;
};

int main(){

    Defence a1;
    a1.id=1001;
    a1.nickname="agentM";
    a1.age=29;
    a1.retired=false;
    a1.NameSetter("Rahul");
    a1.hometownSetter("UP");
    // cout<<a1.realName;

    string agentName=a1.NameGetter();
    cout<<agentName;
    
    
    return 0;
}