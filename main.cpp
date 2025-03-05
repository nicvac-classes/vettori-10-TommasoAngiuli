#include <iostream>
using namespace std;
int main() 
{
    int n, i;
    double media, somma;
    do {
        cout << "inserisci la dimensione del vettore" << endl;
        cin >> n;
    } while (n <= 0);
    int v[n], c[n];
    string s[n];
    i = 0;
    while (i <= n - 1) {
        cout << "inseisci nome, voto e crediti del " << i + 1 << " °studente" << endl;
        cin >> s[i];
        cin >> v[i];
        cin >> c[i];
        i = i + 1;
    }
    i = 0;
    somma = 0;
    while (i <= n - 1) {
        somma = somma + v[i];
        i = i + 1;
    }
    media = somma / n;
    i = 0;
    while (i <= n - 1) {
        if (v[i] > media) {
            cout << "lo studente " << s[i] << " ha conseguito una votazione superiore alla media" << endl;
        }
        i = i + 1;
    }
    i = 0;
    while (i <= n - 1) {
        if (c[i] >= 6) {
            cout << "lo studente " << s[i] << " ha ottenuto più di 6 crediti" << endl;
        }
        i = i + 1;
    }
    return 0;
}