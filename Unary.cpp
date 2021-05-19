#include <iostream>
using namespace std;
class data 
{
  public:
      int n1;      
      int n2; 
     void setdata()
     {
       cin>>n1>>n2;
     }
  void operator -();
    
};
void data::operator -() 
     {
         n1=-n1;
         n2=-n2;
      }

int main() 
{
  for(int i=0;i<2;i++)
  {
    data obj;
    obj.setdata();
   -obj; 
   cout<<obj.n1<<" "<<obj.n2<<"\n";
  }

   return 0;
}
