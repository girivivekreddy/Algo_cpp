#include <iostream>
using namespace std;

const int LEN = 80;

class employee{
    private:
        char name[LEN];
        unsigned long number;
    public:
        void setdata(){
            cout<<"Enter name of employee: ";
            cin>>name;
            cout<<"Enter employee number: ";
            cin>>number;
        }
        void putdata(){
            cout<<"Name of employee is: "<< name <<endl;
            cout<<"Number of employee is: "<<number<<endl;
        }
};

class manager: public employee{
    private:
        char title[LEN];
        double dues;
    public:
        void setdata(){
            employee::setdata();
            cout<<"Enter title: ";
            cin>>title;
            cout<<"Enter dues: ";
            cin>>dues;
        }

        void putdata(){
            employee::putdata();
            cout<<"Title of Manager is: "<<title<<endl;
            cout<<"Dues of manager are: "<<dues<<endl;
        }
};

 class scientist: public employee{
    private:
        int pubs;
    public:
        void setdata(){
            employee::setdata();
            cout<<"Enter number of pubs of scientist: ";
            cin>>pubs;
        }
        void putdata(){
            employee::putdata();
            cout<<"Scientist published a total of "<<pubs<<endl; 
        }
 };

 class laborer: public employee{

 };

 class foreman: public laborer{
    private:
        int quotas;
    public:
        void setdata(){
            laborer::setdata();
            cout<<"Enyer quotas: ";
            cin>>quotas;
        } 

        void putdata(){
            laborer::putdata();
            cout<<"Quata of foreman: ";
            cout<<quotas<<endl;
        }
 };

int main(){
    manager m1,m2;
    scientist s1,s2;
    laborer l1;
    foreman f1;

    cout<<"Enter laborer details."<<endl;
    l1.setdata();
    cout<<endl;

    cout<<"Enter foreman details."<<endl;
    f1.setdata();
    cout<<endl;

    cout<<"Details of foreman..."<<endl;
    f1.putdata();cout<<endl;

    cout<<"Details of laborer..."<<endl;
    l1.putdata();cout<<endl;

    // cout<<"Enter details of manager 1."<<endl;
    // m1.setdata();
    // cout<<endl;

    // cout<<"Enter details of manager 2."<<endl;
    // m2.setdata();
    // cout<<endl;

    // cout<<"Enter details of scientist 1."<<endl;
    // s1.setdata();
    // cout<<endl;

    // cout<<"Details of scientisi 1..."<<endl;
    // s1.putdata();
    // cout<<endl;

    // cout<<"Details of manager 1..."<<endl;
    // m1.putdata();
    // cout<<endl;
    // cout<<"details of manager 2..."<<endl;
    // m2.putdata();

    return 0;
}