#include <iostream.h>
#include <conio.h>

long double factor(int N)
{
    if(N < 0) // ������� ����� �����
        return 0; // ��������� 0
    if (N == 0) // ���� ������� 0
        return 1; // ���������� �������� �� 0 �� 1
    else 
        return N * factor(N - 1); // �������
}
  int main()
{
    int a,b,c,d,n,j,s,t;
    cin >> a >> b >> c >> d >> n >> j >> s >> t;
    cout << "k = " << (factor(a)*factor(b)+factor(c)*factor(d))/(factor(n)*factor(j)-factor(s)*factor(t))<< "\n";
    system("pause");
    return 0;   
}
