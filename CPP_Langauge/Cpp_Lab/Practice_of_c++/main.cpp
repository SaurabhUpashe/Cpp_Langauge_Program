/*
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int* const ch=&x;
    cout<<endl<<"ch="<<*ch;
//
//    int y=20;
//    ch=&y;
//    cout<<endl<<"ch="<<*ch;

    x=200;
    cout<<endl<<"ch="<<*ch;

    *ch=300;
    cout<<endl<<"ch="<<

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int x=100;
    int const *ch=&x;
    cout<<endl<<"ch of x="<<*ch;

    int y=200;
    ch=&y;
    cout<<endl<<"ch of y="<<*ch;

    *ch=777;
    cout<<endl<<"ch="<<ch;
}
*/
/*
#include<iostream>
using namespace std;
void si(int p,float r=7.35,int n=3)
{
    float si=(p*r*n)/100;
    cout<<endl<<"Simple Interest: "<<si;
}
int main()
{
    int p,n;
    float r;

    cout<<endl<<"Enter the P and N:";
    cin>>p>>n;

    cout<<endl<<"Enter the rate of interest: ";
    cin>>r;

    si(p,r,n);

    si(p,r);

    si(p,n);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Student
{
private:
    int id;
    char nm[40];
    int age;
public:
    void input()
    {
      cout<<endl<<"Enter the name of student: ";
      fflush(stdin);
      cin.getline(nm,40);

      cout<<endl<<"Enter the id and name of Student: ";
      cin>>id>>age;
    }
    void output();

};
void Student::output()
{
    cout<<endl<<"Name: "<<nm<<"\t Id: "<<id<<"\t Age: "<<age;
}
int main()
{
    Student s;
    s.input();
    s.output();

    Student s1;
    s1.input();
    s1.output();
    return 0;
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
private :
    int id[3];
    int age[3];
public:
    void set()
    {
      cout<<endl<<"Enter the Id and Age of Students:";
      for(int i=0;i<3;i++)
      {
         cout<<endl<<"Enter the student Id: ";
         cin>>id[i];
         cout<<endl<<"Enter the student Age: ";
         cin>>age[i];
      }
    }
    void get()
    {
        for(int i=0;i<3;i++)
        {
          cout<<setw(6)<<id[i]<<"----->"<<age[i];
        }
    }
};
int main()
{
    Student s;
    s.set();
    s.get();
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void printsi(int p,int n=4,float r=8.6)
{
    float si=(p*r*n)/100;
    cout<<endl<<"Simple Interest is: "<<si;
}
int main()
{
    int p,n;
    float r;
    cout<<endl<<"Enter the value of p and n: ";
    cin>>p>>n;

    cout<<endl<<"Enter the rate of interest: ";
    cin>>r;
    printsi(p,r,n);

    printsi(p,n);

    printsi(p);

}
*/
/*
#include<iostream>
using namespace std;
class Student
{
private:
    char nm[30];
    int id;
    float per;
public:
    void set()
    {
        cout<<endl<<"Enter the Name of Student: ";
        fflush(stdin);
        cin.getline(nm,60);
        cout<<endl<<"Enter the id and Percentage: ";
        cin>>id>>per;
    }
    void getdata()
    {
        cout<<endl<<"Name:"<<nm<<"\t Id: "<<id<<"\t percentage: "<<per;
    }
};
int main()
{
    Student s;
    s.set();
    s.getdata();

    Student s1;
    s.set();
    s.getdata();

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Student
{
    char nm[30];
    int id;
public:
    void input()
    {
        cout<<endl<<"Name of Student: ";
        cin>>nm;
        cout<<endl<<"Enter the id: ";
        cin>>id;
    }
    void output();
};
void Student::output()
{
    cout<<endl<<"Name:"<<nm<<"\t Id: "<<id;
}
int main()
{
    Student s;
    s.input();
    s.output();

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Item
{
    int id[3];
    float prz[3];
public:
    void in()
    {
       for(int i=0;i<3;i++)
       {
           cout<<endl<<"Enter the id: ";
           cin>>id[i];
           cout<<endl<<"Enter the Prize: ";
           cin>>prz[i];
       }
    }
    void out()
    {
        cout<<"Id"<<"\t"<<"prize"<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<endl<<" "<<id[i]<<"\t"<<prz[i];
        }
    }
};
int main()
{
    Item i;
    i.in();
    i.out();

    return 0;
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
private:
    int rno[3];
    float per[3];
    float tot_bill()
    {
       float tot=0.0;
       for(int i=0;i<3;i++)
       {
           tot=tot+per[i];
       }
       return tot;
    }

public:
    void input()
    {
        cout<<endl<<"Enter the Id and Per: "<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<endl<<"Enter Roll No: ";
            cin>>rno[i];

            cout<<endl<<"Enter per No: ";
            cin>>per[i];
        }
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            cout<<endl<<rno[i]<<setw(10)<<per[i];
        }
        cout<<endl<<"Total Percentage: "<<tot_bill();
    }
};
int main()
{
    Student s;
    s.input();
    s.display();

    return 0;
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
private:
    int id;
    int mrks[5];
public:
    void in()
    {
      cout<<endl<<"Enter the id: ";
      cin>>id;

      cout<<endl<<"Enter 5 sub marks: ";
      for(int i=0;i<5;i++)
      {
          cin>>mrks[i];
      }
    }
    void out()
    {
       cout<<endl<<"Student id: "<<id;
       for(int i=0;i<5;i++)
       {
           cout<<endl<<setw(6)<<mrks[i];
       }
    }
};
int main()
{
    Student s[3];
    for(int i=0;i<3;i++)
    {
        s[i].in();
    }

    cout<<endl<<"Student 5 Sub Marks: ";
    for(int i=0;i<3;i++)
    {
        s[i].out();
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Rect
{
    int width;
    int length;
public:
    void set(int l,int w)
    {
        length=l;
        width=w;
    }
    void get()
    {
        cout<<"Lenght:"<<length<<"\t Width:"<<width;
    }
    int getarea()
    {
        int area=length*width;
        return area;
    }
};
int main()
{
    Rect r;
    int len,wid;
    cout<<"Enter the Lenght and Width:";
    cin>>len>>wid;
    r.set(len,wid);

    r.get();
    int ra=r.getarea();
    cout<<endl<<"Reactangular Area: "<<ra;
}
*/
#include<iostream>
using namespace std;
class Time
{
    int hour;
    int min;
    int sec;
public:
    void set()
    {
        cout<<endl<<"Enter the hour,minand secs: ";
        cin>>hour;
        cin>>min;
        cin>>sec;
    }
    void set(int h,int m,int s)
    {
        hour=h;
        min=m;
        sec=s;
    }
    void show()
    {
        cout<<endl<<hour<<" : "<<min<<" : "<<sec<<" : ";
    }
    Time Addtime(Time ob)
    {
        Time tmp;
        tmp.sec=sec+ob.sec;

        tmp.min=min+ob.min+tmp.sec/60;
        tmp.sec=tmp.sec%60;

        tmp.hour=hour+ob.hour+tmp.min/60;
        tmp.min=tmp.min%60;

        return tmp;
    }
};
int main()
{
    Time t1,t2;
    t1.set();
    t2.set(2,45,56);

    cout<<endl<<"T1 Time";
    t1.show();

    cout<<endl<<"T2 Time";
    t2.show();

    Time t3=t1.Addtime(t2);
    t3.show();
    return 0;
}

















