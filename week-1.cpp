#include <iostream>
#include<string>
using namespace std;
class student {
    private:
     int rollnumber;
     string name;
     float marks;
  public:
  //constructor
  student() 
  {
    rollnumber=0;
    name="";
    marks=0.0;
   }
    //parameterised constructor
    student(int r,string n,float m)
    {
        rollnumber = r;
        name = n;
        marks = m;  
    }
    //fn to input details
    void input()
    {
        cout << "enter rollnumber";
        cin >> rollnumber;
        cin.ignore();
        cout << "enter name";
        getline(cin,name);
        cout << "enter marks";
        cin >> marks;      
    }
    //fn to display details
    void display()
    {
        cout << rollnumber << "\t" << name << "\t" << marks << endl;   
    }
    //destructor
    ~student() 
    {
        cout << "student object with roll number" << rollnumber << "is destoryed." <<endl;
    }

  };

  int main()
  {
    int n;
    cout << "enter no.of students";
    cin >> n;
    //dynamic allocation of student object
    student* students = new student[n];
    //input detalis
    for(int i=0;i<n;i++)
    {
        cout << "enter details of students" << i+1 << endl;
        students[i].input();
    }
    //display details
    cout << "\nrollno\tname\tmarks\n";
    for(int i=0;i<n;i++)
    {
        students[i].display();
    }
    //release allocated memory
    delete[] students;
    return 0;
  }
