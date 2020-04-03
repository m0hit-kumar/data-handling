#include<iostream.h> 
#include<fstream.h> 
#include<stdlib.h> 
class Student { char name[40]; 
char grade ;
 float marks ; 
      public:

void display(void); 
void getdata(void);};
 void Student :: getdata(void)
  { 
 char ch; 
 cin.get(ch); 


cout << "Enter name:";
cin.getline(name, 40); 
 cout << " Enter grade : "; 
cin >> grade ;
 cout << " Enter marks : " ; 
 cin >> marks ;
 cout << "\n";}
 
 void Student :: display(void)
  { cout << "Name : " << name << "\t";
          cout << "Grade : " << grade <<"\t";
       cout <<"marks:"<<marks<<"\t"<<"\n";
  }
  int main() 
{  system ( " cls ") ; 
  Student arts[3]; 
  fstream filin ; 
  filin.open("Stu.dat", ios :: in |ios :: out);
   if (!filin) { 
   cout << " Cannot open file !! \n";

return 1;
   }
cout <<" Enter details for 3 students \n";
 for(int i = 0; i< 3; i++) 
 { 
 arts[i].getdata( ) ; 
 filin.write((char *) & arts[i], sizeof (arts[i])) ;
 }

filin.seekg(0);

//seekg(0) resets the file to start, so that the file can be // accessed from the beginning.

cout << " The contents of stu.dat are shown below. \n";
for( int i = 0; i < 3; i++)
 { filin.read((char *) & arts[i], sizeof (arts[i]));
  arts[i].display();
 }
filin.close();
 return 0;
 }
                 
          
