#include <iostream>
#include <cmath>

using std::cout;
using std::cin;


int main() {

    char a;
    double x;
    double y;
    double wynik;

    cout << "Kalkulator!\n";
    cout << "Wybierz działanie (| + | - | * | / | ^ |): ";
    cin >> a;
    cout << "\nPodaj pierwszą liczbę: ";
    cin >> x;
    cout << "\nPodaj drugą liczbę: ";
    cin >> y;

    switch (a)
    {
    case '+':
        wynik = x + y;
        cout << "Wynik dodawania: " << wynik;
        break;
    case '-':
        wynik = x - y;
        cout << "Wynik odejmowania: " << wynik;
        break;
    case '*':
        wynik = x * y;
        cout << "Wynik mnożenia: " << wynik;
        break;
    case '/':
        wynik = x / y;
        cout << "Wynik dzielenia: " << wynik;
        break;
    case '^':
        wynik = pow(x, y);
        cout << "Wynik potęgowania: " << wynik;
        break;
    
    default:
        cout << "Wybierz poprawną operację!";
        break;
    }





}
