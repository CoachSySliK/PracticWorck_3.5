#include <iostream> // практическая работа, урок 3

using namespace std;

int main()
{
    string station[4] = { "\"Детский_мир\"", "\"Аграрный_колледж\"", "\"Больница\"", "\"Бассейн\"" }; //изменить коэффициент при изменении количества остановок

    int priceTicket = 20;
    int deltaHuman;
    int totalHuman = 0;
    int totalBalance = 0;
    int numderStation = 0;

    do {
        cout << "Внимание! Остановка " << station[numderStation] << endl;
        numderStation++;
        cout << "В салоне " << totalHuman << " пассажиров" << endl;

        if (totalHuman > 0) { //проверка что в машине есть пассажиры
            cout << "Сколько пассажиров вышло на остановке? ";
            cin >> deltaHuman;
            totalHuman -= deltaHuman;
            if (totalHuman < 0) { //проверка если вышло людей больше чем было в автобусе
                totalHuman += deltaHuman;
                int hare;
                hare = deltaHuman - totalHuman;
                cout << "ВНИМАНИЕ! Проехало " << hare << " зайцев!\n";
                totalHuman = 0;
            }
            
        }

        cout << "Сколько пассажиров село в автобус? ";
        cin >> deltaHuman;
        totalHuman += deltaHuman;
        totalBalance += deltaHuman * priceTicket;
                
        cout << "В кассе " << totalBalance << " рублей." << endl;
    } while (numderStation < 4); //изменить коэффициент при изменении количества остановок
    
    cout << "---------------------\n";
    cout << "Автобус дальше не пойдёт. Просьба пассажирам покинуть салон. Приносим свои извенения.\n";
    cout << "---------------------\n";
    cout << "Всего заработали: " << totalBalance << endl;
    cout << "Зарплата водителю: " << totalBalance/4 << endl;
    cout << "Расходы на топливо: " << totalBalance/5 << endl;
    cout << "Налоги: " << totalBalance/5 << endl;
    cout << "На ремонт: " << totalBalance/5 << endl;
    cout << "---------------------\n";
    totalBalance -= (totalBalance / 4 + totalBalance / 5 * 3);
    cout << "Чистой прибыли: " << totalBalance << endl;

    return 0;
}