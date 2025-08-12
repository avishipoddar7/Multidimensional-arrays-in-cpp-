//exp8f
//compare elements of first row to the second row 

#include <iostream>
using namespace std;

int main(){
    int r1,c1;

    cout << "Enter the number of rows for the matrix_1: "; //for matrix 1 
    cin >> r1;
    cout << "Enter the number of columns for the matrix_1: ";
    cin >> c1;
    
    int matrix_1 [r1][c1]; //c is for column  
    cout<<"Enter the elements for the matrix . \n";

    for (int i =0; i<r1; ++i){   //for taking each element as input at positions defined by i and j 
        for(int j=0;j<c1;++j){
            cout<<"Enter element at position [" <<i<<"]["<<j<<"]:";
            cin>>matrix_1[i][j];
        }
    }
    cout << "The matrix you entered is:\n"; //displaying the matrix 
    for (int i = 0; i < r1; ++i) {      
        for (int j = 0; j < c1; ++j) {  
            cout << matrix_1[i][j] << " ";
        }
        cout << endl; 
    }
    bool isSymmetric = true;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            //compairing the elements 
            if (matrix_1[i][j] != matrix_1[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }
    cout << "\nThe matrix you entered is:\n";
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << matrix_1[i][j] << "\t";
        }
        cout << endl;
    }

    if (isSymmetric) {
        cout << "\nResult: The matrix is symmetric.\n";
    } else {
        cout << "\nResult: The matrix is NOT symmetric.\n";
    }
}

/*
Output  1
Enter the number of rows for the matrix_1: 2
Enter the number of columns for the matrix_1: 2
Enter the elements for the matrix . 
Enter element at position [0][0]:1
Enter element at position [0][1]:4
Enter element at position [1][0]:8
Enter element at position [1][1]:12
The matrix you entered is:
1 4 
8 12 

The matrix you entered is:
1       4
8       12

Result: The matrix is NOT symmetric.

Output 2 
Enter the number of rows for the matrix_1: 2
Enter the number of columns for the matrix_1: 2
Enter the elements for the matrix . 
Enter element at position [0][0]:1
Enter element at position [0][1]:1
Enter element at position [1][0]:1
Enter element at position [1][1]:1
The matrix you entered is:
1 1 
1 1 

The matrix you entered is:
1       1
1       1

Result: The matrix is symmetric.


*/
