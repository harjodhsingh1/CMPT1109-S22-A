#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int j = 1, i;
    for (i = 1; i == j;) {
        {


            double a, b, c, x1, x2, d{};
            cout << "enter value of a,b,c->\n";
            cin >> a >> b >> c;

            if (a == 0)
                //WHEN A==0
            {
                cout << "Not Quadratic\n";

                if (b == 0)
                {
                    cout << "a= " << a << "\n" << "b= " << b << "\n" << "bye!";
                }
                else
                {
                    x1 = -c / b;
                    cout << "Root X1=" << x1 << "\n";
                }
            }
            else
                //WHEN A!= 0
            {
                d = ((b * b) - (4 * a * c));

                if (d > 0)//D GREATER THAN 0
                {
                    x1 = (-b + sqrt(d)) / (2 * a);
                    x2 = (-b - sqrt(d)) / (2 * a);
                    cout << "The Root X1= " << x1
                        << "\n"
                        << "The Root X2=" << x2 << "\n";
                }


                else if (d == 0)//D IS EQUAL TO 0
                {
                    x1 = x2 = (-b) / (2 * a);
                    cout << "The Root X1= " << x1
                        << "\n"
                        << "The Root X2=" << x2 << "\n";
                }

                else//D IS LESS THAN 0
                {

                    cout << "No Real solution,Fail to take square root of negative value\n";
                }
            }

        }

        cout << "Please ENTER Your Choice\n";
        cout << "1.To get the equation\n";
        cout << "2.To Exit\n";
        cin >> j;
    }
    cout << "THANK U!\n" << "BYE!";
}





