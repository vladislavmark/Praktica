#include <iostream.h>
#include <string>
 
std::string s;
 
void replace (int i)
{
    if (i==-1) return;
    if (s[i]=='1') s[i]='0';
    else if (s[i]=='0') s[i]='1';
    replace (i-1);
}
 
int main()
{
    cin >> s;
    replace (s.size()-1);
    cout << s << "\n";
    system ("pause");
    return 0;
}

