/*
#include <iostream>
using namespace std;
class Student
{
private:
    char nm[50];
    int id;        /// its is data member
    float ssc;
    float hsc;
public:
    void input()
    {

    }                  ///Its is member function
    void display()
    {

    }
};
int main()
{
    Student s;///here no need to write class keyword cause its bydefault

    cout<<endl<<"Enter The Name,id,ssc and hsc:- ";///error msg display:-we can not Access private member using .(dot) operater directly
    cin>>s.nm>>s.id>>s.ssc>>s.hsc;

    cout<<endl<<"Name :- "<<s.nm<<"\t Id :- "<<s.id<<"\t ssc:- "<<s.ssc<<"\t Hsc :- "<<s.hsc;

    return 0;
}
*/
///===============================================================================================///
/*
#include <iostream>
using namespace std;
class Student
{
private:
    char nm[50];
    int id;
    float ssc;
    float hsc;
public:
    void input()
    {
        cout<<endl<<"Enter The Name,id,ssc and hsc:- ";
        cin>>nm>>id>>ssc>>hsc;
    }
    void display()
    {
        cout<<endl<<"Name :- "<<nm<<"\t Id :- "<<id<<"\t ssc:- "<<ssc<<"\t Hsc :- "<<hsc;
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
///=================================================================================================================///
///---------------------using with and without public keyword------------------------------------------------------///
/*
#include<iostream>
using namespace std;
class Student
{
public:
    char nm[50];
    int id;
    float ssc;
    float hsc;
};
int main()
{
    Student s;
    cout<<endl<<"Enter The Name,id,ssc and hsc:- ";
    cin>>s.nm>>s.id>>s.ssc>>s.hsc;

    cout<<endl<<"Name :- "<<s.nm<<"Id :- "<<s.id<<"ssc:- "<<s.ssc<<"Hsc :- "<<s.hsc;
    return 0;
}
*/
///-----------------------------without public keyword---------------------------------------------///
/*
#include<iostream>
using namespace std;
class Student
{
    char nm[50];///here we not use public keyword bydefault its is private
    int id;
    float ssc;
    float hsc;
};
int main()
{
    Student s;
    cout<<endl<<"Enter The Name,id,ssc and hsc:- ";
    cin>>s.nm>>s.id>>s.ssc>>s.hsc;///error;- cause we not access private date member using .(dot)operater directly

    cout<<endl<<"Name :- "<<s.nm<<"Id :- "<<s.id<<"ssc:- "<<s.ssc<<"Hsc :- "<<s.hsc;
    return 0;
}
*/
///======================================================================================================///
///--------------we can write multiple veriable---------------------------------------------------------///
/*
#include<iostream>
using namespace std;
class Student
{
    char nm[50];///here private key is bydefault
    int id;
    float ssc;
    float hsc;

public:
    void input()
    {
        cout<<endl<<"Enter The Name,id,ssc and Hsc :- ";
        cin>>nm>>id>>ssc>>hsc;
    }
    void display()
    {
        cout<<endl<<"Name :- "<<nm<<"\t Id :- "<<id<<"\t ssc:- "<<ssc<<"\t Hsc :- "<<hsc;
    }
};
int main()
{
    Student s,s1,s2;
    s.input();
    s.display();

    s1.input();
    s1.display();

    s2.input();
    s2.display();

    return 0;

}
*/
///=========================================================================///
///-----------
/*
#include<iostream>
using namespace std;
class Bascket
{
private:
    int icode[4];
    float pr[4];

public:
    void input()
    {
       // cout<<endl<<"Enter THe code And price"<<endl;
        for(int i=0;i<4;i++)
        {
            cout<<endl<<"Enter The code :- "<<endl;
            cin>>icode[i];

            cout<<endl<<"Enter The Price :- "<<endl;
            cin>>pr[i];
        }
    }
    void display()
    {
        cout<<endl<<"Bascket Information :- "<<endl;
        for(int i=0;i<4;i++)
        {
            cout<<endl<<icode[i]<<" ----> "<<pr[i];
        }
    }
};
int main()
{
    Bascket b,b1;
    cout<<endl<<"Enter The First Bascket Data :-  "<<endl;
    b.input();
    b.display();

    cout<<endl<<"Enter The Second Bascket Data :-  "<<endl;
    b1.input();
    b1.display();

    return 0;
}
*/
///================================================================================///
///--------------------Defining the Member function private-----------------------///
/*
#include<iostream>
using namespace std;
class Student
{
private:
    int id[3];
    float per[3];

    float tot_percentage()
    {
        float tot=0;
        for(int i=0;i<3;i++)
        {
            tot=tot+per[i];
        }
        return tot;
    }
public:
    void input()
    {
        for(int i=0;i<3;i++)
        {
            cout<<endl<<"Enter The Id:- "<<endl;
            cin>>id[i];

            cout<<endl<<"Enter The Percentage:- "<<endl;
            cin>>per[i];
        }
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            cout<<endl<<id[i]<<" ----> "<<per[i];
        }
        cout<<endl<<"Total Percentage :- "<<tot_percentage();
    }

};
int main()
{
    Student s,s1;
    cout<<endl<<"Enter the data of First Student :- "<<endl;
    s.input();
    s.display();

    cout<<endl<<"Enter the data of Second Student :- "<<endl;
    s1.input();
    s1.display();

    return 0;
}
*/
///=================================================================================================================///
///Enter the information of student which includes roll no, registration no, marks in five subjects and display
///he is pass or fail, if pass then find the total and percentage.
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
private:
    int regno;
    int rollno;
    int marks[5];
public:
    void input()
    {
        cout<<endl<<"Enter the Reg NO And Roll No :- ";
        cin>>regno>>rollno;

        cout<<endl<<"Enter the marks of five student :- ";
        for(int i=0;i<5;i++)
        {
            cout<<endl<<"Sub "<< i+1<<" :";
            cin>>marks[i];
        }
    }
    void output()
    {
        cout<<endl<<"Registation no :- "<<regno<<"\t Roll NO :- "<<rollno;
        for(int i=0;i<5;i++)
        {
            cout<<setw(6)<<marks[i];
        }
    }
};
int main()
{
    Student s;
    s.input();
    s.output();

    Student S1;
    S1.input();
    S1.output();

    return 0;
}
*/
///===================================================================================///
///------------------Define the Array of object--------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
private:
    int regno;
    int rollno;
    int marks[5];
public:
    void input()
    {
        cout<<endl<<"Enter the Reg NO And Roll No :- ";
        cin>>regno>>rollno;

        cout<<endl<<"Enter the marks of five student :- ";
        for(int i=0;i<5;i++)
        {
            cout<<endl<<"Sub "<< i+1<<" :";
            cin>>marks[i];
        }
    }
    void output()
    {
        cout<<endl<<"Registation no :- "<<regno<<"\t Roll NO :- "<<rollno;
        for(int i=0;i<5;i++)
        {
            cout<<setw(6)<<marks[i];
        }
    }
};
int main()
{
    Student s[3];
    for(int i=0;i<3;i++)
    {
        s[i].input();
    }

    cout<<endl<<"*******Student Details**********"<<endl;
    for(int i=0;i<3;i++)
    {
        s[i].output();
    }
    return 0;
}
*/
///=================================================================================///
///---------Passing the argument to member function--------------------------------///
/*
#include<iostream>
using namespace std;
class React
{
    int lenght;
    int weidth;
public:
    int set(int a,int b)
    {
        lenght=a;
        weidth=b;
    }
    void printdetails()
    {
        cout<<endl<<"Length :- "<<lenght<<"\t Width:- "<<weidth;
    }
    int getarea()
    {
        int area=lenght*weidth;
        return area;
    }
};
int main()
{
    React rob;
    int len,wid;
    cout<<endl<<"Enter The lenght And Width ";
    cin>>len>>wid;

    rob.set(len,wid);
    rob.printdetails();
    int temp=rob.getarea();
    cout<<endl<<"Area of rectagular :- "<<temp;
}
*/
///==================================================================================///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
private:
    int rno;
    int regno;
    int marks[4];
    int pass;
    int total;
    float per;

public:
    void input()
    {
        pass=1;
        total=0;
        per=0.0;
        cout<<endl<<"Enter The Roll No :- ";
        cin>>rno;

        cout<<endl<<"Enter The Registration No:- ";
        cin>>regno;

        cout<<endl<<"Enter the marks of four sub :-";
        for(int i=0;i<4;i++)
        {
            cout<<endl<<"Sub "<<i+1<<" : ";
            cin>>marks[i];
            if(marks[i]<35)
            {
                pass=0;
                total=0;
                per=0;
            }
            else if(pass!=0)
            {
                total=total+marks[i];
            }
            per=total/4;
        }
    }
    void display()
    {
        cout<<endl<<"Registration no :- "<<regno<<"\t Roll No :- "<<rno;
        for(int i=0;i<4;i++)
        {
            cout<<setw(6)<<marks[i];
        }
        cout<<endl<<"Total :- "<<total<<"\t Percentage :- "<<per<<endl;
    }
};
int main()
{
    Student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        s[i].input();
    }
    cout<<endl<<"***** Student Details ******";
    for(i=0;i<3;i++)
    {
        s[i].display();
    }
    return 0;
}
*/
///===============================================================================///

/*
#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
private:
    int rno;
    int regno;
    int marks[4];
    int pass;
    int tot;
    float per;

public:
    void input (int mrno,int mregno,int mmarks[4])
    {
        rno=mrno;
        regno=mregno;
        pass=1;
        tot=0;
        per=0.0;
        for(int i=0;i<4;i++)
        {
            marks[i]=mmarks[i];
            if(marks[i]<35)
            {
                pass=0;
                tot=0;
                per=0;
            }
            else if(pass!=0)
            {
                tot=tot+marks[i];
            }
        }
         per=tot/4;
    }
    void display()
    {
        cout<<endl<<"Registration no :- "<<regno<<"\t Roll No :- "<<rno;
        for(int i=0;i<4;i++)
        {
            cout<<setw(6)<<marks[i];
        }
        cout<<endl<<"Total :- "<<tot<<"\t Percentage :- "<<per;
    }
    int getpass()
    {
        return pass;
    }
};
int main()
{
    Student s[3];
    int i,j;
    int mrno,mregno,mmarks[4];
    for(i=0;i<3;i++)
    {
        cout<<endl<<"Enter The Roll No :- ";
        cin>>mrno;

        cout<<endl<<"Enter The Registration no :- ";
        cin>>mregno;

        cout<<endl<<"Enter the four sub marks :- ";
        for(j=0;j<4;j++)
        {
            cin>>mmarks[j];
        }
        s[i].input(mrno,mregno,mmarks);
    }

    cout<<endl<<"***** Student Details ***** ";
    for(i=0;i<3;i++)
    {
        s[i].display();
    }

    cout<<endl<<"**** List of Pass Student ****";
    for(i=0;i<3;i++)
    {
        if(s[i].getpass()!=0)
        {
            s[i].display();
        }
    }
}
*/
///================================================================================///
///-----------
/*
#include<iostream>
using namespace std;
class MyNumber
{
public:
    int no;
public:
    void Setvalue(int no)
    {
        this->no=no;
    }
    int getvalue()
    {
        return no;
    }
};
int main()
{
    MyNumber nob;
    int no;
    cout<<endl<<"Enter the Any Number:- ";
    cin>>no;
    nob.Setvalue(45);
    nob.getvalue();
    cout<<endl<<"Number Is "<<nob.getvalue();
    return 0;
}
*/
///=====================================================================================///
///---Now we add some functions(methods) to perform some operations on internal data
/*
#include<iostream>
using namespace std;
class Number
{
private:
    int no;
public:
    void setvalue(int no)
    {
        this->no=no;// here this-> referese to invoking object
    }
    int getvalue()
    {
        return no;
    }
    int revno()
    {
        int rev=0,tmp=no;
        while(tmp!=0)
        {
            rev=(rev*10)+tmp%10;
            tmp=tmp/10;
        }
        return rev;
    }
};
int main()
{
    Number n;
    int no;
    cout<<endl<<"Enter The Any Number:- ";
    cin>>no;
    n.setvalue(no);
    cout<<endl<<"Number is :-"<<n.getvalue();
    cout<<endl<<"Reverse of "<<n.getvalue()<<" is "<<n.revno();
    return 0;
}
*/
///================================================================================///
///-----Now we want to go for palindrome check - there are two ways, lets see..
///--------------way first------------------------------------
/*
#include<iostream>
using namespace std;
class Element
{
private :
    int no;
public:
    void setno(int no)
    {
        this->no=no;
    }
    int getvalue()
    {
        return no;
    }
    int revno()
    {
        int rev=0,tmp=no;
        while(tmp!=0)
        {
            rev=(rev*10)+tmp%10;
            tmp=tmp/10;
        }
        return rev;
    }
};
int main()
{
    Element e;
    int no;
    cout<<endl<<"Enter the any number :-";
    cin>>no;
    e.setno(no);
    cout<<endl<<"Number is :-"<<e.getvalue();
    cout<<endl<<"Reverse of "<<e.getvalue()<<" is "<<e.revno();

    if(e.getvalue()==e.revno())
    {
        cout<<endl<<"Number is palindrome";
    }
    else
    {
        cout<<endl<<"Number is Not palindrome";
    }
    return 0;
}
*/
///------------------Way second----------------------------------------///
/*
#include<iostream>
using namespace std;
class Number
{
private:
    int no;
public:
    void Setvalue(int no)
    {
        this->no=no;
    }
    int getvalue()
    {
        return no;
    }
    int revNumber()
    {
        int rev=0,tmp=no;
        while(tmp!=0)
        {
            rev=(rev*10)+tmp%10;
            tmp=tmp/10;
        }
        return rev;
    }
    int palindrome()
    {
        if(getvalue()==revNumber())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Number n;
    int no;
    cout<<endl<<"Enter The Any value :-";
    cin>>no;
    n.Setvalue(no);
    cout<<endl<<"Number is :-"<<n.getvalue();
    cout<<endl<<"Reverse of "<<n.getvalue()<<" is "<<n.revNumber();

    if(n.palindrome())
    {
        cout<<endl<<"No is palindrome";
    }
    else
    {
        cout<<endl<<"No is Not palindrome";
    }

}
*/
///===============================================================================///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class MyNumericArray
{
private:
	int x[6];
public:
	void input()
	{
	    cout<<endl<<"Enter the Array 6 Array Elemnt :- ";
	    for(int i=0;i<6;i++)
        {
            cin>>x[i];
        }
	}
	void display()
	{
	    cout<<endl<<"Array Element Array";
	    for(int i=0;i<6;i++)
        {
            cout<<setw(6)<<x[i];
        }
	}
	char search(int val)
	{
	    char res='n';
	    for(int i=0;i<6;i++)
        {
            if(x[i]==val)
            {
                res='y';
                break;
            }
        }
        return res;
	}
	int findMax()
	{
	    int max=0;
	    for(int i=0;i<6;i++)
        {
            if(max<x[i])
            {
                max=x[i];
            }
        }
        return max;
	}
	void sort()
	{
	    int tmp;
	    int t[6];
	    for(int i=0;i<6;i++)
        {
            t[i]=x[i];
        }
	    for(int i=0;i<6;i++)
        {
            for(int j=i+1;j<6;j++)
            {
                if(t[i]>t[j])
                {
                    tmp=t[i];
                    t[i]=t[j];
                    t[j]=tmp;
                }
            }
        }
        cout<<endl<<"Sorted Array Is";
        for(int i=0;i<6;i++)
        {
            cout<<setw(6)<<t[i];
        }
	}
	void printReverse()
	{
	    cout<<endl<<"Reverse Array:";
	    for(int i=0;i<6;i++)
        {
            cout<<setw(6)<<x[5-i];
        }
	}
};
int main()
{
    MyNumericArray n;
    int no;

    n.input();
    n.display();

    cout<<endl<<"Enter the any value to be serched:- ";
    cin>>no;
    //char ans=n.search(no);//you can write also
    if(n.search(no)=='y')//if(ans=='y')
    {
        cout<<"Number is present in Array";
    }
    else
    {
        cout<<"Number is Not present";
    }

    cout<<endl<<"Max no is :"<<n.findMax();

    n.sort();

    n.printReverse();
    return 0;
}
*/
///=============================================================================///
///------
/*
#include<iostream>
using namespace std;
class MyCharArray
{
private:
    char str[60];
public:
    void set(char *ch)
	{
	    int i;
	    for(i=0;*(ch+i)!='\0';i++)
        {
            str[i]=*(ch+i);
        }
        str[i]='\0';
	}
	void show()
	{
        cout<<endl<<"String is:-"<<str;
	}
	char* toUpper()
	{
         for(int i=0;str[i]!='\0';i++)
         {
             if(str[i]>=97 && str[i]<=122)
             {
                str[i]=str[i]-32;
             }
         }
         return str;
	}
	int isPalindrome()
	{
	    char rev[50];
	    int flg=0,i,j;
	    for(i=0;str[i]!='\0';i++);
	    for(i--,j=0;i>=0;i--,j++)
        {
            rev[j]=str[i];
        }
        rev[j]='\0';
        return (isMatching(rev));
	}
	void toLower()
	{
	    for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]>=65&&str[i]<=90)
            {
                str[i]=str[i]+32;
            }
        }
        cout<<endl<<"Lower String Is: "<<str;
	}
	int isMatching(char *s)
	{
	    int i,j,flg=1;
	    for(i=0;str[i]!='\0';i++);
	    for(j=0;*(s+i)!='\0';j++);

	    if(i==j)
        {
            for(int j=0;j<=i;j++)
            {
                if(str[i]!=s[i])
                {
                   flg=0;
                   break;
                }
            }
        }
        return flg;
	}
};
int main()
{
    MyCharArray c;

    c.set("HELLO GOOD MORNING EVRY ONE");

    c.show();

    cout<<endl<<"Upper String is :- "<<c.toUpper();

    if(c.isPalindrome())
    {
        cout<<endl<<"String is palindrome";
    }
    else
    {
        cout<<"String is not palindrome";
    }

    c.toLower();
}
*/
///========================================================================================///
/// passing the variable as a argument to function and returning a single value from the member function
/*
#include<iostream>
using namespace std;
class Integer
{
private:
    int data;
public:
    void set(int val)
    {
        data=val;
    }
    int get()
    {
        return data;
    }
};
int main()
{
    Integer n;
    int no;
    cout<<endl<<"Enter Any No: ";
    cin>>no;
    n.set(no);// here you pass direct value means n.set(10); no need to input throught user
    cout<<endl<<"Value is: "<<n.get();

    return 0;
}
*/
///=====================================================================================///
/// passing the Array as a argument to function and returning it from the member function
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Array
{
private:
    int data[5];
public:
    void in(int t[])
    {
        for(int i=0;i<5;i++)
        {
            data[i]=t[i];
        }
    }
    int* out()
    {
        return data;
    }
};
int main()
{
    Array a;
    int x[5]={11,95,45,78,32};
    a.in(x);

    int *p=a.out();
    cout<<endl<<"Array Element Are: ";
    for(int i=0;i<5;i++)
    {
        cout<<setw(6)<<*(p+i);// you can also write this  cout<<setw(6)<<p[i];
    }
    return 0;
}
*/
///==================================================================================///
///-passing the pointer as a argument to function and returning it from the member function
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Pointer
{
private :
    int *data;
    int cnt;
public:
    void setter(int *x,int t)
    {
        cnt=t;                   // no need to write
        data=new int(cnt);       // data=new int(t);
        for(int i=0;i<cnt;i++)   // for(int i=0;i<t;i++)
        {                        // {
            *(data+i)=*(x+i);    //    *(data+i)=*(x+i);
        }                        // }
    }
    int* getter()
    {
        return data;
    }
};
int main()
{
    int *x,n;

    cout<<endl<<"Enter Your Count: ";
    cin>>n;

    x=new int(n);
    cout<<endl<<"Enter The "<<n<<" Element: ";
    for(int i=0;i<n;i++)
    {
        cin>>*(x+i);
    }
    Pointer p;
    p.setter(x,n);

    int *q=p.getter();
    cout<<endl<<"Element Are: ";
    for(int i=0;i<n;i++)
    {
        cout<<setw(6)<<*(q+i);
    }
    return 0;
}
*/
///=====================================================================================///
///----------Assigning the individual element and returning the same-------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Myarray
{
    int data[5];
    int cnt;
public:
    void set(int n,int c)
    {
        cnt=c;
        data[cnt]=n;
    }
    int get(int k)
    {
         return data[k];
    }
};
int main()
{
    Myarray ar;
    int no,cnt=0;

    cout<<endl<<"Enter The five Element: ";
    for(int i=0;i<5;i++)
    {
        cin>>no;
        ar.set(no,cnt);
        cnt++;
    }

    cout<<endl<<"Element Are: ";
    for(int i=0;i<5;i++)
    {
        cout<<setw(6)<<ar.get(i);
    }
    return 0;
}
*/
///=====================================================================================///
///-
/*
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class Match
{
private:
    char str[50];
public:
    void input()
    {
        cout<<endl<<"Enter The String: ";
        cin.getline(str,50);
    }
    void display()
    {
        cout<<endl<<"String Is: "<<str;
    }
    char matching(Match ob)
    {
        return (strcmp(str,ob.str));
    }
};
int main()
{
    Match s1;
    s1.input();
    s1.display();

    Match s2;
    s2.input();
    s2.display();

    if(!s1.matching(s2))
    {
        cout<<endl<<"String is Matching";
    }
    else
    {
        cout<<endl<<"String is not Matching";
    }
    return 0;
}
*/
///=================================================================================================///
///-------Create one class Time and create two different instances of Time class.and just add them
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
private:
    int hours;
    int mins;
    int secs;
public:
    void setTime()
    {
        cout<<endl<<"Enter The Hours ,mins and secs: ";
        cin>>hours;
        cin>>mins;
        cin>>secs;
    }
    void setTime(int h ,int m,int s)
    {
        hours=h;
        mins=m;
        secs=s;
    }
    void show()
    {
        cout<<setw(6)<<hours<<" : "<<mins<<" : "<<secs;
    }
    void AddTime(Time ob)
    {
        Time tmp;
        tmp.secs=secs+ob.secs;

        tmp.mins=mins+ob.mins+tmp.secs/60;
        tmp.secs=tmp.secs%60;

        tmp.hours=hours+ob.hours+tmp.mins/60;
        tmp.mins=tmp.mins%60;

        cout<<endl<<"Final Time: ";
        tmp.show();
    }
};
int main()
{
    Time t1,t2;
    t1.setTime();
    t2.setTime(4,50,40);

    cout<<endl<<"First Time : ";
    t1.show();

    cout<<endl<<"Second Time : ";
    t2.show();

    t1.AddTime(t2);

    return 0;
}
*/
///===============================================================================///
///----------------Returning object from member function-------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
private:
    int hour;
    int mins;
    int sec;
public:
    void SetTime()
    {
        cout<<endl<<"Enter The Hour,min and Secs: ";
        cin>>hour;
        cin>>mins;
        cin>>sec;
    }
    void SetTime(int h,int m,int s)
    {
        hour=h;
        mins=m;
        sec=s;
    }
    void ShowTime()
    {
        cout<<endl<<hour<<" : "<<mins<<" :"<<sec;
    }
    Time AddTime(Time obj)
    {
        Time tmp;
        tmp.sec=sec+obj.sec;

        tmp.mins=mins+obj.mins+tmp.sec/60;
        tmp.sec=tmp.sec%60;

        tmp.hour=hour+obj.hour+tmp.mins/60;
        tmp.mins=tmp.mins%60;

        return tmp;
    }
};
int main()
{
    Time t1,t2;
    t1.SetTime();
    t2.SetTime(5,46,37);

    cout<<endl<<"T1: ";
    t1.ShowTime();

    cout<<endl<<"T2: ";
    t2.ShowTime();

    Time t3=t1.AddTime(t2);
    cout<<endl<<"Final Time: ";
    t3.ShowTime();

    return 0;
}
*/
///============================================================================///
///--------------Defining AddTime() outside of class--------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
private:
    int hour;
    int mins;
    int sec;
public:
    void SetTime()
    {
        cout<<endl<<"Enter The Hour,min and Secs: ";
        cin>>hour;
        cin>>mins;
        cin>>sec;
    }
    void SetTime(int h,int m,int s)
    {
        hour=h;
        mins=m;
        sec=s;
    }
    void ShowTime()
    {
        cout<<endl<<hour<<":"<<mins<<":"<<sec;
    }
    Time AddTime(Time obj);

};
Time Time:: AddTime(Time obj)
{
    Time tmp;
    tmp.sec=sec+obj.sec;

    tmp.mins=mins+obj.mins+tmp.sec/60;
    tmp.sec=tmp.sec%60;

    tmp.hour=hour+obj.hour+tmp.mins/60;
    tmp.mins=tmp.mins%60;

    return tmp;
}
int main()
{
    Time t1,t2;
    t1.SetTime();
    t2.SetTime(5,46,37);

    cout<<endl<<"T1: ";
    t1.ShowTime();

    cout<<endl<<"T2: ";
    t2.ShowTime();

    Time t3=t1.AddTime(t2);
    cout<<endl<<"Final Time:";
    t3.ShowTime();

    return 0;
}
*/
///=============================================================================///
///---------WAP to add two complex Numbers-------------------------------------///
/*
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    float img;
public:
    void Input()
    {
        cout<<endl<<"Enetr The Complex No: ";
        cout<<endl<<"Enter The real No: ";
        cin>>real;

        cout<<endl<<"Enter The Imag No: ";
        cin>>img;
    }
    void Output()
    {
        cout<<endl<<real<<"+i"<<img;
    }
    Complex AddComplex(Complex ob)
    {
        Complex temp;
        temp.real=real+ob.real;
        temp.img=img+ob.img;

        return temp;
    }
};
int main()
{
    Complex c1,c2;
    c1.Input();
    c2.Input();

    c1.Output();
    c2.Output();

    Complex c3=c1.AddComplex(c2);
    cout<<endl<<"Complex Addtion IS: ";
    c3.Output();

    return 0;
}
*/
///==============================================================================///
///------Defining addComplex() outside of class---------------------------------///
/*
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    float img;
public:
    void Input()
    {
        cout<<endl<<"Enetr The Complex No: ";
        cout<<endl<<"Enter The real No: ";
        cin>>real;

        cout<<endl<<"Enter The Imag No: ";
        cin>>img;
    }
    void Output()
    {
        cout<<endl<<real<<"+i"<<img;
    }
    Complex AddComplex(Complex ob);//Define the function
};
Complex Complex :: AddComplex(Complex ob)
    {
        Complex temp;
        temp.real=real+ob.real;
        temp.img=img+ob.img;

        return temp;
    }
int main()
{
    Complex c1,c2;
    c1.Input();
    c2.Input();

    c1.Output();
    c2.Output();

    Complex c3=c1.AddComplex(c2);
    cout<<endl<<"Complex Addtion IS: ";
    c3.Output();

    return 0;
}
*/
///==========================================================================///
///=================Friend Function=========================================///
/*
#include<iostream>
using namespace std;
class FriendFun
{
private:
    int x;
    int y;
public:
    void input()
    {
        cout<<endl<<"Enter the value of x and y: ";
        cin>>x>>y;
    }
    friend void showdata(FriendFun t);
};
void showdata(FriendFun t)
{
    cout<<endl<<"X="<<t.x<<"y="<<t.y;
}
int main()
{
    FriendFun f;
    f.input();
    showdata(f);

    return 0;
}
*/
///===========================================================================///
///-----------Defining member function in private section--------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Item
{
    int x[5];
    int findmax()
    {
        int max=0;
        for(int i=0;i<5;i++)
        {
            if(x[i]>max)
            {
                max=x[i];
            }
        }
        return max;
    }
public:
    void in()
    {
        cout<<endl<<"Enter the Array Element: ";
        for(int i=0;i<5;i++)
        {
            cin>>x[i];
        }
    }
    void out()
    {
        for(int i=0;i<5;i++)
        {
            cout<<setw(6)<<x[i];
        }
        cout<<endl<<"Max no is : "<<findmax();
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
///-----------------Another Program----------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Item
{
    int id;
    float price;
    float getprice()
    {
        return price;
    }
public:
    void set()
    {
        cout<<endl<<"enter the id: ";
        cin>>id;

        cout<<endl<<"enter the price of Item :";
        cin>>price;
    }
    void get()
    {
        cout<<endl<<"id: "<<id<<"\t Price: "<<price;
    }
    float getitemprice()
    {
        return getprice();
    }
};
int main()
{
    Item x[5];
    cout<<endl<<"Enter the Item: ";
    for(int i=0;i<5;i++)
    {
        x[i].set();
    }

    cout<<endl<<"Item Details: ";
    for(int i=0;i<5;i++)
    {
        x[i].get();
    }

    float tot=0.0;
    for(int i=0;i<5;i++)
    {
        tot=tot+x[i].getitemprice();
    }

    cout<<endl<<"Total Bill: "<<tot;

    return 0;
}
*/
///==============================================================================///
///-------------Using Static keyword--------------------------------------------///
/*
#include<iostream>
using namespace std;
class Item
{
    int id;
    int price;
    static int tot;
public:
    void in()
    {
       cout<<endl<<"Enter the id: ";
       cin>>id;

       cout<<endl<<"Enter the Price: ";
       cin>>price;
       tot=tot+price;
    }
    void out()
    {
       cout<<endl<<"Id: "<<id<<"\t Price: "<<price;
    }
    void totalbill()
    {
        cout<<endl<<"\t Total Bill:"<<tot;
    }
};
int Item::tot;
int main()
{
    Item x[3];
    cout<<endl<<"Enter the Item: ";
    for(int i=0;i<3;i++)
    {
        x[i].in();
    }
    cout<<endl<<"Item details: ";
    for(int i=0;i<3;i++)
    {
        x[i].out();
    }
    x[1].totalbill();
}
*/
///===========================================================================///
///============Static method(member function)===============================///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
    int rno;
    int mrks;
    static int tot;
public:
    void set()
    {
        cout<<endl<<"Enter the roll No: ";
        cin>>rno;

        cout<<endl<<"Enter the marks of Student: ";
        cin>>mrks;

        tot=tot+mrks;
    }
    void out()
    {
        cout<<endl<<"Roll no: "<<rno<<"\t Marks: "<<mrks;
    }
    static void tot_mrks()
    {
        cout<<endl<<"Total Marks: "<<tot;
    }
};
int Student::tot=2000;///value is optional
int main()
{

    Student::tot_mrks();
    Student s[5];
    cout<<endl<<"Enter Student Info: ";
    for(int i=0;i<5;i++)
    {
        s[i].set();
    }

    cout<<endl<<"Student Details: ";
    for(int i=0;i<5;i++)
    {
        s[i].out();
    }
   // s[3].tot_mrks();
    Student::tot_mrks();
}
*/
///==============================================================================///
///--------
/*
#include<iostream>
using namespace std;
class Item
{
public:
    static int no;
    static int number(int no)
    {
        return no%10;
    }
};
int Item::no=90;
int main()
{
    cout<<Item::no;

    int n;
    cout<<endl<<"Enter any no: ";
    cin>>n;

    if(Item::number(n)%2==0)
    {
        cout<<endl<<"No is even:";
    }
    else
    {
        cout<<endl<<"No is not even:";
    }
}
*/
///=============================================================================///
///-------Passing the array as Argument----------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
    int ar[5];
public:
    void in()
    {
        cout<<endl<<"Enter The 5 Array Element: ";
        for(int i=0;i<5;i++)
        {
            cin>>ar[i];
        }
    }
    void in(int t[])
    {
        for(int i=0;i<5;i++)
        {
            ar[i]=t[i];
        }
    }
    void out()
    {
        cout<<endl<<"Array Elment: ";
        for(int i=0;i<5;i++)
        {
            cout<<setw(6)<<ar[i];
        }
    }
};
int main()
{
    Student ob;
    ob.in();
    ob.out();

    int x[5]={11,85,96,75,12};
    Student ob1;
    ob1.in(x);
    ob1.out();

    return 0;
}
*/
///==============================================================================///
///----------Passing the Pointer as an Argument---------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
    int *p;
    int cnt;
public:
    void in()
    {
        cout<<endl<<"Enter The Your Count: ";
        cin>>cnt;

        p=new int[cnt];

        cout<<endl<<"Enter The"<<cnt<<" Element: ";
        for(int i=0;i<cnt;i++)
        {
            cin>>*(p+i);
        }
    }
    void in(int cn)
    {
        cnt=cn;
        p=new int[cnt];
        cout<<endl<<"Enter the "<<cnt<<" Element: ";
        for(int i=0;i<cnt;i++)
        {
            cin>>*(p+i);
        }
    }
    void out()
    {
        cout<<endl<<"Pointer Element: ";
        for(int i=0;i<cnt;i++)
        {
            cout<<setw(6)<<*(p+i);
        }
    }
};
int main()
{
    Student s;
    s.in();
    s.out();

    Student s1;
    cout<<endl<<"Enter Yout Count:";
    int cn;
    cin>>cn;
    s1.in(cn);
    s1.out();

    return 0;
}
*/
///=============================================================================///
///==============PAssing Two onject as Argument================================///
/*
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    void in()
    {
        cout<<endl<<"Enter a real No: ";
        cin>>real;

        cout<<endl<<"Enter a img No: ";
        cin>>img;
    }
    void out()
    {
        cout<<endl<<real<<" +i"<<img;
    }
    void getcomplex(Complex a,Complex b)
    {
        real=a.real+b.real;
        img=a.img+b.img;
    }
};
int main()
{
    Complex c1,c2,c3;

    c1.in();
    c2.in();

    c3.getcomplex(c1,c2);
    cout<<endl<<"c1 Complex: ";c1.out();

    cout<<endl<<"c2 Complex: ";c2.out();

    cout<<endl<<"c3 Complex: ";c3.out();
    return 0;
}
*/
///==========================================================================///
/*
#include<iostream>
using namespace std;
class Person
{
    int uid;
    int age;
public:
    void in()
    {
       cout<<endl<<"Enter the uid of Person: ";
       cin>>uid;

       cout<<endl<<"Enter the age of Person: ";
       cin>>age;
    }
    void out()
    {
        cout<<endl<<"UID: "<<uid<<"\t Age: "<<age;
    }
    Person findelder(Person a)
    {
        if(a.age>age)
        {
            return a;
        }
        else
        {
            return *this;
        }
    }
};
int main()
{
    Person p1,p2,p3;
    p1.in();
    p1.out();

    p2.in();
    p2.out();

    p3=p1.findelder(p2);
    cout<<endl<<"Elder Person details: ";
    p3.out();

    return 0;

}
*/
///============================================================================///
///---------// Using friend function:=========================================///
/*
#include<iostream>
using namespace std;
class Number
{
private:
    int x;
    float y;
public:
    void input()
    {
        cout<<endl<<"Enter the X and Y: ";
        cin>>x>>y;
    }
    friend void frienddisplay(Number tmp);
};
void frienddisplay(Number tmp)
{
   cout<<endl<<"x: "<<tmp.x<<"\t y: "<<tmp.y;
}
int main()
{
    Number s1;
    s1.input();

    frienddisplay(s1);
    return 0;
}
*/
///=============================================================================///
///----------find max between Two Attributes-----------------------------------///
/*
#include<iostream>
using namespace std;
class Number
{
private:
    int x;
    int y;
public:
    void in()
    {
        cout<<endl<<"Enter the x and y value: ";
        cin>>x>>y;
    }
    void out()
    {
        cout<<endl<<"x: "<<x<<"\t y: "<<y;
    }
    friend void findmax(Number tmp);
};
void findmax(Number t)
{
    if(t.x>t.y)
    {
        cout<<endl<<t.x<<" is max number";
    }
    else
    {
        cout<<endl<<t.y<<" is max number";
    }
}
int main()
{
    Number s1;
    s1.in();
    s1.out();

    findmax(s1);
}
*/
///==========================================================================///
/*
#include <iostream>
#include <iomanip>
using namespace std;
class Item
{
	int id;
	float price;
	static int tot;
	public:
	void input()
	{
		cout<<endl<<"Enter the id: ";
		cin>>id;

		cout<<endl<<"Enter the price: ";
		cin>>price;
		tot=tot+price;
	}
	void display()
	{
		cout<<endl<<"ID: "<<id<<"\t Price: "<<price;
	}
	static void displaytotal();
	void Item::displaytotal()
    {
        cout<<endl<<"Total Bill: "<<tot;
    }
};
int Item::tot=100;  // It is optional to assign a value
int main()
{
	Item::displaytotal();
	// decl.
	Item ar[5];

	// input
	cout<<endl<<"Enter the price of five items: ";
	for(int i=0;i<5;i++)
	{
		ar[i].input();
	}

	// display
	cout<<endl<<"------ Item List ------\n";
	for(int i=0;i<5;i++)
	{
		ar[i].display();
	}

	ar[1].displaytotal();
	Item::displaytotal();
	return 0;
}
*/
///=============================================================================///
///====================Construct And Destructer================================///
///--------------------Default Constructer-------------------------------------///
/*
#include<iostream>
#include<iostream>
using namespace std;
class Demo
{
    int x;
    float y;
    double z;
public:
    Demo()
    {
        x=10;
        y=20.3;
        z=90.65;
    }
    void in()
    {
        cout<<endl<<"Enter the x,y and z";
        cin>>x>>y>>z;
    }
    void display()
    {
        cout<<endl<<x<<endl<<y<<endl<<z;
    }

};
int main()
{
    Demo ob1;
    ob1.display();

    ob1.in();
    ob1.display();

    return 0;
}
*/
///==================================================================================///
///------------Define Constructer Ouside of class----------------------------------///
/*
#include<iostream>
using namespace std;
class Student
{
private:
    int x;
    int y;
public:
    void in()
    {
        cout<<endl<<"Enter the value of X and Y: ";
        cin>>x>>y;
    }
    void display()
    {
        cout<<x<<endl<<y;
    }
    Student();
};
Student::Student()
{
    x=90;
    y=80;
}
int main()
{
   Student s;
   s.display();

   s.in();
   s.display();

   return 0;
}
*/
///===========================================================================///
///----------Parameterised Constructer---------------------------------------///
/*
#include<iostream>
using namespace std;
class Demo
{
private:
    int x;
    float y;
    double z;
public:
    Demo()
    {
        cout<<endl<<"Default Constructer: ";
        x=10;
        y=23.6;
        z=89.6;
    }
    Demo(int a)//a is formal argument
    {
        cout<<endl<<"Parameterised Constructer 1"<<endl;
        x=a;
        y=a;//here you are assign one formal Argument to all data member.
        z=a;
    }
    Demo(int a,float t)
    {
        cout<<endl<<"Parameterised Constructer 2"<<endl;
        x=a;
        y=t;
        z=a;
    }
    Demo(int a,float t,double w)
    {
        cout<<endl<<"Parameterised Constructer 3"<<endl;
        x=a;
        y=t;
        z=w;
    }
    void out()
    {
        cout<<endl<<"x: "<<x<<"\t y: "<<y<<"\t Z: "<<z;
    }
};
int  main()
{
    Demo s;
    s.out();

    int a=11;
    float b=23.6;
    double c=56.96;

    Demo s1(a);
    s1.out();

    Demo s2(11,23.6);
    s2.out();

    Demo s3(11,23.6,56.96);
    s3.out();

    return 0;
}
*/
///===============================================================================///
///------------------Copy Constructer-------------------------------------------///
/*
#include<iostream>
using namespace std;
class Demo
{
    int x;
    float y;
    double z;
public:
    Demo()
    {
        cout<<endl<<"Default Cons";
        x=96;
        y=23.6;
        z=85.65;
    }
    Demo(int a,float b)
    {
       cout<<endl<<"Parameterised Constructer1"<<endl;
       x=a;
       y=b;
    }
    Demo(Demo &t)
    {
        cout<<endl<<"Copy Constructer";
        x=t.x;
        y=t.y;
        z=t.z;
    }
    Demo(int a,float b,double c)
    {
        cout<<endl<<"Parameterised Constructer 2: ";
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<endl<<"x: "<<x<<"\t y: "<<y<<"\t Z: "<<z;
    }
};
int main()
{
    Demo ob1;
    ob1.display();

    Demo ob2(10,15.2);
    ob2.display();

    Demo ob3(ob1);
    ob3.display();

    Demo ob4();
    ob3.display();

    return 0;

}
*/
///=============================================================================///
/*
#include<iostream>
using namespace std;
class Time
{
    int hh;
    int mm;
    int ss;
public:
    Time()
    {
        cout<<endl<<"default cons";
        hh=2;
        mm=30;
        ss=45;
    }
    Time(int x)
    {
        cout<<endl<<"Para cons 1";
        hh=x;
    }
    void get()
    {
        cout<<endl<<"hh: "<<hh<<"\t mm: "<<mm<<"\t ss"<<ss;
    }
    Time(int s,int w)
    {
        cout<<endl<<"para cons";
        hh=s;
        mm=w;

    }
    Time(int a,int b=30,int c=10)
    {
        cout<<endl<<"para Cons 2";
        hh=a;
        mm=b;
        ss=c;
    }
    Time(Time &ob)
    {
        cout<<endl<<"Copy Cons";
        hh=ob.hh;
        mm=ob.mm;
        ss=ob.ss;
    }
};
int main()
{
    Time t1;
    t1.get();

    Time t2(3);
    t2.get();

    Time t3(5);
    t3.get();

    Time t4(5,56);
    t4.get();

    Time t5(t3);
    t5.get();

    return 0;
}
*/
///============================================================================///
///---------------------Dyanamic constructer----------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Demo
{
    int *p;
    int ec;
public:
    Demo()///default dyamic constructer
    {
        p=new int[6];
        ec=6;
        cout<<endl<<"Enter the"<<ec<<" no";
        for(int i=0;i<6;i++)
        {
            cin>>*(p+i);
        }
    }
    Demo(int cnt)
    {
        p=new int[cnt];
        ec=cnt;
        cout<<endl<<"Enter the "<<ec<<" time element";
        for(int i=0;i<ec;i++)
        {
            cin>>*(p+i);
        }
    }
    void display()
    {
        cout<<endl<<"Element are";
        for(int i=0;i<ec;i++)
        {
            cout<<setw(6)<<*(p+i);
        }
    }
};
int main()
{
    Demo ob1;
    ob1.display();

    int cn;
    cout<<endl<<"Enter your count";
    cin>>cn;
    Demo ob2(cn);
    ob2.display();


    return 0;

}
*/
///=============================================================================///
///=======================destructer===========================================///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
public:
    Student()
    {
        cout<<endl<<"object is created";
    }
    ~Student()
    {
        cout<<endl<<"object is delete";
    }
};
int main()
{
    Student ob1;
}
*/
///=============================================================================///
///---------------Release the dynamic construter-------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Demo
{
    int *p;
    int ec;
public:
    Demo()
    {
        p=new int [5];
        ec=5;
        cout<<endl<<"Enter the "<<ec<<" Element: ";
        for(int i=0;i<5;i++)
        {
            cin>>*(p+i);
        }
    }
    void display()
    {
        cout<<endl<<"Element Are: ";
        for(int i=0;i<5;i++)
        {
            cout<<setw(6)<<*(p+i);
        }
    }
    ~Demo()
    {
        cout<<endl<<"Destructer call";
        delete p;
    }
};
int main()
{
    Demo ob1;
    ob1.display();

    return 0;
}
*/
///=============================================================================///
///-----------counting the number of object------------------------------------///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Demo
{
    static int cnt;
public:
    Demo()
    {
        cnt++;
        cout<<endl<<"object "<<cnt<<" is created";
    }
    ~Demo()
    {
        cout<<endl<<"object "<<cnt<<" is deleted";
        cnt--;
    }
};
int Demo::cnt;
int main()
{
    Demo ob1,ob2;
    {
        Demo ob3,ob4;
    }
    cout<<"End of Program";
    Demo ob5,ob6;

    return 0;
}
*/
///==============================================================================///
///===============Intialisation List=============================================///
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Sample
{
    const int x;
public:
    Sample():x(10)
    {
        ///constructer body is option in intialization list
    }
    Sample(int a):x(a)
    {
        ///constructer body is option in intialization list
    }
    void show()
    {
        cout<<endl<<"X: "<<x;
    }
};
int main()
{
    Sample ob1;
    ob1.show();

    int no;
    cout<<endl<<"Enter Any Number";
    cin>>no;

    Sample ob2(no);
    ob2.show();

    return 0;
}
*/
///==============================================================================///
/*
#include<iostream>
using namespace std;
class Student
{
    const int x;
public:
    Student():x(10)
    {
        cout<<endl<<"default Constructer x is "<<x;
    }
    Student(int a):x(a)
    {
        cout<<endl<<"Para Constructer x ix "<<x;
    }
};
int main()
{
   Student s;

   int no;
   cout<<endl<<"Enter any No: ";
   cin>>no;
   Student s1(no);

   return 0;
}
*/
///==============================================================================///
///---------you can use intialization list for multiple members-----------------///
/*
#include<iostream>
using namespace std;
class Demo
{
private:
    const int x;
    const float y;
    const double z;
public:
    Demo():z(30.25),x(20),y(10.5)
    {
        cout<<endl<<"Default Constructer";
    }
    Demo(int x,float y,double z):z(z),y(y),x(x)
    {
       cout<<endl<<"Para constructer 1";
    }
    Demo(int a,float b):y(b),x(a)
    {
       cout<<endl<<"Para Constructer 2";
    }
    void show()
    {
        cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
    }
};
int main()
{
    Demo s;
    s.show();

    int a;
    float b;
    double c;
    cout<<endl<<"Enter the value of a,b,c";
    cin>>a>>b>>c;

    Demo s2(a,b);
    s2.show();

    Demo s3(a,b,c);
    s3.show();

    return 0;

}
*/
///==============================================================================///
///=================Using Const object and const member Function================///
/*
#include<iostream>
using namespace std;
class Sample
{
    int x;
    float y;
public:
    Sample()
    {
        x=10;
        y=2.3;
    }
    Sample(int a,float b)
    {
        x=a;
        y=b;
    }
    void modify()
    {
        y=x=111;
    }
    void show()const//declaration of const function
    {
        cout<<endl<<"x="<<x<<"\t y="<<y;
    }
};
int main()
{
    const Sample ob1;
    ob1.show();
    //ob1.modify();///we can not call normal function throught const object only we call const function

    const Sample ob2(45,32.6);
    ob2.show();

    Sample ob3;
    ob3.modify();
    ob3.show();//we can call const function throught normal object

    return 0;
}
*/
///==============================================================================///
/*
#include<iostream>
using namespace std;
class MyClass
{
  int data;
  public:
      MyClass(int value):data(value)
      {

      }
      void setData(int value)
      {
            data=value;
      }
      int getData() const
      {
          return data;
      }
      void display()
      {
          cout<<endl<<"Data (modifiable): "<< data << endl;
      }
      void show()const
      {
           cout << "Data (non-modifiable): " << data << endl;
      }
};
int main()
{
    MyClass ob1(10);

    ob1.setData(20);
    ob1.display();

    const MyClass ob2(30);

    ob2.getData();

    cout << "Data from const object: " << ob2.getData() << endl;

    ob2.show();
}
*/
///==============================================================================///
///======================Operater Overloading===================================///
/*
#include<iostream>
using namespace std;
class Test
{
public:
    void operator -()
    {
        cout<<endl<<"Operater overLoading";
    }
};
int main()
{
    int x=10,y;
    y=-x;

    cout<<endl<<"Y: "<<y;

    Test t1;
    -t1;

    return 0;
}
*/
///============================================================================///
///--------------Performing unary operation-----------------------------------///
/*
#include<iostream>
using namespace std;
class Number
{
private:
    int x;
    float y;
public:
    Number()
    {
        x=1;
        y=2.1;
    }
    Number(int a,float b)
    {
        x=a;
        y=b;
    }
    void in()
    {
        cout<<endl<<"Enter value of x and y";
        cin>>x>>y;
    }
    void out()
    {
        cout<<endl<<"x: "<<x<<"y: "<<y;
    }
    void operator -()
    {
        cout<<endl<<"In operator -()function";
        x=-x;
        y=-y;
    }
};
int main()
{
    Number n1;
    n1.out();

    Number n2(5,6.4);
    n2.out();

    -n1;
    n1.out();
}
*/
///=============================================================================///
///-------Define the operater overloading outside of class---------------------///
/*
#include<iostream>
class Number
{
    int x;
    float y;
public:
    Number()
    {
        x=1;
        y=2.1;
    }
    Number(int a,float b)
    {
        x=a;
        y=b;
    }
    void out()
    {
        std::cout<<std::endl<<"x: "<<x<<"y: "<<y;
    }
    void operator-();
};
void Number::operator-()
{
    std::cout<<std::endl<<"in operator overloading-()function";
    x=x*10;
    y=y*10;
}
int main()
{
    Number t1;
    t1.out();

    Number t2(5,6.3);
    t2.out();

    -t2;
    t2.out();

    return 0;
}
*/
///=============================================================================///
///---------------Overloading unary operator as a friend-----------------------///
/*
#include<iostream>
using namespace std;
class Number
{
private:
	int x;
	float y;
public:
	Number()
	{
		x=1;
		y=1.1;
	}
	Number(int a, float b)
	{
		x=a;
		y=b;
	}
	void in()
	{
		cout<<endl<<"Enter the values of x and y: ";
		cin>>x>>y;
	}
	void out()
	{
		cout<<endl<<"x="<<x<<"\t y="<<y;
	}
	friend void operator -(Number &);
};
void operator-(Number& t)
{
    cout<<endl<<"In operater -() function";
    t.x=-t.x;
    t.y=-t.y;
}
int main()
{
    Number n1;
    n1.out();

    Number n2(10,23.6);
    n2.out();

    -n2;
    n2.out();

    return 0;
}
*/
///==============================================================================///
///-----------Overloading Binary operator to join two strings-------------------///
/*
#include<iostream>
#include<string.h>
using namespace std;
class Mystring
{
    char *s;
public:
    int length;
    Mystring()
    {
        length=0;
        s=NULL;
    }
    Mystring(char *t)
    {
        length=strlen(t);
        s=new char[length+1];
        strcpy(s,t);
    }
    char*getstring()
    {
        return s;
    }
    Mystring operator+(Mystring t)
    {
        Mystring tmp;
        tmp.length=strlen(s)+strlen(t.s);
        tmp.s=new char [length+1];
        strcpy(tmp.s,s);
        strcat(tmp.s,t.s);
        return tmp;
    }
};
int main()
{
    Mystring str1("Good day");
    Mystring str2(" How are you");

    cout<<endl<<"string 1"<<str1.getstring();
    cout<<endl<<"string 2"<<str2.getstring();

    Mystring str3;
    str3=str1+str2;//internally call is str1.operator+(str2);
    cout<<endl<<"String 3: "<<str3.getstring();

    cout<<endl<<"Length of str1: "<< str1.length;
	cout<<endl<<"Length of str2: "<< str2.length;
	cout<<endl<<"Length of str3: "<< str3.length;


}
*/
///===========================================================================///
///-------Binary operator overloading using friend---------------------------///
/*
#include<iostream>
#include<string.h>
using namespace std;
class Mystring
{
    char* s;
public:
    int length;
    Mystring()
    {
        length=0;
        s=NULL;
    }
    Mystring (char *t)
    {
        length=strlen(t);
        s=new char [length+1];
        strcpy(s,t);
    }
    char* getstring()
    {
        return s;
    }
    friend Mystring operator+(Mystring str1,Mystring str2);
};
Mystring operator+(Mystring str1,Mystring str2)
{
    Mystring tmp;
    tmp.length=strlen(str1.s)+strlen(str2.s);
    tmp.s=new char[tmp.length+1];
    strcpy(tmp.s,str1.s);
    strcat(tmp.s,str2.s);

    return tmp;
}
int main()
{
    Mystring str1("good day");
	Mystring str2("how are you");

	cout<<endl<<"String 1: "<<str1.getstring();
	cout<<endl<<"String 2: "<<str2.getstring();

    Mystring str3;
	str3=str1+str2;     // indirectly called as operator+(str1, str2)
	cout<<endl<<"String 3: "<<str3.getstring();

	cout<<endl<<"Length of str1: "<< str1.length;
	cout<<endl<<"Length of str2: "<< str2.length;
	cout<<endl<<"Length of str3: "<< str3.length;

}
*/
///============================================================================///
/*
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    void incomplex()
    {
        cout<<endl<<"Enter the real part value";
        cin>>real;
        cout<<endl<<"Enter the img part value";
        cin>>img;
    }
    void out()
    {
        cout<<endl<<real<<"+j"<<img;
    }
    Complex operator+(Complex c2)
    {
        Complex tmp;
        tmp.real=real+c2.real;
        tmp.img=img+c2.img;

        return tmp;
    }
};
int main()
{
    Complex c1,c2,c3;

	c1.incomplex();
	c2.incomplex();

	c3=c1+c2;	// Internally called as c1.operator+(c2)

	cout<<endl<<"C1: ";
	c1.out();
	cout<<endl<<"C2: ";
	c2.out();
	cout<<endl<<"C3: ";
    c3.out();

    return 0;
}
*/
///=============================================================================///
///-------lets add two complex numbers using overloading + operator------------///
/*
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    void incomplex()
    {
        cout<<endl<<"Enter the real part value: ";
        cin>>real;
        cout<<endl<<"Enter the img part value: ";
        cin>>img;
    }
    void out()
    {
        cout<<endl<<real<<"+j"<<img;
    }
    friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex tmp;
    tmp.real=c1.real+c2.real;
    tmp.img=c1.img+c2.img;

    return tmp;
}
int main()
{
    Complex c1,c2,c3;

	c1.incomplex();
	c2.incomplex();

	c3=c1+c2;	// Internally called as operator+(c1,c2)

	cout<<endl<<"C1: ";
	c1.out();
	cout<<endl<<"C2: ";
	c2.out();
	cout<<endl<<"C3: ";
    c3.out();

    return 0;
}
*/
///============================================================================///
///-----lets add two complex numbers using friend function overloading + operator
/*
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    void incomplex()
    {
        cout<<endl<<"Enter the real part value: ";
        cin>>real;
        cout<<endl<<"Enter the img part value: ";
        cin>>img;
    }
    void out()
    {
        cout<<endl<<real<<"+j"<<img;
    }
    friend Complex operator+(int a,Complex c2);
};
Complex operator+(int a,Complex c2)
{
    Complex tmp;
    tmp.real=a+c2.real;
    tmp.img=a+c2.img;

    return tmp;
}
int main()
{
    Complex c1,c2,c3;

	c1.incomplex();
	c2.incomplex();

	c3=10+c2;	// Internally called as operator+(10,c2)
                ////here not going object going int value 10 means operator+(int,object)
	cout<<endl<<"C1: ";
	c1.out();
	cout<<endl<<"C2: ";
	c2.out();
	cout<<endl<<"C3: ";
    c3.out();

    return 0;
}
*/
///==============================================================================///
///------------------Type Conversion---------------------------------------------///
/*
#include<iostream>
using namespace std;
class Square
{
private:
    int side;
public:
    Square()
    {
        side=0;
    }
    Square(int a)
    {
        side=a;
    }
    int area()
    {
        return (side*side);
    }
    friend class React;
};
class React
{
private:
    int l;
    int b;
public:
    React()
    {
        l=b=0;
    }
    React(Square t)
    {
        l=b=t.side;
    }
    int area()
    {
        return (l*b);
    }
};
int main()
{
    int n=5;
    Square s1(n);// base type converted into class type
    cout<<endl<<"Area of Square: "<<s1.area();// class type converted into base type

    React r1(s1);// class type to another class type
    cout<<endl<<"Area of React :"<<r1.area();
}
*/
///=============================================================================///
///=====================INHERITANCE============================================///
/*
///---------Note that private members are not inheritable.----------------///

#include<iostream>
using namespace std;
class A
{
private:
    double x;
public:
    void in()
    {
        cout<<endl<<"Enter the value of x";
        cin>>x;
    }
    void out()
    {
        cout<<endl<<"X is: "<<x;
    }
};
class B
{
private:
    int y;
public:
    void set()
    {
        cout<<endl<<"Enter the value of y: ";
        cin>>y;
    }
    void show()
    {
        cout<<endl<<"y is: "<<y;
    }
};
int main()
{
    A ob1;
    ob1.in();
    ob1.out();

    B ob2;
    ob2.set();
    ob2.show();

    return 0;
}
*/
///================================================================================================///
///--Single Inheritance:  public Visibility - calling inherited functions in a nested manner------///
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    void in()
    {
        cout<<endl<<"Enter the value of x";
        cin>>x;
    }
    void out()
    {
        cout<<endl<<"X is: "<<x;
    }
};
class B:public A//visibility public bacause we can access the parent/base/super class
{               // property through deriaved/child/sub class using .(dot)operater
private:
    int y;
public:
    void set()
    {
        //in();
        cout<<endl<<"Enter the value of y: ";
        cin>>y;
    }
    void show()
    {
        //out();
        cout<<endl<<"y is: "<<y;
    }
};
int main()
{
    B ob1;
    ob1.set();
    ob1.show();

    ob1.in();//we can direct access
    ob1.out();

}
*/
///=============================================================================///
///--------- Single Inheritance: Private---------------------------------------///
/*
#include<iostream>
using namespace std;
class A
{
private:
    double x;
public:
    void in()
    {
        cout<<endl<<"Enter the value of x: ";
        cin>>x;
    }
    void out()
    {
        cout<<endl<<"X is: "<<x;
    }
};
class B:private A
{
private:
    int y;
public:
    void set()
    {
        in();
        cout<<endl<<"Enter the value of y: ";
        cin>>y;
    }
    void show()
    {
        out();
        cout<<endl<<"y is: "<<y;
    }
};
int main()
{
    B ob1;
    ob1.set();
    ob1.show();

    return 0;
}
*/
///==============================================================================///
///-------
/*
#include<iostream>
using namespace std;
class Person
{
private:
    char nm[50];
    int age;
public:
    void indata()
    {
        cout<<endl<<"Enter the name of person: ";
        cin.getline(nm,50);
        cout<<endl<<"Enter the age of person: ";
        cin>>age;
    }
    void outdata()
    {
        cout<<endl<<"Name: "<<nm<<"\t Age: "<<age;
    }
};
class Student:public Person
{
private:
    float sper;
    float hper;
public:
     void input()
     {
         indata();
         cout<<endl<<"Enter the SSC Percentage: ";
         cin>>sper;
         cout<<endl<<"Enter the HSC Percentage: ";
         cin>>hper;
     }
     void output()
     {
         outdata();
         cout<<endl<<"SSC Marks: "<<sper<<"\t HSC Marks: "<<hper;
     }
};
int main()
{
    Student ob1;
    ob1.input();
    ob1.output();
}
*/
///==============================================================================///
///-----------Using method overloading in inheritance--------------------------///
/*
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
    char nm[50];
    int age;
public:
    void in()
    {
        cout<<endl<<"Enter the name of person: ";
        cin.getline(nm,50);
        cout<<endl<<"Enter the age of person: ";
        cin>>age;
    }
    void in(char s[],int a)
    {
        strcpy(nm,s);
        age=a;
    }
    void out()
    {
        cout<<endl<<"Name: "<<nm<<"\t Age: "<<age;
    }
};
class Student:private Person
{
private:
    float sper;
    float hper;
public:
    void set()
    {
        in();
        cout<<endl<<"Enter the SSC Percentage: ";
        cin>>sper;
        cout<<endl<<"Enter the HSC Percentage: ";
        cin>>hper;
    }
    void set(char s[],int a,float p1,float p2)
    {
        in(s,a);
        sper=p1;
        hper=p2;
    }
    void show()
    {
        out();
        cout<<endl<<"Percentage: HSC: "<<hper<<"\t SSC: "<<sper;
    }
};
int main()
{
    Student s1;
    s1.set();
    s1.show();

    Student s2;
    s2.set("kiran",23,80.80,78.36);
    s2.show();
}
*/
///==============================================================================///
///--------------Using constructors in inheritance-----------------------------///
/*
#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<endl<<"Default Constructer A";
    }
};
class B:private A
{
public:
    B()
    {
        cout<<endl<<"Default Constructer B";
    }
};
int main()
{
    B ob1;
    return 0;
}
*/
///==============================================================================///
///-----------
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    A()
    {
        cout<<endl<<"default constructer A:";
    }
    A(int a)
    {
        x=a;
        cout<<endl<<"Para constructer A";
    }
};
class B:private A
{
private:
    int y;
public:
    B()
    {
        cout<<endl<<"Dafault constructer B";
    }
    B(int a,int b):A(a)
    {
        y=a;
        cout<<endl<<"Para Constructer B";
    }
};
int main()
{
    B s1;
    cout<<endl<<"======================"<<endl;
    int a,b;
    cout<<endl<<"Enter the value of a and b: ";
    cin>>a>>b;
    B s2(a,b);
}
*/
///=============================================================================///
///-------
/*
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
    char nm[50];
    int age;
public:
    Person()
    {
        strcpy(nm,"kiran");
        age=21;
        cout<<endl<<"default cons person:";
    }
    Person(char s[],int a)
    {
        strcpy(s,nm);
        age=a;
        cout<<endl<<"para cons person:";
    }
    void in()
    {
        cout<<endl<<"Enter the name of person: ";
        cin.getline(nm,50);
        cout<<endl<<"Enter the age of person: ";
        cin>>age;
    }
    void in(char s[],int a)
    {
        strcpy(s,nm);
        age=a;
    }
    void out()
    {
        cout<<endl<<"Name: "<<nm<<" Age: "<<age;
    }
};
class Student:private Person
{
private:
    float sper;
    float hper;
public:
    Student()
    {
        sper=70.23;
        hper=60.23;
        cout<<endl<<"default cons stduent:";
    }
    Student(char s[],int a,float p1,float p2):Person(s,a)
    {
        sper=p1;
        hper=p2;
        cout<<endl<<"Para cons student:";
    }
    void set()
    {
        in();
        cout<<endl<<"Enter the SSC Percentage: ";
		cin>>sper;
		cout<<endl<<"Enter the HSC Percentage: ";
		cin>>hper;
    }
    void set(char s[],int a,float p1,float p2)
    {
        in(s,a);
        sper=p1;
        hper=p2;
    }
    void show()
    {
        out();
        cout<<endl<<"SSC Percentage: "<<sper<<"HSC Percentage: "<<hper;
    }
};
int main()
{
    Student s1;
    s1.set();
    s1.show();

    Student s2("saurabh",23,90.00,80.00);
    s2.set();
    s2.show();

    Student s3;
    s3.set("aryan",25,96.00,45.6);
    s3.show();
}
*/
///===============================================================================///
///============================ METHODE OVERRIDING===============================///
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    A()
    {
        x=10;
    }
    void display()
    {
        cout<<endl<<"X is: "<<x;
    }
};
class B:private A
{
private:
    int y;
public:
    B()
    {
        y=20;
    }
    void display()
    {
        //display();code is executed properly but here you don't show any output
        cout<<endl<<"Y is: "<<y;
    }
};
int main()
{
    B ob1;
    ob1.display();

    return 0;
}
*/
///============================================================================///
///---------------How to access overriden methode(two ways)-------------------///
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    A()
    {
        x=10;
    }
    void display()
    {
        cout<<endl<<"X is: "<<x;
    }
};
class B:public A //visibility is public
{
private:
    int y;
public:
    B()
    {
        y=20;
    }
    void display()
    {
        //A::display();//first ways of accessing overriden method
        cout<<endl<<"Y is: "<<y;
    }
};
int main()
{
    B ob1;
    ob1.display();

    ob1.A::display();//second way//this way work at the time of visibility is public
    return 0;
}
*/
///=============================================================================///
///------------Access Overriden data member------------------------------------///
/*
#include<iostream>
using namespace std;
class Demo
{

public:
    int a;
    void show()
    {
        cout<<endl<<"Demo a: "<<a;
    }
};
class Test:public Demo
{
private:
    int a;
public:
    Test()
    {
        a=10;
        Demo::a=100;
    }
    void show()
    {
        Demo::show();
        cout<<endl<<"Test a: "<<a;
    }
};
int main()
{
    Test ob;
    ob.show();
    ob.Demo::show();
}
*/
///==============================================================================///
///=====================Visibility modifier "Protected"=========================///
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
protected:
    void input()
    {
        cout<<endl<<"Enter the value of x: ";
        cin>>x;
    }
public:
    void output()
    {
        cout<<endl<<"X is: "<<x;
    }
};
class B:public A
{
private:
    int y;
public:
    void in()
    {
        input();
        cout<<endl<<"Enter the value of y: ";
        cin>>y;
    }
    void out()
    {
        output();
        cout<<endl<<"X is: "<<y;
    }
};
int main()
{
    B ob;
    ob.in();
    ob.out();

    //ob.input();//this function not directly accessible from outside of class because visibility is "protected"
    ob.output();
}
*/
///=============================================================================///
///=====================Multilevel Inheritance==================================///
/*
#include<iostream>
using namespace std;
class Person
{
    int uid;
    char nm[50];
    int age;
public:
    void in()
    {
        cout<<endl<<"Enter the Uid of person: ";
        cin>>uid;

        cout<<endl<<"Enter the name of person: ";
        fflush(stdin);
        cin.getline(nm,50);

        cout<<endl<<"Enter the age of person: ";
        cin>>age;

    }
    void out()
    {
        cout<<endl<<"Name: "<<nm<<"\t Age: "<<age<<"\t Uid:"<<uid;
    }
};
class Student:public Person
{
private:
    int phy;
    int chem;
    int maths;
public:
    void indata()
    {
        in();
        cout<<endl<<"Enter the Marks of Phy Subject: ";
        cin>>phy;

        cout<<endl<<"Enter the Marks of chem Subject: ";
        cin>>chem;

        cout<<endl<<"Enter the Marks of maths Subject: ";
        cin>>maths;
    }
    void outdata()
    {
        out();
        cout<<endl<<"Marks: PHY: "<<phy<<"\t CHEM: "<<chem<<"\t MATHS: "<<maths;
    }
protected:
    int getphy()
    {
        return phy;
    }
    int getchem()
    {
        return chem;
    }
    int getmaths()
    {
        return maths;
    }
};
class Result:private Student
{
private:
    char passflag;
public:
    void set()
    {

        indata();
        if(getphy()>=40&&getchem()>=40&&getmaths()>=40)
        {
            passflag='y';
        }
        else
        {
            passflag='n';
        }
    }
    void show()
    {
        outdata();
        if(passflag=='y')
        {
            cout<<endl<<"Student Result: PASS";
        }
        else
        {
            cout<<endl<<"Student Result: FAIL";

        }
    }
};
int main()
{
    Result ob;

    ob.set();
    ob.show();
}
*/
///======================================================================///
///===================MULTIPLE INHERITANCE==============================///
//
//      EXAM            SPORT
//        |               |
//        |               |
//        |               |
//        -----------------
//                |
//                |
//              RESULT
//
/*
#include<iostream>
using namespace std;
class Exam
{
private:
    int phy;
    int chem;
    int maths;
public:
    void in()
    {
        cout<<endl<<"Enter the marks of phy,chem and maths: ";
        cin>>phy>>chem>>maths;
    }
    void out()
    {
        cout<<endl<<"PHY: "<<phy<<"\t CHEM: "<<chem<<"\t MATHS: "<<maths;
    }
protected:
    int getphy()
    {
        return phy;
    }
    int getchem()
    {
        return chem;
    }
    int getmaths()
    {
        return maths;
    }
};
class Sport
{
    int point;
public:
    void input()
    {

        cout<<endl<<"Enter the Sport point: ";
        cin>>point;
    }
    void output()
    {
        cout<<endl<<"Points: "<<point;
    }
protected:
    int getpoint()
    {
        return point;
    }
};
class Result:protected Exam,public Sport
{
    char resultflg;
public:
    void setdata()
    {
        in();
        input();
        if(getphy()>=40&&getchem()>=40&&getmaths()>=40&&getpoint()>=5)
        {
            resultflg='y';
        }
        else
        {
            resultflg='n';
        }
    }
    void display()
    {
        out();
        output();
        if(resultflg=='y')
        {
            cout<<endl<<" Pass!!!!!!!!!!!!!!!!";
        }
        else
        {
            cout<<endl<<" Fail!!!!!!!!!!!!!!!!";
        }
    }
};
int main()
{
    Result ob;
    ob.setdata();
    ob.display();
    ob.input();

    return 0;
}
///Note that the class Exam and class Sport must not contain a function having same name
///if it contains the function with same name, then by inheritance multiple copies
///are present in the child class Result, which will results in Ambiguity error, when
///call that function using object of child.

///    You can avoid the Ambiguity Error, by using <base_class_Name>::

///-------------How to void ambigilty Error--------------------------------///

#include<iostream>
using namespace std;
class Exam
{
private:
    int phy;
    int chem;
    int maths;
public:
    void input()
    {
        cout<<endl<<"Enter the marks of phy,chem and maths: ";
        cin>>phy>>chem>>maths;
    }
    void out()
    {
        cout<<endl<<"PHY: "<<phy<<"\t CHEM: "<<chem<<"\t MATHS: "<<maths;
    }
protected:
    int getphy()
    {
        return phy;
    }
    int getchem()
    {
        return chem;
    }
    int getmaths()
    {
        return maths;
    }
};
class Sport
{
    int point;
public:
    void input()
    {

        cout<<endl<<"Enter the Sport point: ";
        cin>>point;
    }
    void output()
    {
        cout<<endl<<"Points: "<<point;
    }
protected:
    int getpoint()
    {
        return point;
    }
};
class Result:protected Exam,public Sport
{
    char resultflg;
public:
    void setdata()
    {
        //input();//here Ambiguity error occour because of two base(Exam and Sport class) class contain same name function and inheritend in child class
       // input();

        Eaxm::input();//using the base class name you can void ambiguilty error
        Sport::input();

        if(getphy()>=40&&getchem()>=40&&getmaths()>=40&&getpoint()>=5)
        {
            resultflg='y';
        }
        else
        {
            resultflg='n';
        }
    }
    void display()
    {
        out();
        output();
        if(resultflg=='y')
        {
            cout<<endl<<" Pass!!!!!!!!!!!!!!!!";
        }
        else
        {
            cout<<endl<<" Fail!!!!!!!!!!!!!!!!";
        }
    }
};
int main()
{
    Result ob;
    ob.setdata();
    ob.display();
    ob.input();

    return 0;
}
*/
///========================================================================================///
///================================HYBRID INHERITANCE=====================================///
//
//                            A
//                           [ ] getdata()
//                            |   putdata()
//                -------------------------
//                |                       |
//                |                       |      input()
//in()          B[ ]                     [ ] C   output()
//input()         |                       |      getdata()
//getdata()       |                       |      putdata()
//putdata()       -------------------------
//                            |
//                            |
//              in()         [ ]    input()
//              out()         D     output()
//              getdata()           getdata()
//              putdata()            putdata()




///---In this program ambiguilty error is occur beacause of two intermiddiate class(class B & C) inherited
///-------properties of class A
/*
#include<iostream>
using namespace std;
class A
{
private:
    int data;
public:
    void getdata()
    {
        cout<<endl<<"Enter the Data: ";
        cin>>data;
    }
    void putdata()
    {
        cout<<endl<<"Data: "<<data;
    }
};
class B:public A
{
private:
    int d1;
public:
    void in()
    {
        cout<<endl<<"Enter the d1: ";
        cin>>d1;
    }
    void out()
    {
        cout<<endl<<"D1: "<<d1;
    }
};
class C:public A
{
private:
    int d2;
public:
    void input()
    {
        cout<<endl<<"Enter the d2: ";
        cin>>d2;
    }
    void output()
    {
        cout<<endl<<"D2: "<<d2;
    }
};
class D:public B,public C
{
private:
    int d3;
public:
    void setdata()
    {
        getdata();
        in();
        input();
        cout<<endl<<"Enter the d3: ";
        cin>>d3;
    }
    void display()
    {
         putdata();
         out();
         output();
         cout<<endl<<"D3: "<<d3;
    }
};
int main()
{
    D ob;
    ob.setdata();
    ob.display();
}
*/
///--This will leades to ambiguilty error and can be avoided ambiguilty error using two different ways
///- 1.using <class_name>::
///- 2.using virtual base class

///=========================================================================================///
///-----1.using <class_name>::
/*
#include<iostream>
using namespace std;
class A
{
private:
    int data;
public:
    void getdata()
    {
        cout<<endl<<"Enter the Data: ";
        cin>>data;
    }
    void putdata()
    {
        cout<<endl<<"Data: "<<data;
    }
};
class B:public A
{
private:
    int d1;
public:
    void in()
    {
        cout<<endl<<"Enter the d1: ";
        cin>>d1;
    }
    void out()
    {
        cout<<endl<<"D1: "<<d1;
    }
};
class C:public A
{
private:
    int d2;
public:
    void input()
    {
        cout<<endl<<"Enter the d2: ";
        cin>>d2;
    }
    void output()
    {
        cout<<endl<<"D2: "<<d2;
    }
};
class D:public B,public C
{
private:
    int d3;
public:
    void setdata()
    {
        B::getdata();
        in();
        input();
        cout<<endl<<"Enter the d3: ";
        cin>>d3;
    }
    void display()
    {
         B::putdata();
         out();
         output();
         cout<<endl<<"D3: "<<d3;
    }
};
int main()
{
    D ob;
    ob.setdata();
    ob.display();
}
*/
///======================================================================================///
///-------2.using virtual base class----------------------------------------------------///
/*
#include<iostream>
using namespace std;
class A
{
private:
    int data;
public:
    void getdata()
    {
        cout<<endl<<"Enter the Data: ";
        cin>>data;
    }
    void putdata()
    {
        cout<<endl<<"Data: "<<data;
    }
};
class B:public virtual A//virtual public A -you can also write
{
private:
    int d1;
public:
    void in()
    {
        cout<<endl<<"Enter the d1: ";
        cin>>d1;
    }
    void out()
    {
        cout<<endl<<"D1: "<<d1;
    }
};
class C: virtual public A//public virtual A -you can also write
{
private:
    int d2;
public:
    void input()
    {
        cout<<endl<<"Enter the d2: ";
        cin>>d2;
    }
    void output()
    {
        cout<<endl<<"D2: "<<d2;
    }
};
class D:public B,public C
{
private:
    int d3;
public:
    void setdata()
    {
        getdata();
        in();
        input();
        cout<<endl<<"Enter the d3: ";
        cin>>d3;
    }
    void display()
    {
         putdata();
         out();
         output();
         cout<<endl<<"D3: "<<d3;
    }
};
int main()
{
    D ob;
    ob.setdata();
    ob.display();
}
*/
///====================================================================================///
///------------------pointer to Object------------------------------------------------///
/*
#include<iostream>
using namespace std;
class Item
{
    int id;
    float pr;
public:
    void in()
    {
        cout<<endl<<"Enter the Id and price of Item: ";
        cin>>id>>pr;
    }
    void out()
    {
        cout<<endl<<"Id: "<<id<<"\t Price: "<<pr;
    }
};
int main()
{
    Item ob;
    ob.in();
    ob.out();

    Item *p;
    p=&ob;
    p->in();
    p->out();

    return 0;
}
*/
///=======================================================================================///
///-------------------Dynamic memory allocation for objects-------------------------------///
/*
#include<iostream>
using namespace std;
class Item
{
private:
	int ic;
	float ip;
public:
	void in()
	{
		cout<<endl<<"Ente the item code and price: ";
		cin>>ic>>ip;
	}
	void out()
	{
		cout<<endl<<"Item Code: "<<ic<<"\t Price: "<<ip;
	}
};
int main()
{
    int cnt;
    cout<<endl<<"Enter your count: ";
    cin>>cnt;

    Item *p;
    p=new Item[cnt];

    cout<<endl<<"Enter the Information of "<<cnt<<" Item";
    for(int i=0;i<cnt;i++)
    {
        (p+i)->in();
    }

    cout<<endl<<"Details of Item: ";
    for(int i=0;i<cnt;i++)
    {
        (p+i)->out();
    }

}
*/
///======================================================================================///
///---------------this pointer---------------------------------------------------------///
/*
#include<iostream>
using namespace std;
class Person
{
private:
    int uid;
    int age;
public:
    void in()
    {
        cout<<endl<<"Enter the uid and age of person: ";
        cin>>uid>>age;
    }
    void out()
    {
        cout<<endl<<"Person uid: "<<uid<<"\t Age: "<<age;
    }
    Person getelder(Person t)
    {
        if(t.age>age)
        {
            return t;
        }
        else
        {
            return *this;
        }
    }
};
int main()
{
    Person ob1,ob2,ob3;
    ob1.in();
    ob2.in();

    ob1.out();
    ob2.out();

    ob3=ob1.getelder(ob2);///we can also write ob2.getelder(ob1);
    cout<<endl<<"Elder Person: ";
    ob3.out();
}
*/
///========================================================================================///
///-----------Using the pointer in inheritance--------------------------------------------///
/*
#include<iostream>
using namespace std;
class Demo
{
public:
    void show()
    {
        cout<<endl<<"In Demo Show()";
    }
};
class Sample:public Demo
{
public:
    void display()
    {
        cout<<endl<<"In Sample Display()";
    }
};
int main()
{
    Demo dob;
    Sample sob;

    Demo *dptr;
    dptr=&dob;
    dptr->show();

//    dptr=&sob;
//    dptr->display();// error: ‘class Demo’ has no member named ‘display’
    // The pointer of base class Demo able to refer Sampe object but when we
    // call the method from child Sample class then it will search that method in
    // the Demo class(base class).

    Sample *sptr;
//    sptr=&dob;//error: beacause child class pointer(Sample *sptr)does not referes object of base class(Demo)
//    sptr->show();

    sptr=&sob;
    sptr->display();

    return 0;
}

*/
///=======================================================================================///
///=====================POLYMORPHISM======================================================///
///==========(poly means many & morphism is greek word and its mean form)(one name many form)
/*
#include<iostream>
using namespace std;
class Demo
{
public:
    void show()
    {
        cout<<endl<<"In Demo Show()";
    }
    void display()
    {
        cout<<endl<<"In Demo display()";
    }
};
class Sample:public Demo
{
public:
    void display()
    {
        cout<<endl<<"In Sample display()";
    }
};
int main()
{
    Demo dob;
    Sample sob;

    Demo *dptr;
    dptr=&dob;
    dptr->show();

    dptr=&sob;
    dptr->display();


}
*/
///====================================================================================///
///------------USING Virtual Keyword--------------------------------------------------///
/*
#include<iostream>
using namespace std;
class Demo
{
public:
    void show()
    {
        cout<<endl<<"In Demo Show()";
    }
    virtual void display()
    {
        cout<<endl<<"In Demo display()";
    }
};
class Sample:public Demo
{
public:
    void display()
    {
        cout<<endl<<"In Sample display()";
    }
};
int main()
{
    Demo dob;
    Sample sob;

    Demo *dptr;
    dptr=&dob;
    dptr->show();

    dptr=&sob;
    dptr->display();


}
*/
///=========================================================================================///
///==================Actual Polymorphism====================================================///
/*
#include<iostream>
using namespace std;
class Circle
{
public:
    void findarea()
    {
        cout<<endl<<"In Circle shape:";
    }
};
class React
{
public:
    void calarea()
    {
        cout<<endl<<"In React shape:";
    }
};
class Traingle
{
    public:
        void showarea()
        {
             cout<<endl<<"In Traingle shape:";
        }

};
int main()
{
    Circle cob;
    cob.findarea();

    React rob;
    rob.calarea();

    Traingle tob;
    tob.showarea();

}
*/
///=========================================================================================///

//  Now, i want to provide a menu, by using that menu, user can select the shape to find the area.
//	means the shape will be selected at runtime.
//
//	Now lets code for it,
//
//		- now we dont know which shape, it will be selected at runtime by the user, as it is
//		  selected at runtime we need one pointer.
//
//		- what about the type of pointer?
//			As we dont know which Shape will be selected, we need a pointer which able to refer
//			object of any mentioned shape.
//
//			as discussed above, we know that base class pointer able to refer object of its child.
//			so lets create the common base for all the shapes as shown below

//
//
//                               Shape
//                              [    ]
//                                |
//                                |
//		  ________________________|________________________
//		  |			              |			            |
//		  |			              |			            |
//		[   ] 			        [   ]			      [   ]
//		Circle			        Rect			    Triangle
//
//		findarea()		      calcarea()		    showarea()

/*
#include<iostream>
using namespace std;
class Shape
{

};
class Circle:public Shape
{
public:
    void findarea()
    {
        cout<<endl<<"In Circle shape:";
    }
};
class React:public Shape
{
public:
    void calarea()
    {
        cout<<endl<<"In React shape:";
    }
};
class Traingle:public Shape
{
    public:
        void showarea()
        {
             cout<<endl<<"In Traingle shape:";
        }

};
int main()
{
    Shape *s;

    Circle cob;
    s=&cob;

    React rob;
    s=&rob;

    Traingle tob;
    s=&tob;

    s->...();//which method????  - it can not be decided and that is the problem.

}
*/
///The solution to above problem is that, choose same method name in all classes as

//                               Shape
//                              [    ]
//                                |
//                                |
//		  ________________________|________________________
//		  |			              |			            |
//		  |			              |			            |
//		[   ] 			        [   ]			      [   ]
//		Circle			        Rect			    Triangle
//
//		area()		            area()		          area()

/*
#include<iostream>
using namespace std;
class Shape
{

};
class Circle:public Shape
{
public:
    void area()
    {
        cout<<endl<<"In Circle shape:";
    }
};
class React:public Shape
{
public:
    void area()
    {
        cout<<endl<<"In React shape:";
    }
};
class Traingle:public Shape
{
    public:
        void area()
        {
             cout<<endl<<"In Traingle shape:";
        }

};
int main()
{
    Shape *s;

    Circle cob;
    s=&cob;


    //or

    React rob;
    s=&rob;


    //or

    Traingle tob;
    s=&tob;

    s->area();// As Program gives error, that Shape does not contains, area(), lets write area in Shape class as
}
*/
///To check , Is the base pointer correctly pointing to the child object or not?
///lets rearrange the main as shown below
/*
#include<iostream>
using namespace std;
class Shape
{

};
class Circle:public Shape
{
public:
    void area()
    {
        cout<<endl<<"In Circle shape:";
    }
};
class React:public Shape
{
public:
    void area()
    {
        cout<<endl<<"In React shape:";
    }
};
class Traingle:public Shape
{
    public:
        void area()
        {
             cout<<endl<<"In Traingle shape:";
        }

};
int main()
{
    Shape *s;

    Circle cob;
    s=&cob;
    s->area();

    //or

    React rob;
    s=&rob;
    s->area();

    //or

    Traingle tob;
    s=&tob;
    s->area();

}
*/
///As Program gives error, that Shape does not contains, area(), lets write area in Shape class as
/*
#include<iostream>
using namespace std;
class Shape
{
public:
     void area()
     {
         cout<<endl<<"In Shape Area:";
     }
};
class Circle:public Shape
{
public:
    void area()
    {
        cout<<endl<<"In Circle shape:";
    }
};
class React:public Shape
{
public:
    void area()
    {
        cout<<endl<<"In React shape:";
    }
};
class Traingle:public Shape
{
    public:
        void area()
        {
             cout<<endl<<"In Traingle shape:";
        }

};
int main()
{
    Shape *s;

    Circle cob;
    s=&cob;
    s->area();

    //or

    React rob;
    s=&rob;
    s->area();

    //or

    Traingle tob;
    s=&tob;
    s->area();

}
///output
//In Shape Area:
//In Shape Area:
//In Shape Area:

//every time body of shape will be executed,but we want to executed area() from object
//which shape pointer is pointing
*/
///so void this shape function declared as virtual function using virtual keyword
/*
#include<iostream>
using namespace std;
class Shape
{
public:
     virtual void area()
     {
         cout<<endl<<"In Shape Area:";
     }
};
class Circle:public Shape
{
public:
    void area()
    {
        cout<<endl<<"In Circle shape:";
    }
};
class React:public Shape
{
public:
    void area()
    {
        cout<<endl<<"In React shape:";
    }
};
class Traingle:public Shape
{
    public:
        void area()
        {
             cout<<endl<<"In Traingle shape:";
        }

};
int main()
{
    Shape *s;

    Circle cob;
    s=&cob;
    s->area();

    //or

    React rob;
    s=&rob;
    s->area();

    //or

    Traingle tob;
    s=&tob;
    s->area();

}
*/
///==========================================================================================///
///=========================Pure virtual Function============================================///
/*
#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void area()=0;
};
class Circle:public Shape
{
public:
    void area()
    {
       cout<<endl<<"In Circle Shape: ";
    }
};
class React:public Shape
{
public:
    void area()
    {
        cout<<endl<<"In React Shape: ";
    }
};
class Traingle:public Shape
{
public:
    void area()
    {
        cout<<endl<<"In Traingle Shape: ";
    }
};
class parabola:public Shape
{
public:
    void area()
    {
        cout<<endl<<"In para Shape: ";
    }
};
int main()
{
    Shape *s;

    Circle cob;
    s=&cob;
    s->area();

    React rob;
    s=&rob;
    s->area();

    Traingle tob;
    s=&tob;
    s->area();

    parabola pob;
    s=&pob;
    s->area();

    return 0;

}
*/
#include<iostream>
using namespace std;
class Time
{
    private:
	int hours;
	int mins;
	int secs;
    public:
	Time()
	{
		hours=0;
		mins=0;
		secs=0;
	}
	Time(int a)
	{
		hours=a;
		mins=a;
		secs=a;
	}
	Time(int a1, int a2, int a3=10) // check carefully that it will not creating ambiguilty
	{
		hours=a1;
		mins=a2;
		secs=a3;
	}
	void showtime()
	{
		cout<<endl<<"Time is: "<<hours<<":"<<mins<<":"<<secs;
	}
};
int main()
{
	Time t1;
	t1.showtime();

	Time t2(5);
	t2.showtime();

	Time t3(2,30);
	t3.showtime();

	Time t4(2,30);
	t4.showtime();

	return 0;
}








































































