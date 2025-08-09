#include <iostream>
using namespace std;

void moveDisks(int n, int fromPeg, int toPeg, int tempPeg) {
    if (n==1) {
        cout << fromPeg << " --> " << toPeg << endl;
        return;
    }

    // Move n-1 disks from fromPeg to tempPeg using toPeg
    moveDisks(n-1, fromPeg, tempPeg, toPeg);

    // Move largest disk from fromPeg to toPeg
    cout << fromPeg << " --> " << toPeg << endl;

    // Move n-1 disks from tempPeg to toPeg using fromPeg
    moveDisks(n-1, tempPeg, toPeg, fromPeg);
}

int main() {
    int n;
    cout << "---Towers of Hanoi---" << endl;
    cout << "Enter no. of disks:";
    cin >> n;
    cout << "Solution:" << endl;
    moveDisks(n, 1, 3, 2);
    return 0;
}
