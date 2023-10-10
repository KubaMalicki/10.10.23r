#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string, string> users;
    string username, password;

    users["admin"] = "ciekawehaslo";
    users["Jakub"] = "hah1";
    users["ola"] = "ola21";

    cout << "Witaj w systemie weryfikacji hasel!" << endl;

    bool zalogowany = false;
    
    while (!zalogowany) {
      
        cout << "Podaj nazwę użytkownika: ";
        cin >> username;
        cout << "Podaj hasło: ";
        cin >> password;

        if (users.find(username) != users.end() && users[username] == password) 
        {
            cout << "Dostęp przyznany! Witaj, " << username << "." << endl;
            zalogowany = true;
        } else 
        {
            cout << "Dostęp odrzucony. Nieprawidłowa nazwa użytkownika lub hasło." << std::endl;
            char ponownaProba;
            cout << "Czy chcesz spróbować ponownie? (T/N): ";
            cin >> ponownaProba;
            if (ponownaProba != 'T' && ponownaProba != 't') 
            {
                break;
            }
        }
    }

    return 0;
}