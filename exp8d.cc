//exp8d
//multidmensional array 
//diagonal addition 

//compare elemnts of first row to the second row 


#include <iostream>
using namespace std;

int main() {
    int r, c; // r - rows, c-columns 
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    // Sum of diagonals is only possible in a sqaure matrix 
    // For the code to be excuted , rows=columns 
    if (r!= c) {
        cout << "\nError: A diagonal sum can only be calculated for a square matrix." << endl;
        cout << "Please enter the same number for rows and columns." << endl;
        return 1; // Exit the program with an error
    }

    // --- 3. Create and Fill the Matrix ---
   int matrix[r][c];

    cout << "\nEnter the elements of the " << r << "x" << c << " matrix:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    // --- 4. Display the Matrix for Verification ---
    cout << "\nThe matrix you entered is:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // --- 5. Calculate the Sum of the Main Diagonal ---
    int diagonal_sum = 0;
    // We only need a single loop since we are accessing matrix[i][i]
    for (int i = 0; i < r; ++i) {
        diagonal_sum += matrix[i][i];
    }

    // --- 6. Print the Final Result ---
    cout << "\nSum of the main diagonal is: " << diagonal_sum << endl;

    return 0;
}

/*

output 

Enter the number of rows: 2
Enter the number of columns: 2

Enter the elements of the 2x2 matrix:
Enter element [0][0]: 1
Enter element [0][1]: 2
Enter element [1][0]: 3
Enter element [1][1]: 4

The matrix you entered is:
1       2
3       4

Sum of the main diagonal is: 5

*/
