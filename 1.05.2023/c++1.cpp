#include<iostream>
#include<ctime>
int main()
{
    using namespace std;
    int ch;
    int count;

    while((ch=cin.get())!=EOF)
    {
        cout.put(ch);
        count++;
    }
    cout<<endl<<" wczytano "<<count<<" znakow";
    cin.clear();
    cout<<"Podaj czas w sekundach: ";
    float sec;
    cin>>sec;
    clock_t delay=sec*CLOCKS_PER_SEC;
    clock_t start=clock();
    while(clock()-start<delay)
    ;
    cin.get();
    cin.get();
    return 0;
}