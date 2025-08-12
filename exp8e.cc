//exp8e.cc
//Transpose 

#include<iostream>
using namespace std ;

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
    //logic for transpose 
    int transpose_matrix[c1][r1];

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            transpose_matrix[j][i] = matrix_1[i][j];
        }
    }
    cout << "\nThe transpose of the matrix is:\n";
    for (int i = 0; i < c1; ++i) {
        for (int j = 0; j < r1; ++j) {
            cout << transpose_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0 ;
    }

 /*
    
    Output 
    
Enter the number of rows for the matrix_1: 3
Enter the number of columns for the matrix_1: 3
Enter the elements for the matrix . 
Enter element at position [0][0]:1
Enter element at position [0][1]:2
Enter element at position [0][2]:3
Enter element at position [1][0]:4
Enter element at position [1][1]:5
Enter element at position [1][2]:6
Enter element at position [2][0]:7
Enter element at position [2][1]:8
Enter element at position [2][2]:9
The matrix you entered is:
1 2 3 
4 5 6 
7 8 9 

The transpose of the matrix is:
1 4 7 
2 5 8 
3 6 9 

*/