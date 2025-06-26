#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int friends, bottles, litres_of_drink, limes, slices, salt, req_drink, req_salt, total_drinks, possible_toasts, possible_toasts_lime, possible_toasts_salt;
    cin >> friends >>  bottles >> litres_of_drink >> limes >> slices >> salt >> req_drink >> req_salt;

    total_drinks = bottles * litres_of_drink;
    possible_toasts = total_drinks / req_drink;
    possible_toasts_lime = limes * slices;
    possible_toasts_salt = salt / req_salt;

    int minimum = min({possible_toasts, possible_toasts_lime, possible_toasts_salt});

    minimum /= friends;

    cout << minimum << endl;
}