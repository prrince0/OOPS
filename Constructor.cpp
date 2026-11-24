
#include <iostream>
using namespace std;
 class Bank{
     string name = "unknown";
     int accountno=0;
     double balance=0;
public:
    Bank(){
        this->name = name;
        this ->accountno=accountno;
        this->balance=balance;
    }
    Bank(string name,int accountno,double balance){
        this->name = name;
        this->accountno = accountno;
        this->balance = balance;
    }
     void Display(){
         cout<<name<<endl;
         cout<<accountno<<endl;
         cout<<balance<<endl;
     }
 };

int main() {
    // Write C++ code here
    Bank b1;
    Bank b2("Prince", 8, 98);
    b1.Display();
    b2.Display();
    return 0;
}