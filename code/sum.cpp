#include<iostream>

int main()
{
    int a,b;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    std::cout<<"sum:"<<a+b<<std::endl;
    std::cout<<"subtract:"<<a-b<<std::endl;
    std::cout<<"product:"<<a*b<<std::endl;
    std::cout<<"division:"<<a/b<<std::endl;
    std::cout<<"modulus:"<<a%b<<std::endl;
    return 0;
}