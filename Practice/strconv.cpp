#include <iostream>
#include <string.h>
using namespace std;

class String{
    private:
        char str[80];
    public:
        String(){
            str[0] = '\0';
        }
        String(char s[]){
            strcpy(str,s);
        }
        void display() const{
            cout<<str<<endl;
        }
        operator char*(){
            return str;
        }
};

int main(){
    String s1;
    s1.display();
    char xstr[] = "Vivek reddy";
    s1 = xstr;
    s1.display();
    return 0;
}