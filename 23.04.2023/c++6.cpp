#include<iostream>
int main()
{
    using std::cout;
    using std::cin;
    int a=20;
    int b=20;

    cout<<"a = "<<a<<" b = "<<b<<"\n";
    cout<<"a++ = "<<a++<<" ++b = "<<++b<<"\n";
    cout<<"a = "<<a<<" b = "<<b<<"\n";

    a++;
    cout<<++a<<std::endl;
    cin.get();
    cin.get();
    return 0;
}