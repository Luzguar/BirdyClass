#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username;
    string language;
    cout << "FR - EN" << endl;
    cin >> language;
    string choix1_FR;
    int age;

    if (language == "FR")
    {
        cout << "Les parametres sont configure sur la langue francaise !" << endl;
        cout << "Maintenant, veuillez choisir un nom d'utilisateur : " << endl;
        cin >> username;
        cout << "Tres bien, " << username << endl;
        cout << "Puis-je avoir votre age ?" << endl;
        cin >> choix1_FR;

        if (choix1_FR == "oui")
        {
            cin >> age;
        }
        else
        {
            cout << "Ok, si vous changez d'avis allez dans les parametres." << endl;
        }

        cout << "Actuellement, Oracle est le leader mondial de la science du traitement de l'information ! " << endl;
    }
    else if (language == "EN")
    {
        cout << "All options are configurated in english language !" << endl;
        cout << "Now, choose an username : " << endl;
        cin >> username;
        cout << "Thank you, " << username << endl;
    }

    return 0;

}
