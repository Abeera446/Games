#include <iostream>
using namespace std;

bool row(int sudoku[9][9]);
bool col(int sudoku[9][9]);
bool subgrid(int sudoku[9][9]);

int main() {
    int i, j;
    cout << "Enter your Sudoku Board:" << endl;
    int sudoku[9][9];
    for (i=0; i<9; i++) {
        for (j=0; j<9; j++) {
            cin >> sudoku[i][j];
        }
    }

    if (row(sudoku) && col(sudoku) && subgrid(sudoku))
        cout << "Your board is valid!";
    else
        cout << "Hence, your board is not valid!";

    return 0;
}

bool row(int sudoku[9][9]) {
    int i, j, num;
    for (i=0; i<9; i++) 
    {
        bool checker[10]={false}; //array that will store values and detect duplicates. initialize to 'false' for each row
        for (j=0; j<9; j++) 
        {
            num= sudoku[i][j]; //extract the value into a variable num
            if (checker[num])  //if that value has already occurred, return false (the row is invalid)
            {
                cout << "Row " << i+1 << " has a duplicate at the coordinate [" << i+1 << "][" << j+1 << "]" << endl;
                return false;
            }
            checker[num]=true; //else if it hasn't occurred already, make it true so that if it occurs again, we'll know
        }
    }
    return true; //if all rows were valid, return true
}

bool col(int sudoku[9][9]) {
    int i, j, num;
    for (i=0; i<9; i++) 
    {
        bool checker[10]={false};
        for (j=0; j<9; j++) 
        {
            num= sudoku[j][i]; //just this change for moving column wise
            if (checker[num]) {
                cout << "Column " << j+1 << " has a duplicate at the coordinate [" << j+1 << "][" << i+1 << "]" << endl;
                return false;
            }
            checker[num]=true;
        }
    }
    return true;
}

bool subgrid(int sudoku[9][9]) {
    for (int row=0; row<9; row+=3) 
    {
        for (int col=0; col<9; col+=3)  //here, row and col are the outer loops that take us to the next subgrid
        {
            bool checker[10]={false};
            for (int i=0; i<3; i++) 
            {
                for (int j=0; j<3; j++)  //here, i and j check for duplicates inside each 3x3 subgrid
                {
                    int num=sudoku[row+i][col+j];
                    if (checker[num]) 
                    {
                        cout << "Subgrid " << i+1 << " has a duplicate at the coordinate [" << i+1 << "][" << j+1 << "]" << endl;
                        return false;
                    }
                    checker[num]=true;
                }
            }
        }
    }
    return true;
}