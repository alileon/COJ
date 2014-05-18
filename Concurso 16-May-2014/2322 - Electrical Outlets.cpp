#include <iostream>
#define W(t) while(t--)
using namespace std;
int main()
{int n,k,p,num,sum;
    cin >> n;
    W(n)
    {cin >> k;
     sum=0,p=k;
        W(k)
        {cin >> num;
         sum+=num;
        }
      cout << sum-(p-1) << endl;
    }
}
