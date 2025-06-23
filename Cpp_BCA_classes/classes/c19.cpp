#include<iostream>
using namespace std;

//types--> 
//single inheritance(A->B)
//multilevel inheritance(A->B->C->D)
//Multiple inheritance(A->C)(B->C)
//heirarchial inheritance(A->B)(A->C)(A->D)
//hybrid inheritance

//access modifiers

//parent      child(public)    child(private)  child(protected)
//Public   -  Public           private         private
//Private  -  not inherited    not inherited   not inherited
//protected-  private          private         protected





class parent{
    protected:
        int protectedValue=100;

    private:
        int privateValue=50;

    public:
        int publicValue=10;

};

class child : protected parent{
    protected:
        protectedvlaue
    public:
    void getprotected(){
        cout<<this->protectedValue<<endl;
    }
        
};

int main(){

    child c1;
    c1.getprotected();

    return 0;
}