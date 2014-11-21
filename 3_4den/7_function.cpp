#include <iostream.h>
#include <conio.h>

long double factor(int N)
{
    if(N < 0) // введено відємне число
        return 0; // повертаємо 0
    if (N == 0) // якщо введено 0
        return 1; // повертаємро факторіал від 0 це 1
    else 
        return N * factor(N - 1); // рекурсія
}
  int main()
{
    int a,b,c,d,n,j,s,t;
    cin >> a >> b >> c >> d >> n >> j >> s >> t;
    cout << "k = " << (factor(a)*factor(b)+factor(c)*factor(d))/(factor(n)*factor(j)-factor(s)*factor(t))<< "\n";
    system("pause");
    return 0;   
}
