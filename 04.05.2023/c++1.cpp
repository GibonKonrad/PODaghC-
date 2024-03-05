#include<iostream>
int main()
{
    using namespace std;
    int a,b;
    cout<<"Podaj dwie liczby calkowite: ";
    cin>>a>>b;
    cout<<"Wieksza z tych licz "<<a<<" i "<<b<<endl;
    int c=a>b?a:b;
    cout<<" to "<<c<<endl;
    const char x[2][20]{"Jason","do uslug\n"};
    const char* y="Quillstone";

    for(int i=0; i<3;i++)
        cout<<(i<2?x[i]:x[1]);
    cin.get();
    cin.get();
    return 0;
}