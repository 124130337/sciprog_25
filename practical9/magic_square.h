#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative, i.e. if n is negative: do nothing and exit from the function (output 0)
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j;
    // TODO: Checking that every row and column add up to M
    for(i=0; i<n; i++){
	    int row_sum=0;
	    int col_sum=0;
	    for (j=0; j<n; j++){
		    row_sum += square[i][j];
		    col_sum += square[i][j];

	    }
	    if(row_sum !=M || col_sum !=M) return 0;
    }


    // TODO: Checking that the main and secondary
    // diagonals each add up to M
    // If passed all checks, it is a magic square

    int diag_sum = 0;
    int sec_diag_sum = 0;
    for (i=0; i<n; i++){
	    diag_sum += square[i][i];
	    sec_diag_sum += square[i][n-i-1];
    }
    //if it passes all checks then it's a magic square

    return 1;
}

