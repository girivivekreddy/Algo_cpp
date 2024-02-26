#include <iostream>
#include <string>
using namespace std;

class Flower{
    private:
        string name;
        int petals;
        float price;
    public:
        Flower():name(""),petals(0),price(0.0){}
        void setname(string name){
            this->name = name;
        }
        void setpetals(int n){
            this->petals = n;
        }
        void setprice(float p){
            this->price=p;
        }
       string getname(){
            return name;
        }
        int getpetals(){
            return petals;
        }
        float getprice(){
            return price;
        }
};

int main(){
    Flower f1;
    f1.setname("Rose");
    f1.setpetals(10);
    f1.setprice(120.27);

    cout<<f1.getname()<<endl;
    cout<<f1.getpetals()<<endl;
    cout<<f1.getprice()<<endl;
    return 0;
}