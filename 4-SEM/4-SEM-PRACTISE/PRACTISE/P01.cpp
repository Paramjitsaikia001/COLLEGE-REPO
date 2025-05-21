// write a program to insert a certain element in certain index in a array and also add to delete a element from the array.
#include <iostream>
using namespace std;
class InDearray
{
   int size;
   int array[10];

public:
   void getdata()
   {
      cout << "enter the size of the array: ";
      cin >> size;
      cout << "enter the elements of the array: ";
      for (int i = 0; i < size; i++)
      {
         cin >> array[i];
      }
   }
   void insertElement()
   {
      int n, ele;
      cout << "enter the index where you insert: ";
      cin >> n;
      cout << "enter the element you insert: ";
      cin >> ele;
      array[size] = array[size-1];
      for (int i = size; i >n; i--)
      {
         array[i]  = array[i-1];
      }
      array[n] = ele;
      size = size + 1;
   }
   void DeleteElement(){
      int n;
      cout<<"enter the element you want to delete: ";
      cin>>n;
      for(int i=0;i<size;i++){
         if(array[i]==n){
            for(int j=i;j<size;j++){
               array[j]=array[j+1];
            }
            size --;
            return ;
         }
      }
   }
   void displaydata()
   {
      cout << "the array is :";
      for (int i = 0; i < size; i++)
      {
         cout << array[i] << " ";
      }
      cout<<endl;
   }
};
int main()
{
   InDearray a;
   a.getdata();
   a.insertElement();
   a.displaydata();
   a.DeleteElement();
   a.displaydata();
   return 0;
}
