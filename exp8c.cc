//exp8c
//multidimensional array 
//multiplication 

#include<iostream>
using namespace std ;

int main(){
    int r1,r2,c1,c2;

    cout << "Enter the number of rows for the matrix_1: "; //for matrix 1 
    cin >> r1;
    cout << "Enter the number of columns for the matrix_1: ";
    cin >> c1;

    cout << "Enter the number of rows for the matrix_2: "; //  for matrix 2 
    cin >> r2;
    cout << "Enter the number of columns for the matrix_2: ";
    cin >> c2;

    //conditon to be satisfied for multiplication is r2=c1
    if (c1 != r2) {
    cout << "\nError: Multiplication not possible.\n";
    return 1; // Stop the program
    }

    int matrix_1 [r1][c1]; //c is for column  
    int matrix_2 [r2][c2]; //r is for rows 

    cout<<"Enter the elements for first  matrix . \n";

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
     cout<<"Enter the elements for second matrix . \n";

    for (int i =0; i<r2; ++i){   //for taking each element as input at positions defined by i and j 
        for(int j=0;j<c2;++j){
            cout<<"Enter element at position [" <<i<<"]["<<j<<"]:";
            cin>>matrix_2[i][j];
        }
    }
    cout << "The matrix you entered is:\n"; //displaying the matrix 
    for (int i = 0; i < r2; ++i) {      
        for (int j = 0; j < c2; ++j) {  
            cout << matrix_2[i][j] << " ";
        }
        cout << endl; 
    }
    
//  Create a new matrix for the result, initialized to 0.
//  The result matrix has r1 rows and c2 columns.
// doing this because the code will multiply elemts in same position but we need it to perform multiplication in rows and columns 
int result_matrix[r1][c2];
for(int i = 0; i < r1; ++i) {
    for(int j = 0; j < c2; ++j) {
        result_matrix[i][j] = 0;
    }
}

//  Calculate the dot product using three nested loops.
for (int i = 0; i < r1; ++i) {
    for (int j = 0; j < c2; ++j) {
        for (int k = 0; k < c1; ++k) { // c1 and r2 are the same here
            result_matrix[i][j] += matrix_1[i][k] * matrix_2[k][j];
        }
    }
}

// Print the final, correct result from the new matrix.
cout << "\nMultiplication of the matrix is:\n";
for (int i = 0; i < r1; ++i) {
    for (int j = 0; j < c2; ++j) {
        cout << result_matrix[i][j] << " ";
    }
    cout << endl;
}
return 0 ; 
}
  
/*
  Output 

  Enter the number of rows for the matrix_1: 2
Enter the number of columns for the matrix_1: 2
Enter the number of rows for the matrix_2: 2
Enter the number of columns for the matrix_2: 2
Enter the elements for first  matrix . 
Enter element at position [0][0]:1
Enter element at position [0][1]:2
Enter element at position [1][0]:3
Enter element at position [1][1]:4
The matrix you entered is:
1 2 
3 4 
Enter the elements for second matrix . 
Enter element at position [0][0]:5
Enter element at position [0][1]:6
Enter element at position [1][0]:7
Enter element at position [1][1]:8
The matrix you entered is:
5 6 
7 8 

Multiplication of the matrix is:
19 22 
43 50  
*/

