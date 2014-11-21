# include <iostream>
# include <conio.h>
# include <math.h>
using namespace std;

double function (double );
   int main ()
        {
        double a,b,h;
        for (int i=0;i!=1;)
        {
system ("cls");
cout<<"pochatok diapazony*(=-4)*: ";
cin>>a;
cout<<endl<<"kinets diapazony*(=4)*: ";
cin>>b;
cout<<endl<<"krok diapazony*(0,75)*: ";
cin>>h;
   if (a>b)
 swap(a,b);
if ((a==b)||(h>=b)||(h<=0))
    {
    cout<<"(vvedeno nevirno)ERROR!!";
    getch ();
    }
else 
i++;
}

for (double i=a;i<b;i+=h)
    {
    if ((i>=-4)&&(i<=4)&&(h==0.75))
    function (i);
    }
system("pause");
return 0;    
    }
    double function (double x)
    {
    if ((((x*x)-2*x+1)/(log(x)-1)<((x*x)-2*x+1)/0)||(((x*x)-2*x+1)/(log(x)-1)>((x*x)-2*x+1)/0))
    cout<<" "<<((x*x)-2*x+1)/(log(x)-1) <<endl;
    }
