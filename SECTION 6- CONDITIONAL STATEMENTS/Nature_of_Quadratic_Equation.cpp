#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c, d, r1, r2, realpart, imaginarypart;
    cout << "Enter a,b,c" << endl;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r1 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different" < endl;
        cout << "r1 = " << r1 << endl;
        cout << "r2 = " << r2 << endl;
    }
    else
    {
        if (d == 0)
        {
            cout << "Roots are real and same." << endl;
            r1 = -b / (2 * a);
            cout << "r1 = r2 = " << r1 << endl;
        }
        else
        {
            realpart = -b / (2 * a);
            imaginarypart = sqrt(-d) / (2 * a);
            cout << "Roots are complex and different." << endl;
            cout << "x1 = " << realpart << "+" << imaginarypart << "i" << endl;
            cout << "x2 = " << realpart << "-" << imaginarypart << "i" << endl;
        }

        return 0;
    }
}
}
return 0;
}