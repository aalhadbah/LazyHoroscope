//Authors:Abdulaziz alhadbah
#include<iostream>
#include<string>

using namespace std;

int main()

{

string FirstName, LastName;
char fInitial, lInitial;                      //Declaring Variables


cout<<"What's your first name?\n";           
cin>> FirstName;                             //Sentences For Names
fInitial=FirstName[0]; 


cout<<"what's your last name?\n";
cin>> LastName;
lInitial=LastName[0];




cout<< "Welcome, "<<fInitial<<"."<<lInitial<<", here is your fortune...\n";

  
  
  //tell fortune

  return 0;
}
