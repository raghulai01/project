




























































































/*#include<iostream>
using namespace std;
class aadharid
 {
 public:
    aadharid()
    {
        int age;
         cout <<"enter the age";
         cin >>age;
        if (age>=5)
        {

         cout <<"you are eligible for biometric";

         }
         else
         {
             cout <<"age not support";
         }
    }

 aadharid(float age)
 {

   if (age>4.9)
 {

     cout <<"eligible fore bio";
 }
  else
  {
      cout <<"age not match";

  }
 }

};


int main()
{
    float age;
    aadharid ad;
     cout << "enter the second age";
     cin >> age;
     aadharid ad1(age);
}




















































































/*#include <iostream>

using namespace std;
class arithopts
{
public:

    void addition()
    {
        int x,y;
        cout <<"\n enter first value...";
        cin >>x;
        cout <<"\n enter second value...";
        cin >>y;
        cout <<"\n added vaue is ...";
        cout <<(x+y);
    }
    void subtraction()
    {
       int x,y;
        cout <<"\n enter first value...";
        cin >>x;
        cout <<"\n enter second value...";
        cin >>y;
        cout <<"\n subtract value is...";
        cout <<(x-y);

    }
    void multiplication()
    {
       int x,y;
        cout <<"\n enter first value...";
        cin >>x;
        cout <<"\n enter second value...";
        cin >>y;
        cout <<"\n multiply value is...";
        cout <<(x*y);
    }
    void division();
    void modulus();
    void increment();

};
void arithopts::division()
    {

        int x,y;
        cout <<"\n enter first value...";
        cin >>x;
        cout <<"\n enter second value...";
        cin >>y;
        cout <<"\n division value is...";
        cout <<(x/y);
    }
void arithopts::modulus()
{

        int x,y;
        cout <<"\n enter first value...";
        cin >>x;
        cout <<"\n enter second value...";
        cin >>y;
        cout <<"\n modulus value is...";
        cout <<(x%y);
}
void arithopts::increment()
{
  int x;
        cout <<"\n enter first value...";
        cin >>x;
        cout <<"\n increment value is...";
        cout <<(x++);
}
int main()
{
    arithopts AOP,ASP,APO;
    AOP.addition();
    AOP.subtraction();
    AOP.multiplication();
    AOP.division();
    AOP.modulus();
    AOP.increment();

    return 0;
}*/
























































































/*class fclsmethod
{
 public:
     int a=0;
     void multiply()
     {int x,y;
         cin >>x >>y;
         cout <<(x*y);
     }
};

int addition()
{
    int a,b,c;
    cin >>a;
    cin >>b;
    c=a+b;
    cout <<c;
    return 0;

}

int main ()
{
    addition ();
    fclsmethod FCM;
    FCM.a;
    FCM.multiply ();
    return 0;
}*/









































































/*int main()
{
    int fvalue1,fvalue2,total,op;
    cout<<"enter the value 1\n";
    cin>>fvalue1;
    cout<<"enter the value 2\n";
    cin>>fvalue2;
    cout<<"\noperators type";
    cin>>op;
    switch(op)
    {
    case 1:
        total=fvalue1+fvalue2;
        cout<<"\nadded value\n"<<total;
        break;

    case 2:
        total=fvalue1+fvalue2;
        cout<<"\nsubtract value\n"<<total;
        break;

    case 3:
        total=fvalue1*fvalue2;
        cout<<"\nmulti value\n"<<total;
        break;

    case 4:
        total=fvalue1/fvalue2;
        cout<<"\ndivision value\n"<<total;
        break;



    }
    return 0;
}*/
