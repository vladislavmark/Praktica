#include <iostream>
#include <math.h>

using namespace std;

long double fact(int N)
{
    if(N < 0) 
        return 0; 
    if (N == 0) 
        return 1; 
    else 
        return N * fact(N - 1); 
}

float function(float x,float y)
{
      int sum=0;
      float t,c,p;
      for(int k = 0; k<10;k++)
      {
            c = pow(x,2*x+1)/fact(2*k+1);
            p = pow(x,2*k)/fact(2*k);
            t =c/p;
      }
      cout << "y = " << (1.7*(t*0.25)+2*(t*(1+y)))/6 - ((t*(y*y)-1));
}
int main()
{
    float y,x;
    cout << "y = \n"; cin >> y;
    cout << "x = \n"; cin >> x;
    function(x,y);
    system("pause");
    return 0;
}
