#include<iostream>
#include<cctype>
int main()
{
    using namespace std;
    char ch;

    int literaicyfra=0;
    int alpha=0;
    int spacjaitab=0;
    int znaksterujacy=0;
    int cyfradziesietna=0;
    int znakdrukowalny=0;
    int malalitera=0;
    int znakdrukowalnyzespacja=0;
    int przestankowy=0;
    int znakbialy=0;
    int wielkalitera=0;
    int cyfraszestnastkowa=0;


    cout<<"Podaj ciag znakow: ";
    cin.get(ch);
        while(ch!='@')
        {
            // if(isalnum(ch))
            //     literaicyfra++;
            // else if(isalpha(ch))
            //     alpha++;
            // else if(isblank(ch))
            //     spacjaitab++;
            // else if(iscntrl(ch))
            //     znaksterujacy++;
            // else if(isdigit(ch))
            //     cyfradziesietna++;
            // else if(isgraph(ch))
            //     znakdrukowalny++;
            // else if(islower(ch))
            //     malalitera++;
            // else if(isprint(ch))
            //     znakdrukowalnyzespacja++;
            // else if(ispunct(ch))
            //     przestankowy++;
            // else if(isspace(ch))
            //     znakbialy++;
            // else if(isupper(ch))
            //     wielkalitera++;
            // else if(isxdigit(ch))
            //     cyfraszestnastkowa++;
            cin.get(ch);
        }

    cout<<"znakow char:  "<<alpha<<" spacje i taby: "<<spacjaitab<<" znak sterujacy: "
    <<znaksterujacy<<" cyfra dziesietna: "<<cyfradziesietna<<" znak drugkowalny "
    <<znakdrukowalny<<" mala litera: "<<malalitera<<" znak drukowalny ze spacja: "<<znakdrukowalnyzespacja
    <<" znak przestankowy: "<<przestankowy<<" znak bialy: "<<znakbialy<<" wielka litera: "
    <<wielkalitera<<" cyfra szesnastkowa: "<<cyfraszestnastkowa;
    cin.get();
    cin.get();
    return 0;
}