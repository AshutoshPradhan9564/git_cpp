#include <iostream>
using namespace std;

class Student
{
    char name[20];
    int reg;
    int marks[5];
    float average;
public:
    void read();
    void display();
    void avg();
};

int main()
{
    int i;
    Student obj;
    cout<<"Enter details of student\n";
    obj.read();
    obj.avg();
    obj.display();
    return 0;
}

void Student::read()
{
    cout<<"Enter student's name: ";
    cin>>name;
    cout<<"Enter registration number: ";
    cin>>reg;
    cout<<"Enter marks of 3 subjects: ";
    for(int i=0;i<3;i++)
        cin>>marks[i];
}
void Student::display()
 {
    cout<<"\nReg. No.: "<<reg<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Average: "<<average<<endl<<endl;
 }
void Student::avg()
{
    int sum=0;
    for(int i=0;i<3;i++)
        sum+=marks[i];
    average=sum/3.0;
}