#include <iostream>
using namespace std;

template <class Type>
class mul{
    private:
        Type data;
    public:
        mul():data(0) { }
        void setdata(Type n){
            data = n;
        }
        Type getdata(){
            return data;
        }
};

int main(){
    mul<int> m1;
    mul<float> m2;

    m1.setdata(3);
    cout<<m1.getdata()<<endl;
    m2.setdata(2.3);
    cout<<m2.getdata()<<endl;
    return 0;
}