#include<iostream>
const int ArSize=16;
int main()
{
    long long factorials[ArSize];
    factorials[0]=factorials[1]=1;
    for(int i=2;i<ArSize;i++)
        factorials[i]=factorials[i-1]*i;
    for(int i=0;i<ArSize;i++)
        std::cout<<i<<"! ="<<factorials[i]<<std::endl;
    std::cout<<1LL;
    std::cin.get();
    std::cin.get();
    return 0;
}