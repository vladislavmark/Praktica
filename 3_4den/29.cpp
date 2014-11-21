#include <iostream.h>

void litt()
{
     int count=0,i; char lit;
     char str1[50];
    char str2[50];
    char str3[50];
    cout << "Vvedute pervoye predlogenuye: "; cin >> str1;
    cout << "Vvedute vtoroye predlogenuye: "; cin >> str2;
    cout << "Vvedute tretye predlogenuye: "; cin >> str3;
    cout << "vvedute bykvy: "; cin >> lit;
    if((lit == str1[i]))
    count ++;
    cout << count;
}


int main()
{
    litt();
    system("pause");
    return 0;
}
