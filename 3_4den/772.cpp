#include <iostream.h>
#include <math.h>
#include <locale.h>

float kulon(float n,float m,float F)
{
      float k,r;
      k = 9*pow(10,9);
      //f = (k*fabs(n)*fabs(m))/(r*r);
      r = sqrt(k*fabs(n)*fabs(m)/F);
      return r;
}

int main()
{
    setlocale(LC_ALL,"rus");
    float q1,q2,q3,F;
    cout << "������� ����� q1: \n"; cin >> q1;
    cout << "������� ����� q2: \n"; cin >> q2;
    cout << "������� ����� q3: \n"; cin >> q3;
    cout << "���� ����� ���� ������: \n"; cin >> F;
    cout << "������ � ������ ������, ������� ���������� ����� �������� q1 i q2:\n" << kulon(q1,q2,F) << " �2\n";
    cout << "������ � ������ ������, ������� ���������� ����� �������� q2 i q3:\n" << kulon(q2,q3,F) << " �2\n";
    cout << "���������� �� q1 -> q3 = " << kulon(q1,q2,F) + kulon(q2,q3,F) << endl;
    system("pause");
    return 0;
}
