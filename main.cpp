/*  Mario Bonilla
        EPV1
    "Palindrom"

*/

#include <iostream>
#include <string.h>

using namespace std;


string reverse1(string& t){

    int counter = t.size()-1;
    /* z.B "mario" hat 5 als Laenge aber in einem String faengt es bei 0 an,
     also meine Index 4 wäre meine "o"; deswegen die -1.*/
    string newstring = t;
    for (unsigned int i=0;i<t.size();i++) //von Vorne und von hinten tauscht das Program die Buchstaben
    {
        //cout<<counter<<endl; zum ueberprufen von Fehlern(ob die Funktion richtig laueft)
        newstring[i] = t[counter];
        counter--;
    }

return newstring;
}

string clean(const string& t){

    string r=t;//weil man keine Konstante aendern kann

    for (unsigned int i=0; i<t.size();i++)
    {
        if(r.at(i) = 111 ||r[i]=='.' ||r[i]=='+' || r[i]=='#'||
            r[i]=='?'|| r[i]=='!'||r[i]==';' ||r[i]==',')
        {

           r.erase(r.begin()+i); //um einen Char zu loeschen
        }
        return r;

    }


 return r;
}

int main()
{
    string s;
    string z;
    cout << "Geben Sie eine Zeile ein: " <<endl;
    getline(cin,s);//speichert mein String komplett und nicht nur das erste Wort.(Falls ich 2 Wörter eingebe)

    z=clean(s); //es wird eine neue Variable für das String damit das Programm naher die Wörter vergleichen kann.

    cout << "Inhalt: " << s<< endl;
    cout << "Ohne Sonderzeichen: "<< z<<endl;;
    cout << "Laenge: "<< z.size()<<endl;
    cout << "Umgekehrte Reihenfolge: " << reverse1(z) << endl;


    if (z==reverse1(z))
    {
        cout<< "Palindrom? \t Ja.";
    }else
    {
        cout << "Palindrom? \t Nein.";
    }



    return 0;
}
