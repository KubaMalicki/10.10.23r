#include <iostream>
#include <string>
using namespace std;

int main()
{
    string uzytkownik ="admin";
    string haslo = "ciekawehaslo";
    string podanyuzytkownik;
    string podanehaslo;
    
    cout<<"Podaj nazwe uzytkownika:"<<endl;
    cin>> podanyuzytkownik;
    
    if(podanyuzytkownik == uzytkownik)
    {
        cout<<"Podaj haslo"<<endl;
        cin>>podanehaslo;
    }
    else{
        cout<<"bledna nawa uzytkownika"<<endl;
    }
    
    if(podanehaslo == haslo)
    {
        cout<<"Przyznano dostep"<<endl;
    }
    else
    {
     cout<<"Niepoprawne haslo"<<endl; 
    }
    

    return 0;
}
