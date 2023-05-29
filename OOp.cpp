#include<iostream>
using namespace std;
class Largest
{
   public:
       void Maximum()
       {
           int num1,num2,num3;
            cin>>num1>>num2>>num3;
           if(num1>num2&&num1>num3){
           cout<<"First number is largest";
           }
           else if(num2>num1&&num2>num3){
                cout<<"Second number is largest";
           }
           else{
                cout<<"Third number is largest";
           }

       }
};
int main()
{
    Largest obj;
    obj.Maximum();
    return 0;

}




