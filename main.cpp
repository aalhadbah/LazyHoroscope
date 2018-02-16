//Authors:Abdulaziz alhadbah
#include<iostream>
#include<string>

using namespace std;

int main()

{

string FirstName, LastName, find_first_of;
char fInitial, lInitial;                      //Declaring Variables
int lucky;



cout<<"What is your first name?\n";           
cin>> FirstName;                             //Sentences For Names
fInitial=FirstName[0]; 


cout<<"what is your last name?\n";
cin>> LastName;
lInitial=LastName[0];




cout<< "Welcome, "<<fInitial<<"."<<lInitial<<", here is your fortune...\n";
cout<<"your lucky number is "<<FirstName.length();
cin>> lucky;
lucky = FirstName.length();

    if(fInitial=='a'||fInitial=='e'||fInitial=='i'||fInitial=='o'||fInitial=='u'||fInitial=='A'||fInitial=='E'||fInitial=='I'||fInitial=='O'||fInitial=='U')


{ cout<< " you are destined to be famous !\n"; } 


    else if(fInitial>65 && fInitial<90||fInitial>97 && fInitial<122)
    { cout<<" you should keep a low profile.\n"; 
    }

int len= LastName.length();
if(LastName[len -1]=='a'||LastName[len -1]=='e'||LastName[len -1]=='i'||LastName[len -1]=='o'||LastName[len -1]=='u'||LastName[len -1]=='A'||LastName[len -1]=='E'||LastName[len -1]=='I'||LastName[len -1]=='O'||LastName[len -1]||LastName[len -1]||LastName[len -1]=='U')

{cout<<" you have already met your true love";

cout<<" have a good day!";}

else {cout<<" have a good day!";}




return 0;
}
