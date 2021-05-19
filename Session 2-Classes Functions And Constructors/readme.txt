# RBI
#include <iostream>
using namespace std;
class Bank
{
  char name[50];
  char accounttype[50];
  int acc;
  int balance;
  public:
  void initial()
  {
    cin>>name>>acc>>accounttype>>balance;
  }
  void deposit()
  {
    int dep;
    cin>>dep;
    balance=balance+dep;
  }
  void withdraw()
  {
    int w;
    cin>>w;
    if(w>balance)
    cout<<"Insufficient amount\n";
    else
      balance=balance-w;
  }
  void disp()
  {
    cout<<"NAME="<<name<<"\nACCNO="<<acc<<"\nTYPE="<<accounttype<<"\nBALANCEAMOUNT="<<balance;
  }
};
int main() 
{
	Bank obj;
    obj.initial();
    obj.deposit();
    obj.withdraw();
    obj.disp();
	return 0;
}







# Pambam Bridge

#include <iostream>
using namespace std;
class tollbooth
{
 int tc;
  float ac;
  public:
  tollbooth()
  { 
    tc=0;
    ac=0;
  }
  void payingcar(double m)
  {
    ++tc;
    ac=ac+m;
  }
  void nonpayingcar()
  {
    ++tc;
  }
  void disp()
  {
    cout<<"Total number of cars passed = "<<tc<<"\nTotal amount collected = "<<ac;
  }
};
int main() 
{
  int t;
  cin>>t;
  tollbooth obj;
  for(int i=0;i<t;i++)
  {
    char vname[50];
    float price;
    cin>>vname;
    cin>>price;
    if(price>0)
      obj.payingcar(price);
    else 
      obj.nonpayingcar();
  }
  obj.disp();
	return 0;
}
