//exp8a 
//multidimensional array 
//take matrix input from user and dispaly it 

#include<iostream>
using namespace std ;

int main(){
    int matrix [3][3];
    cout<<"Enter the elements of a 3x3 matrix. \n";

    for (int i =0; i<3; ++i){   //for taking each element as input at positions defined by i and j 
        for(int j=0;j<3;++j){
            cout<<"Enter element at position [" <<i<<"]["<<j<<"]:";
            cin>>matrix[i][j];
        }
    }
    cout << "The matrix you entered is:\n"; //displaying the matrix 
    for (int i = 0; i < 3; ++i) {      
        for (int j = 0; j < 3; ++j) {  
            cout << matrix[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}

/*  
 Output 
 
Enter the elements of a 3x3 matrix. 
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

*/