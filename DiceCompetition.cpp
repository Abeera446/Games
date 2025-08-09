#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {

    string name1, name2;
    int target, rounds, i=0, roll1, roll2, roll3, roll4, total1=0, total2=0, count1=0, count2=0;
    srand(time(0));  //for randomly generated dice rolls

    cout << "Player 1, enter your name:";
    cin >> name1;
    cout << "Player 2, enter your name:";
    cin >> name2;

    cout << "Enter your target:";
    cin >> target;
    cout << "Enter number of rounds:";
    cin >> rounds;

    for (i=1; i<=rounds; i++) {

        cout << "-----Round " << i << "-----" << endl;

        roll1= 1+rand()%6; roll2= 1+rand()%6;
        cout << name1 << " rolled a " << roll1 << " and a " << roll2 << "! ";
        total1= roll1+roll2;
        cout << "Total: " << total1 << endl;
        if (total1==target)
            count1 = count1+1;

        roll3= 1+rand()%6; roll4= 1+rand()%6;
        cout << name2 << " rolled a " << roll3 << " and a " << roll4 << "! ";
        total2= roll3+roll4;
        cout << "Total: " << total2 << endl;
        if (total2==target)
            count2 = count2+1;
    }

    cout << "-----Final Scores-----" << endl;

    cout << name1 << ": " << count1 << " hit(s)" << endl;
    cout << name2 << ": " << count2 << " hit(s)" << endl;

    if (count1>count2)
        cout << name1 << " wins!";
    else if (count2>count1)
        cout << name2 << " wins!";
    else if (count1==count2)
        cout << "It's a tie!";

    return 0;
}