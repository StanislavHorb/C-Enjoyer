//Программа демонстрирует объявление и инициализацию переменных
#include <iostream>
using namespace std;
int main() {
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;
    short lives, aliensKilled;
    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    double engineTemp = 6571.89;
    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "play Again: " << playAgain << endl;
    // shieldsUp пропускаем, поскольку булевы значения
    // как правило на экран не выводится
    cout << "lives: " << lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;
    int fuel;
    fuel = 100;
    cout << "How much fuel? " << fuel << endl;
    cin >> fuel;
    cout << "fuel: " << fuel << endl;
    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;
    return 0;
}