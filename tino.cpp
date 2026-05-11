#include <queue>
#include <stack>
#include <iostream>
using namespace std;

class automobil {
    public:
    string registracija;
    int godina;
};

int main() {
    queue<automobil> kolona;
    stack<automobil> k;

    automobil a1, a2, a3;
    cout << "Unesi godinu za prvi auto: ";
    cin >> a1.godina;
    cout << "Unesi registraciju za prvi auto: ";
    cin >> a1.registracija;

    cout << "Unesi godinu za drugi auto: ";
    cin >> a2.godina;
    cout << "Unesi registraciju za drugi auto: ";
    cin >> a2.registracija;

 
    cout << "Unesi godinu za treæi auto: ";
    cin >> a3.godina;
    cout << "Unesi registraciju za treæi auto: ";
    cin >> a3.registracija;

 
    kolona.push(a1);
    kolona.push(a2);
    kolona.push(a3);

  
    k.push(a1);
    k.push(a2);
    k.push(a3);

    cout << "\nAutomobili u koloni (queue):\n";
    while (!kolona.empty()) {
        automobil temp = kolona.front();
        kolona.pop();
        cout << temp.registracija << " " << temp.godina << endl;
    }

    // Ispis podataka iz stack
    cout << "\nAutomobili u stacku:\n";
    while (!k.empty()) {
        automobil temp = k.top();
        k.pop();
        cout << temp.registracija << " " << temp.godina << endl;
    }

    return 0;
}