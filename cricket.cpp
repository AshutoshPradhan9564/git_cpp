#include <iostream>
#include <string.h>
using namespace std;
struct cricket
{
    char name[20], team[20];
    float bat_avg;
    void read();
    void display();
    void sort(int n,struct cricket[]);
};

struct cricket c[5];
int main()
{
    int i, n;
    struct cricket p;
    cout << "The Number Of Players: ";
    cin >> n;
    for (i = 0; i < n; ++i)
    {
        c[i].read();
    }
    cout << "The Entered Details Are" << endl;
    cout << "Name"<< "\t"<< "Team Name"<< "\t"<< "Batting Average" << endl;
    for(i=0;i<n;i++)
    {
        c[i].display();
    }
    p.sort(n,c);
    cout << "The Sorted Details Are" << endl;
    cout << "Name"<< "\t"<< "Team Name"<< "\t"<< "Batting Average" << endl;
    for (i = 0; i < n;i++)
    {
        c[i].display();
    }    
}
void cricket::read()
{
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter team name: ";
        cin >> team;
        cout << "Enter Batting Average: ";
        cin >> bat_avg;
}
void cricket::display()
{
        cout << name << "\t" << team << "\t" << bat_avg<< endl;
}
void cricket::sort(int n,struct cricket[])
{
    struct cricket temp;
    int i,j;
    for (i = 0; i < n; i++)
    { 
        for (j = 0; j < n - i - 1; j++)
        if(strcmp(c[j].team,c[j + 1].team)>0)
        {
            temp = c[j];
            c[j] = c[j+1];
            c[j+1]=temp;
        }
    }
}