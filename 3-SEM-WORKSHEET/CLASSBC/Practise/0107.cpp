#include<iostream>
using namespace std;
class base{
   public:
   void show(){
      cout<<"this is the base class function";
   }
};
class derive :public base{
   public:
   void show(){
      cout<<"this is the derive class function ";
   }

};
int main(){
   derive d;
   d.show();
   return 0;
}


