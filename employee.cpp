#include <iostream>
using namespace std;

class employee
{
      int emp_no;
      char emp_name[20];
      float basic, da, gross, it, net_sal;

public:
      void read()
      {
            cout << "enter employee no: ";
            cin >> emp_no;
            cout << "enter employee name: ";
            cin >> emp_name;
            cout << "enter basic salary: ";
            cin >> basic;
      }

      void calculate()
      {
            da = 0.52*basic;
            gross = da + basic;
            it = 0.3*gross;
            net_sal = gross + it;
      }
      
      void display()
      {
            cout << " employee no: " << emp_no << endl;
            cout << " employee name: " << emp_name << endl;
            cout << "gross salary: " << gross << endl;
            cout << "net salary: " << net_sal << endl;
      }
};

int main()
{

    employee s[10];
    employee temp;
    int n, i, j ;
    cout << "enter the number of employees";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
         s[i].read();
         s[i].calculate();
    }

    for (int i = 0; i < n; i++)
        s[i].display();

    return 0;
}