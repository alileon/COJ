#include <iostream>
using namespace std;
/*
 * @uator Ali de Leon
 */
int main()
{int n,sc,i;
 double av=0;
    cin >> n;
    i=n;
    while(i--)
    {cin >> sc;
        av+=sc;
    }
    av/=n;
    cout.precision(2);
    cout << fixed << av;
}
