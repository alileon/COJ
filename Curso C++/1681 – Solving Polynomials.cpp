#include <iostream>
/*
 * @autor Ali de Leon Huerta
 */
using namespace std;
int main()
{int a,b,c;
    cin >> a >> b >> c;
     if(((b*b)-4*a*c)<0)
        cout << "NO" << endl;
     else
        cout << "YES" << endl;
}
