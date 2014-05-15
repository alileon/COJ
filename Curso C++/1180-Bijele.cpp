#include <iostream>
#define W(T) while(T--)
#define FOR(a,b,c,d) for(a=b;a<c;a+=d)
using namespace std;
int main()
{
    int i,n,k,chess[]={1,1,2,2,2,8},chek[6];
    cin >> n;
    W(n)
    {
        FOR(i,0,6,1)
        {cin >> k;
            chek[i]=(k==0) ? chess[i] : chess[i]-k;
        }
        cout << chek[0] << " " << chek[1] << " " << chek[2] << " " << chek[3] << " " << chek[4] << " " << chek[5] << endl;
    }
}
