#include<iostream>
using namespace std;
class base1{
    public:
    void print(){
        cout<<"Hello from base 1 "<<endl;
    }
};

class base2{
    public:
    void print(){
        cout<<"Hello from base 2"<<endl;
    }
};

class derived: public base1,public base2{
    public:
   
};
int main()
{
    derived obj;
    // obj.print();   // in this compiler will throw an error

    obj.base1::print();
    obj.base2::print();
    
    return 0;
}