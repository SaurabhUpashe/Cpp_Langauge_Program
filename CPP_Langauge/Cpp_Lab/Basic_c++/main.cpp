#include<iostream>///here don't Write( .h )because GNU GCC compiler not support this
/*
#include<iostrem>
int main()
{
    std::cout<<"Welcome To C++ Programing Langauge";
    return 0;
}
*/
///===================================================================================///
///--- //is single line comment. you can use /* */ as multiine comment
/*
#include<iostream>
int main()
{
    std::cout<<"Welcome to C++ Langauge programing";
    std::cout<<"Name:- Saurabh Dhananjay Upashe";
    std::cout<<"Add:- Aitwade khurd tal:- Walwa Dist:- Sangali";
    return 0;
}
*/
///====================================================================================///
///If you want to display multiple statements the you need to write std:: at start
///of every cout<<. to avoid it you can use the "using namespace"
/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"welcome To C++ Programing Langauge";
    cout<<"Name:- Suarabh Dhananjay Upashe";
    cout<<"Add:- Aitawade Khurd Tal :- Walwa Dist:- Sangali";
    cout<<"No:- 8483919279";
    return 0;
}
*/
///=========================================================================================================///
/// Now, use of "using namespace" is cleared, but this program will gives the output in unformated manner
/// and to display the output in wel formatted manner, we have two options.
///        1- use escape sequence characters
///		   2- use manipulators
/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"\n welcome To C++ Programing \r Langauge";
    cout<<"\n Name:- Suarabh \t Dhananjay Upashe";
    cout<<"\n Add:- Aitawade Khurd \t Tal :- Walwa Dist:- Sangali";
    cout<<"\n No:- 8483919279";
    return 0;

}
*/
///=======================================================================================///
///-------------------------(USING Manipulators)-----------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<endl<<"Welcome"<<setw(30)<<" To C++ Programing";
    cout<<endl<<"saurabh"<<setw(20)<<endl<<"Dhanjay"<<setw(30)<<"upashe";
    cout<<endl<<"ssc:-80"<<endl<<"Diploma:-74.4"<<endl<<"B.tech:-77";
    cout<<endl<<"Add:- Aitawde khurd"<<endl<<"Tal:-Walwa"<<endl<<"dist:-Sangali";
    cout<<endl<<"i have 7 biscuit of Gold";

}
*/
///=====================================================================================///
///---------------------(USING const keyword)------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    /// Declaring integer constants
    const int MIN_VALUE=0;
    const int MAX_VALUE=100;

    /// Declaring floating-point constants
    const double pi_value=3.14519;
    const float gra_vity=9.18f;

    /// Declaring character constants
    const char NEW_LINE='\n';
    const char TAB='\t';

    /// Using constants in expressions
    int Range=MIN_VALUE-MAX_VALUE;
    double circumference=2*pi_value*5.0;

    /// Outputting constants
    cout<<"range:-"<<Range<<endl;
    cout<<"circumfrence:-"<<circumference;

    return 0;
}
*/
///===========================================================================================///
///----------using Enum
/*
#include<iostream>
using namespace std;
int main()
{
    enum {RED,BLACK,GREEN,YELLOW};
    cout<<endl<<"first:-"<<RED;
    cout<<endl<<"Second:-"<<BLACK;
    cout<<endl<<"third:-"<<GREEN;
    cout<<endl<<"forth:-"<<YELLOW;

    int x=BLACK;
    cout<<endl<<"x:- "<<x;

    enum COLOUR{ORANGE,PINK=23,WHITE};
    int c=WHITE;
    cout<<endl<<"c:- "<<c;
}
*/
///======================================================================================///
/*
#include<iostream>
#include<i
using namespace std;
#define PI_VALUE 3.14159
int main()
{
    float reduis=5.0;
    double area=PI_VALUE*reduis*reduis;
    std::cout<<endl<<"area:- "<<area;
    return 0;
}
*/
///======================================================================================///
/*
#include<iostream>
using namespace std;
int main()
{
    char ch='S';
    int x=12;
    float ft=96.2;
    double db=89.659;
    bool b=true;

    cout<<endl<<"the character is:- "<<ch;
    cout<<endl<<"x is :-"<<x;
    cout<<endl<<"ft is:-"<<ft;
    cout<<endl<< "db is :-"<<db;
    cout<<endl<<boolalpha<<"b is :-"<<b;
    return 0;
}
*/
///================================================================================///
/*
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<endl<<"Enter The any character :- ";
    cin>>ch;

    int x;
    cout<<endl<<"Enter the x value ;- ";
    cin>>x;

    float ft;
    cout<<endl<<"Enter the Any fraction value :- ";
    cin>>ft;

    double db;
    cout<<endl<<"Enter the fraction value :- ";
    cin>>db;

    cout<<endl<<"charcter is :-"<<ch<<"\t value of x="<<x
               <<"\t value of ft="<<ft<<endl<<"value of db="<<db;

    return 0;
}
*/
///================================================================================================///
///---------------------------Using Assingment Operater-------------------------------------------///
/// ---Wap to enter any value throught keyboard and interchnage the  value of veriable-----------///
/*
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<endl<<"Enter The value of x:- ";
    cin>>x;

    int y;
    cout<<endl<<"Enter the value of Y:-";
    cin>>y;

    cout<<endl<<"before processing value of x:-"<<x<<"\t y:-"<<y;

    int temp=x;
        x=y;
        y=temp;
    cout<<endl<<"AFter Processing value of x:-"<<x<<"\t y:-"<<y;
     return 0;
}
*/
///================================================================================================///
///---------------------------Using Unary Operater-------------------------------------------///
/*
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    int x=6,y=7,z;

    z=-x;
    cout<<endl<<x<<setw(3)<<y<<setw(3)<<z;

    ++x;
    y--;
    cout<<endl<<x<<setw(3)<<y<<setw(3)<<z;

    z=++x + --y;
    cout<<endl<<x<<setw(3)<<y<<setw(3)<<z;
    return 0;
}
*/
///================================================================================================///
///---------------------------Using Arithmatic Operater-------------------------------------------///
///--------------------Wap to claculate simple interest------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int p,n;
    float r;
    cout<<endl<<"Enter the value of p, n,r:- ";
    cin>>p>>n>>r;

    float si=(p*r*n)/100;

    cout<<endl<<"Simple Interest is:- "<<si;
    return 0;
}
*/
///------------------------------------------------------------------------------------------///
///-------wap to convert temp from f to deg-------------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int ft;
    cout<<endl<<"Enter The temprature :- ";
    cin>>ft;

    float deg=(ft-32)/1.8;

    cout<<endl<<"fhar to deg :- "<<deg;
    return 0;

}
*/
///================================================================================================///
///---------------------------Using Arithmatic Operater((%Modulus)-----------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int no,ans=0;
    cout<<endl<<"Must be enter only 3 digit any Number :-";
    cin>>no;

    int rem=no%10;
    ans=ans+rem;
    no=no/10;

    rem=no%10;
    ans=ans+rem;
    no=no/10;

    rem=no%10;
    ans=ans+rem;
    no=no/10;

    cout<<endl<<"Addition of digit :- "<<ans;
    return 0;
}
*/
///----------------------------------------------------------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int rem,rev=0,no;
    cout<<endl<<"must be enter only 3 digit no:- ";
    cin>>no;

    rem=no%10;
    rev=(rev*10)+rem;
    no=no/10;

    rem=no%10;
    rev=(rev*10)+rem;
    no=no/10;

    rem=no%10;
    rev=(rev*10)+rem;
    no=no/10;

    cout<<endl<<"Revrse No is:- "<<rev;
    return 0;
}
*/
///===============================================================================================///
///------------------(Using Retional Operater)----------------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y;

    cout<<endl<<"Enter the value of x and y:- ";
    cin>>x>>y;

    int z=x>y;
    cout<<endl<<" z is :-"<<z;//here boolen value is 1 its true and value 0 its false

    cout<<endl<<"x>y :- "<<(x>y);
}
*/
///===============================================================================================///
///------------------(Using Logical Operater)----------------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    bool x,y;
    cout<<endl<<"Enter the value of x and y:- ";
    cin>>x>>y;

    cout<<endl<<"x%2==0 && y%!=0 :- "<<(x%2==0 && y%2!=0);

    cout<<endl<<"x%2==0 || y%2!=0:- "<<(x%2==0 || y%2!=0);
    return 0;
}
*/
///===============================================================================================///
///------------------(Using conditional Operater)----------------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y;
    cout<<endl<<"Enter the value of x and y :- ";
    cin>>x>>y;

    (x>y)?cout<<endl<<"max no is :- "<<x:cout<<endl<<"max no is:- "<<y;
}
*/
///---------------------WAP to find max between 3 nos ---------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y,z,max;
    cout<<endl<<"Enter the x,y and z value :- ";
    cin>>x>>y>>z;

    max=(x>y)?x:y;
    max=(max>z)?max:z;

    cout<<endl<<"Max between Three no is :- "<<max;
    return 0;
}
*/
///====================================================================================///
///--------------using bool keyword (boolaphla manipulator)---------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x=25,y=63;
    int ans=(y>x);
    bool b=(y<x);

    cout<<endl<<"Ans: "<<ans;
    cout<<endl<<"B:- "<<b;
    cout<<endl<<boolalpha<<"Bool:- "<<b;

    return 0;
}
*/
///=======================================================================///
///--------using (:: scope resolution operater)--------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int x=100;
int main()
{
    int x=10;
    cout<<endl<<"from main --- local veriable :- "<<x;//10///here we do not use :: operater so it not access global veriable
    cout<<endl<<"from main --- global veriable :- "<<::x;//100///here we use :: operater so it access global veriable
    {
        int y=x;
        cout<<endl<<"from main--inner 1 x:-"<<x;//10
        cout<<endl<<"from main--inner 1 y:- "<<y;//10

        int x=1;
        cout<<endl<<"from main--inner 2 x:-"<<x;//1
        cout<<endl<<"from main--inner 2 y:-"<<y;//10

        cout<<endl<<"from main--inner 1 x:-"<<::x;//100

    }
    cout<<endl<<"from main --- local veriable :- "<<x;//10
    cout<<endl<<"from main --- global veriable :- "<<::x;//100

    return 0;
}
*/
///====================================================================================================///
///--------------------------using "New" and "Delete" operater---------------------------------------///
/*

///In C, Allocation will be done with the help of malloc() and memory release using free()
///we can use them here in C++ also,
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int *p,cnt;

    cout<<endl<<"Enter The your Count :- ";
    cin>>cnt;

    p=(int*)malloc(cnt*sizeof(int));

    cout<<endl<<"Enter the "<<cnt<<" Element :- ";
    for(int i=0;i<cnt;i++)
    {
        cin>>*(p+i);
    }

    cout<<endl<<"Display the Element";
    for(int i=0;i<cnt;i++)
    {
        cout<<setw(5)<<*(p+i);
    }
    free(p);
    return 0;

}
*/
///---for the same task you can use the new and delete as hown below,
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int *p,cnt;

    cout<<endl<<"Enter The your Count :- ";
    cin>>cnt;

    p=new int [cnt];

    cout<<endl<<"Enter the "<<cnt<<" Element :- ";
    for(int i=0;i<cnt;i++)
    {
        cin>>*(p+i);
    }

    cout<<endl<<"Display the Element";
    for(int i=0;i<cnt;i++)
    {
        cout<<setw(5)<<*(p+i);
    }
    delete(p);
    return 0;

}
*/
///===================================================================================================///
///------------using void pointer--------------------------------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x=12;
    char ch='s';
    float ft=5.65;
    double db=56.2314;

    void *gp;
    gp=&x;
    cout<<endl<<" Value of x using gp :- "<<*(int*)gp;

    gp=&ch;
    cout<<endl<<" Value of ch using gp :- "<<*(char*)gp;

    gp=&ft;
    cout<<endl<<" Value of ft using gp :- "<<*(float*)gp;

    gp=&db;
    cout<<endl<<" Value of db using gp :- "<<*(double*)gp;

    return 0;
}
*/
///=======================================================================================================///
///----------------------constant pointer----------------------------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x=10;             /// Here cp is constant pointer - means it will points towards same location
                          /// which can not be modified, you are allowed to change the value stored in the
                          /// location where the pointer is pointing.

    int* const cp=&x;//

    cout<<endl<<"value of x is :- "<<*cp;

//    int y=100;
//    cp=&y;                       /// here you show error
//    cout<<endl<<"value of y is :- "<<*cp;

    x=200;
    cout<<endl<<"value of x is :- "<<*cp;

    *cp=400;
    cout<<endl<<"value of x is :- "<<*cp;

    return 0;

}
*/
///====================================================================================================///
///----------------------(pointer to constant)--------------------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x=10;            /// Here cp is now pointer to constant :- means it will points towards any location
    int const *ch=&x;    /// of correct type. but when it points, the modification using pointer variable
                        /// is not allowed, i.e. when it points, it behaves as constant. and
                        /// therefore it is known as pointer to constant

    cout<<endl<<"value of x is :- "<<*ch;

    x=500;//note you can change the value using identifier but not using pointer variable.
//    *ch=1000; ///here you show error
    cout<<endl<<"value of x is :- "<<*ch;

    int y=200;
    ch=&y;
    cout<<endl<<"value of y is :- "<<*ch;

    y=300;//note you can change the value using identifier but not using pointer variable.
   // *ch=900;//here you also show error
    cout<<endl<<"value of y is :- "<<*ch;

    return 0;

}
*/
///========================================================================================================///
///----------------------combination of both above type---------------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x=20;
    int const * const cp=&x;
    cout<<endl<<"value of x is :- "<<*cp;

    x=200;
    *cp=600;//error
    cout<<endl<<"value of x is :- "<<*cp;

//    int y=100;
//    cp=&y;      ///error
//    cout<<endl<<"value of y is :- "<<*cp;

    *cp=400;//error
}
*/
///=======================================================================================================///
///-------------------function (inline function)----------------------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
inline int squrt(int x)
{
    return x*x;
}
int main()
{
    int no;
    cout<<endl<<"Enter the any no:- ";
    cin>>no;

    int ans=squrt(no);
    cout<<endl<<"Squre is :- "<<ans;

    return 0;
}
*/
///====================================================================================================///
///-------------------function call by passing default argument --------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
void Si(int p,float r=6.45, int n=3)
{
    float Si=(p*r*n)/100;
    cout<<endl<<"Simple Interest :- "<<Si;
}
int main()
{
    int p,n; /// here we calculate simple intrest
    float r;

    cout<<endl<<"Enter The Pa and NoY :- ";
    cin>>p>>n;

    cout<<endl<<"Enter the intrest :- ";
    cin>>r;

    Si(p,r,n);

    Si(p,r);

    Si(p);

    Si(p,n);

    return 0;
}
*/
///================================================================================================///
///---------------(reference veriable and call by reference using reference veriable)-------///
///----------------------------(alise)----------------------------------------------------///
/*
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;
    cout<<endl<<"x:- "<<x<<"\t y:- "<<y;

    x=100;
    cout<<endl<<"x:- "<<x<<"\t y:- "<<y;

    y=500;
    cout<<endl<<"x:- "<<x<<"\t y:- "<<y;

    return 0;
}
*/
///========================================================================================///
///-------------(call by value)-----------------------------------------------------------///
/*
#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout<<endl<<"Enter the value of x and y :- ";
    cin>>x>>y;

    cout<<endl<<"before interchange x :- "<<x<<"\t y:- "<<y;
    swap(x,y);
    cout<<endl<<"After interchange x :- "<<x<<"\t y:- "<<y;
}
*/
///========================================================================================///
///-------------(call by reference)-----------------------------------------------------------///
/*
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y;
    cout<<endl<<"Enter the value of x and y :- ";
    cin>>x>>y;

    cout<<endl<<"before interchange x :- "<<x<<"\t y:- "<<y;
    swap(&x,&y);
    cout<<endl<<"After interchange x :- "<<x<<"\t y:- "<<y;
    return 0;
}
*/
///========================================================================================///
///-------------(call by reference using reference veriable)-----------------------------------------------------------///
/*
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout<<endl<<"Enter the value of x and y :- ";
    cin>>x>>y;

    cout<<endl<<"before interchange x :- "<<x<<"\t y:- "<<y;
    swap(x,y);
    cout<<endl<<"After interchange x :- "<<x<<"\t y:- "<<y;
    return 0;
}
*/
///=========================================================================================///
///-------------------passing const argument-----------------------------------------------///
/*
#include<iostream>
using namespace std;
#include<iomanip>
void displaydata(const int y[])
{
    cout<<endl<<"The print Element are :- ";
    for(int i=0;i<5;i++)
    {
        cout<<setw(6)<<y[i];
//        y[i]=y[i]+100;///error: assignment of read-only location
    }
}
int main()
{
    int x[]={11,22,33,44,55};
    displaydata(x);

    cout<<endl<<"The Element are :- ";
    for(int i=0;i<5;i++)
    {
        cout<<setw(6)<<x[i];
    }
    return 0;

}
*/
///==========================================================================================///
///--------------------------function overloading-------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
void area(float r)
{
    float area=3.142*r*r;
    cout<<endl<<"Area is :- "<<area;
}
void area(float l,float w)
{
    float area=l*w;
    cout<<endl<<"Area of rectangular :- "<<area;

}
void area (float h,int b)
{
    float area=1/2*h*b;
    cout<<endl<<"Area of traingle :- "<<area;

}
int main()
{
    float red;
    cout<<endl<<"Enter the Reduis :- ";
    cin>>red;
    area(red);

    float len,wid;
    cout<<endl<<"Enter the Len and wid of rect:- ";
    cin>>len>>wid;
    area(len,wid);

    float hig;
    int bas;
    cout<<endl<<"Enter the hight and base of tringle:- ";
    cin>>hig>>bas;
    area(hig,bas);
}
*/
///==================================================================================///
///------------------------prime number--------------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int no,flg=0;
    cout<<endl<<"Enter Any No :- ";
    cin>>no;
    for(int i=2;i<=no/2;i++)
    {
       flg=0;
       if(no%i==0)
       {
           flg=1;
           break;
       }
    }
    if(flg==0)
    {
        cout<<"Its prime no :- "<<no;
    }
    else
    {
        cout<<"Its not prime no :- "<<no;
    }
}
*/
///=============================================================================///
///-------------------Armstrong No---------------------------------------------///
/*
#include<iostream>
using namespace std;
int main()
{
    int no,cnt=0,ans=0;
    cout<<endl<<"Enter Any No :- ";
    cin>>no;
    int temp=no;
    while(no!=0)
    {
        cnt++;
        no=no/10;
    }
    cout<<endl<<"Count is :- "<<cnt;

    no=temp;
    while(no!=0)
    {
        int rem=no%10;
        int fact=1;
        for(int i=1;i<=cnt;i++)
        {
            fact=fact*rem;
        }
        ans=ans+fact;
        no=no/10;
    }
    no=temp;
    if(no==ans)
    {
        cout<<endl<<"its No is Armstrong no";
    }
    else
    {
        cout<<endl<<"its No is not Armstrong no";
    }
    return 0;
}
*/
///======================================================================================///
///--------------perfect no------------------------------------------------------------///
/*
#include<iostream>
using namespace std;
int main()
{
    int no,sum=0;
    cout<<endl<<"Enter the Ayn no :- ";
    cin>>no;

    for(int i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==no)
    {
         cout<<endl<<"Number is perfect number";
    }
    else
    {
         cout<<endl<<"Number is not perfect number";
    }
    return 0;
}
*/
///============================================================================================///
///---------------------Strong Number--------------------------------------------------------///
/*
#include<iostream>
using namespace std;
int main()
{
    int no,sum=0;
    cout<<endl<<"Enter Any No :- ";
    cin>>no;
    int temp=no;

    while(no!=0)
    {
        int rem=no%10;
        int fact=1;
        for(int i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        no=no/10;
    }
    no=temp;
    if(sum==no)
    {
         cout<<endl<<"Number is strong number";
    }
    else
    {
         cout<<endl<<"Number is not strong number";
    }
}
*/
///==============================================================================================///
///--------------------------palindrome no------------------------------------------------------///
/*
#include<iostream>
using namespace std;
int main()
{
    int no,rev=0;
    cout<<endl<<"Enter any no :- ";
    cin>>no;
    int temp=no;
    while(no!=0)
    {
        int rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    no=temp;
    if(no==rev)
    {
        cout<<endl<<"Number is palindrome";
    }
    else
    {
        cout<<endl<<"Number is not palindrome";
    }
    return 0;
}
*/
///======================================================================================================///
///--------------------
/*
#include<iostream>
using namespace std;
int fact(int no)
{
    if(no==0)
    {
        return 1;
    }
    else
    {
        return (no*fact(no-1));
    }
}
int main ()
{
    int no;
    cout<<endl<<"Enter Any No :- ";
    cin>>no;
    int ans=fact(no);
    cout<<endl<<"Factorial is :- "<<ans;

}
*/
///========================================================================================================///
/*
#include<iostream>
using namespace std;
int main()
{
    int no,sum=0;
    cout<<endl<<"Enter Any no :- ";
    cin>>no;
     for(int i=1;i<(no-1/2);i++)
     {
         sum=sum+i+i;
     }
     if(sum==no)
     {
         cout<<endl<<"Number is Triangular ";
     }
     else
     {
         cout<<endl<<"Number is not Triangular ";
     }
}
*/
///=================================================================================================///
///-----------4.CPP Program to Check Abundant Number-----------------------------------------------////
/*
#include<iostream>
using namespace std;
int main()
{
    int no,sum=0;
    cout<<endl<<"Enter Any No :- ";
    cin>>no;
    int temp=no;
    for(int i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum>no)
    {
        cout<<endl<<"Its Abundant number";
    }
    else
    {
        cout<<endl<<"Its not Abundant number";
    }
}
*/
///==================================================================================================///
///----------------5.CPP Program to Check Amicable Number-------------------------------------------///
/*
#include<iostream>
using namespace std;
int main()
{
    int n1,sum1=0,sum2=0;
    cout<<endl<<"Enter The first Any no :- ";
    cin>>n1;
    for(int i=1;i<=(n1/2);i++)
    {
        if(n1%i==0)
        {
            sum1=sum1+i;
        }
    }
    int n2;
    cout<<endl<<"Enter The Second Any no :- ";
    cin>>n2;
    for(int j=1;j<=(n2/2);j++)
    {
        if(n2%j==0)
        {
            sum2=sum2+j;
        }
    }
    if(sum1==n2 && sum2==n1)
    {
        cout<<endl<<"Its is Amicable Number";
    }
    else
    {
         cout<<endl<<"Its is not Amicable Number";
    }
    return 0;
}
*/
///=========================================================================================================///
///-----------6.CPP Program to Check Automorphic Number----------------------------------------------------///
/*
#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<endl<<"Enter The Any No :- ";
    cin>>no;

    int ans=no*no;
    cout<<endl<<"Ans is  :- "<<ans;


}
*/
///=========================================================================================================///
///-----------------7.CPP Program to Condense a Number-----------------------------------------------------///
/*
#include<iostream>
using namespace std;
int main()
{
    int no,ans=0,ans1=0,ans2=0;
    cout<<endl<<"Enter The Any No:- ";
    cin>>no;

    while(no!=0)
    {
        int rem=no%10;
        ans=ans+rem;
        no=no/10;
    }
    cout<<endl<<"Ans is :- "<<ans;
    while(ans!=0)
    {
        int rem=ans%10;
        ans1=ans1+rem;
        ans=ans/10;
    }
    cout<<endl<<"Ans is :- "<<ans1;
    while(ans1!=0)
    {
        int rem=ans1%10;
        ans2=ans2+rem;
        ans1=ans1/10;
    }
    cout<<endl<<"Condense no is :- "<<ans2;
}
*/
///==========================================================================================================///
///--------------------------Disarium number----------------------------------------------------------------///
//*
#include<iostream>
using namespace std;
int main()
{
    int no,rem,rev=0,cnt=0;
    cout<<endl<<"Enter Any Number :- ";
    cin>>no;

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        cnt++;
        no=no/10;
    }
     cout<<endl<<"Count is :- "<<cnt;
     int sum=0;
     while(rev!=0)
     {
         cout<<endl<<"rev NO :- "<<rev;
         rem=rev%10;
         for(int i=0;i<cnt;i++)
         {
             sum=sum+(rem*(cnt-i));
         }
         rev=rev/10;
     }
     cout<<endl<<"Sum is :- "<<sum;
     return 0;
}































