#include<iostream.h>
struct student
          {
           long roll_no;
           char name[10];
           int age;
           float marks;  
           };
 void main(){
  int i,j,k;
  for(i=1;i<=3;i++){
    student s[i];
   cout<<"Enter the roll_no,name,age,marks of s1"<<endl;
   cin>>s[i].roll_no>>s[i].name>>s[i].age>>s[i].marks;
  
  }
 student s[i];
  for(i=1;i<=3;i++)
  {
   
    cout<<s[i].roll_no<<s[i].name<<s[i].age<<s[i].marks;
    
    }
    }
