//constructor in derive class
#include<iostream>
using namespace std;
class base{
   public:
   base(int x){
      cout<<"the is the base class value :"<<x<<endl;
   }
};
class derive:public base{
   public:
   derive(int x,int y):base(x){
      cout<<"the is the derive class value :"<<y<<endl;
   }
};
int main(){
   derive d(3,4);
}