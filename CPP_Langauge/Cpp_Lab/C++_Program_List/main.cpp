
///---C++ program to find factorial by defining functions outside the class-///
/*
#include <iostream>
using namespace std;
class Fact
{
private:
    int no;
public:
    void in()
    {
        cout<<endl<<"Enter any No: ";
        cin>>no;
    }
    friend void factorial(Fact);
};
void factorial(Fact ob)
{
  int fact=1;
  if(ob.no<0)
  {
      cout<<endl<<"Error! Factorial of a negative number doesn't exist.";
  }
  else
  {
      for(int i=1;i<=ob.no;i++)
      {
          fact=fact*i;
      }
  }
  cout<<endl<<"factorial of "<<ob.no<<" is "<<fact;
}
int main()
{
    Fact ob1;
    ob1.in();
    factorial(ob1);

    return 0;
}
*/
///========================================================================///
///--C++ program to find greatest b/w 3 nos. by defining the functions inside class---///
/*
#include<iostream>
using namespace std;
class Great
{
    int x;
    int y;
    int z;
public:
    void in()
    {
        cout<<endl<<"Enter the value of x,y and z: ";
        cin>>x>>y>>z;
    }
    int bigger()
    {
        int max;
        max=(x>y)?x:y;
        max=(max>z)?max:z;

        return max;
    }
    void out()
    {
        cout<<endl<<"max no is "<<bigger();
    }
};
int main()
{
    Great ob1;
    ob1.in();

    ob1.bigger();

    ob1.out();
}
*/
///======================================================================///
///--C++ program to find reverse of number by defining functions outside class-//
/*
#include<iostream>
using namespace std;
class Sample
{
    int no;
public:
    void in()
    {
        cout<<endl<<"Enter any no: ";
        cin>>no;
    }
    friend void revers(Sample);
};
void revers(Sample r)
{
    int rev=0;
    while(r.no!=0)
    {
        rev=(rev*10)+r.no%10;
        r.no=r.no/10;
    }
    cout<<endl<<"reverse no is "<<rev;
}
int main()
{
    Sample s;
    s.in();
    revers(s);

    return 0;
}
*/
///========================================================================///
///---C++ program to add two time by Call by reference---------------------///

#include<iostream>
using namespace std;
class Time
{
    int hh;
    int mm;
    int ss;
public:
    void in()
    {
        cout<<endl<<"Enter the hour,min,and sec";
        cin>>hh>>mm>>ss;
    }
    void display()
    {
        cout<<endl<<hh<<" : "<<mm<<" : "<<ss;
    }
    void in(int &h,int &m,int &s)
    {
        Time tmp;
        tmp.ss=ss+s;

        tmp.mm=mm+m+tmp.ss/60;
        tmp.ss=tmp.ss%60;

        tmp.hh=hh+h+tmp.hh/10;
        tmp.mm=tmp.mm%60;

        cout<<endl<<"Time addition is";
        tmp.display();
    }
};
int main()
{
    Time t1,t2;
    t1.in();

    t2.in(3,45,90)
}






















































