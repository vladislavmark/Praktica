#include <iostream.h>
#include <locale.h>

struct student
{
       char surname[50];
       int god;
}student[100];
int main()
{
    setlocale(LC_ALL,("Russian"));
    int n,i,min= 0,minn=0;
    char sur_n[50];
    cout << "�-�� ���������: \n";
    cin>>n;
    for (int i=0; i<n;i++)
    {
    cout << "������� �������\n";
    cin>>student[i].surname;
    cout << "������� ��� ��������\n";
    cin>>student[i].god;
    min = student[0].god;
    if(min < student[i].god)
    min = student[i].god; 
    }
    cout << "�����: " << student[i].surname << " " << min << " ����.\n"; 
    system("pause");
    return 0;
}
