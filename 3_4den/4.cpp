#include <iostream.h>
#include <math.h>

float min_ch(float a,float b)
{
      float min,op1;
      op1 = 3*b;
      if(a<op1)
      min = a;
      else
      min = op1;
      return min;
}

float min_ch2(float a,float b)
{
      float min2,op2,op3;
      op2 = 2*(a-b);
      op3 = 2*b;
      if(op2<op3)
      min2 = op2;
      else
      min2 = op3;
      return min2;
}

int main()
{
    float a,b,a1,b2,b1,min,min2;
    cout << "Write a: \n"; cin >> a;
    cout << "Write b: \n"; cin >> b;
    b1 = 3*b;
    a1 = 2*(a-b);
    b2 = 2*b;
    if(a < b1)
    min = a;
    else
    min = b1;
    if(a1<b2)
    min2 = a1;
    else
    min2 = b2; 
    cout << "min with function: z = " << min_ch(a,b)* min_ch2(a,b) << endl;
    cout << "min without function: z = " <<  min*min2 << endl;
    system("pause");
    return 0;
}
