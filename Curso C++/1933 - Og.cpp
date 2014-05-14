#include <iostream>
using namespace std;
/*
 * @autor Ali de Leon Huerta
 */
int main()
{
    int L,R;
    cin >> L >> R;
    while(L!=0 and R!=0)
    {
        cout << R+L << endl;
        cin >> L >> R;
    }
}
