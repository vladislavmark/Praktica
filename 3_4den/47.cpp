#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <conio.h>
 
std::string intToStr(int numb)
{
    std::stringstream ss;
    ss<<numb;
    return ss.str();
}
 
std::string transform(int numb, int base)
{
    std::string result;
    while(numb)
    {
        result+=intToStr(numb%base);
        numb/=base;
    }
    std::reverse(result.begin(), result.end());
    return result;
}
 
int main()
{
    const int start=2;
    const int end=16;
    int numb=0;
    std::cout<<"Enter numb: ";
    std::cin>>numb;
    for(int i=start; i<=end; ++i)
    std::cout<< transform(numb, i) <<'\n';
    getch();
    return 0;
}
