/*
1)KEYWORDS:-for while true false if else\
2)VARIABLES:- user defined x=5
3)FUNCTIONS:-sequence of instructions to perfrom a certain task c=max(a,b), printf()
4)FUNCTION ORIENTED PROGRAMMING:- Used for small programming lang. a fucntion calls another function and another fucntion
5)OBJECT ORIENTED PROGRAMMING:-
6)Staistically typed:-c++& Java [int x; x=5;] faster
7)Dynamically typed:-python [x=5] slower
8) Header files:- #include<iostream>
---------------------------------------------------------------
--->>FIRST C++ PROGRAM<<----
<iostream> input output stream
cout-used to print in c++
#- used as PRE PROCESSOR DIRECTIVE
void main- doesn't returns value
----------------------------------------------------------------
PRIMITVE DATA TYPES:-
- Basic data types, fundamental data types
- INTEREGER- int, small(saves small space), large
- CHAR- char(-128->127), unassigned_char(doesn't store negative characters)
- FLOAT-  float(32bits), double(higher precission), long double
- OTHER- BOOL(T/F,0/1) ,VOID()
NON-PRIMITIVE DATA TYPES:-
- Dervied from primitve data types
- ARRAY, POINTERS, user defined(class,struct),vector,string
----------------------------------------------------------------
SIZE OF OPERATOR:-
- No of elments in array
-cout<<sizeof(x)<<"\n";
    cout<<sizeof(d)<<"\n";
    cout<<sizeof(char)<<"\n";
-----------------------------------------------------------------
I/P & O/P
- I/P- Buffer- Process- buffer- O/P
- DIFFERENT STREAMS(classes):-
  -istream:- I/P stream
   -cin<<
  -ifstream:-I/P from file stream
  -ostream:- O/P stream
   -cout<<
  -ofstream:-O/P from file stream
  -cerr:- for error
  -clog:- for logging data

#include<iostream>
using namespace std;
int main(){
    int x;
    double d;
    cout<<x;
    return 0;

}

//INPUT IN C++
#include<iostream>
using namespace std;
int main()
{
  string name;
  cout<<"enter you name";
  cin>>name;
  cout<<"Hi"<<name<<",\n";
  cout<<"Welcome to my c++ train";
  return 0;

}

//ADDS X & Y
#include<iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"enter:";
  cin>>x>>y;
  cout<<x+y;
  return 0;
}


//GETLINE
#include<iostream>
using namespace std;
int main(){
  string name;
  cout<<"enter your name \n";
  getline(cin,name); //uses getline to include all inputs after space in input
  cout<<("Welcome ")<<name;
  return 0;
}

///BUFFERING IN C++ (reduces calculation speed)
#include <iostream>
using namespace std;
int main(){
  int x,y;
  cout<<"Enter first number\n";
  cin>>x;
  cout<<"Enter Second Number\n";
  cin>>y;
  cout<<"Multplied numbers are "<<( x*y );
  return 0;
}


//ESCAPE SEQUENCE FOR DOUBLE INVERTED AND DOUBLE SLASH
#include <iostream>
using namespace std;
int main(){
  string name, location;
  name="\"geekforgeekss\"\n";
  location="C:\\aadithlasar\\documents";
  cout<<name;
  cout<<location;
  return 0;
}


//IO Manipulation\:
#include <iostream>
#include<iomanip>
using namespace std;
int main(){
  int a;
  cin>>a;
  //cout<<uppercase; 
  //cout<<hex;//converts int to hex
  //cout<<oct; int to oct
  //cout<<showbase; adds prefix 

  //bool a = true; converts bool value from numeric to var
  //cout<<boolalpha;
  //cout<<noboolalpha;
  cout<<left;
  cout<<setw(5);
  cout<<setfill('-');

  cout<<a;
  return 0;
}


//FLOATING POINT  FIXED AND SCIENTIFIC FORMAT
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  double x,y;
  cin>>x;
  cin>>y;
  cout<<fixed; //FIXED FORMAT NIL MANUPLATION
  cout<<scientific; //SCIENTIFIC FORMAT MANIPULATION
  cout<<uppercase; //UPPERCASE E IN SCIENTIFIC

   cout<<showpoint; //SHOWS DECIMAL POINTS
   cout<<showpos; // SHOWS POSITIVE SIGN 
}
*/