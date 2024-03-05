#include<iostream>
#include<ctime>
int main()
{
    using namespace std;
    cout<<"Podaj czas opoznienia w sekundach: ";
    float sec;
    cin>>sec;
    clock_t delay=CLOCKS_PER_SEC*sec;
    clock_t start=clock();
    while(clock()-start<=delay)
    ;
    cout<<"gotowe";
    cin.get();
    cin.get();
    typedef float* alias;
    alias cos;
    cos=&sec;

    return 0;
}
int main()
{
    using namespace std;
    cout<<"Podaj opoznienie w sekundach: ";
    float sec;
    cin>>sec;

    clock_t delay=sec*CLOCKS_PER_SEC;
    clock_t start=clock();
    while(clock()-start<delay)
    ;

    return 0;
}