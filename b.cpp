#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void calculateAndDisplayDiet(int day, double feed)
{
    double max = 35 - feed;
    double min;

    switch (day)
    {
    case 0:
        min = 12.5;
        break;
    case 1:
        min = 12.5;
        break;
    case 2:
        min = 16.5;
        break;
    case 3:
        min = 12.5;
        break;
    case 4:
        min = 12.5;
        break;
    case 5:
        min = 16.5;
        break;
    case 6:
        min = 16.5;
        break;
    }

    if (min + feed > 35)
    {
        cout << "Ralphie was fed too much yesterday!";
        return;
    }

    cout << "Ralphie should be fed at least " << min << " and at most " << max << " MCals of food today.";
}

int main()
{

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    double yesterday;
    int day;
    cout << "What day is it today? Enter a number from 0 to 6:" << endl;
    cin >> day;

    if (day > 6 || day < 0)
    {
        cout << "Invalid input!" << endl;
        return 0;
    }
    cout << "How much was Ralphie fed yesterday? Enter an amount in MCals:" << endl;
    cin >> yesterday;

    if (yesterday < 0)
    {
        cout << "Invalid input!" << endl;
        return 0;
    }
    calculateAndDisplayDiet(day, yesterday);
}