//exp8b 
//multidimensional array 
//addition of two matrix 

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
    cout<<"Addition of the matrix.\n"; 
    for (int i = 0; i < r2; ++i) {      // here in limits ,you can put anything r1,r2 or c1,c2 because it's an addition operation 
        for (int j = 0; j < c2; ++j) {  
            cout << matrix_1[i][j]+ matrix_2[i][j] << " "; //adding the two matrix 
        }
        cout << endl; 

    }
    return 0;
  
}

/* 
Output 

Enter the number of rows for the matrix_1: 2
Enter the number of columns for the matrix_1: 2
Enter the number of rows for the matrix_2: 1
Enter the number of columns for the matrix_2: 3
Enter the elements for first 3x3 matrix . 
Enter element at position [0][0]:1
Enter element at position [0][1]:2
Enter element at position [1][0]:3
Enter element at position [1][1]:4
The matrix you entered is:
1 2 
3 4 
Enter the elements for second 3x3 matrix . 
Enter element at position [0][0]:1
Enter element at position [0][1]:2
Enter element at position [0][2]:3
The matrix you entered is:
1 2 3 
Addition of the matrix.
2 4 6 

*/

