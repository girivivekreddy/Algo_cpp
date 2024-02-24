#include <iostream>
using namespace std;

class counter{
    protected:
        int count;
    public:
        counter():count(0) {}
        counter(int n):count(n){}
        void display(){
            cout<<count<<endl;
        }
        counter operator ++ (){
            return counter(++count);
        }
};

class countdn : public counter{
    public:
    counter operator -- (){
        return counter(--count);
    }
};

int main(){
    countdn c1;
    c1.display();
    ++c1;
    ++c1;
    ++c1;
    c1.display();
    --c1;
    --c1;
    c1.display();
    return 0;
}

