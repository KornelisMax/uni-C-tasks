#include <stdio.h>

int main()
{
    //define data
    int A[100][100];
    int i, j, N;
    int rowsum, columnsum, diagonalsum;
    //enter number of rows/columns
	printf("Enter the order of the matrix:\n");
    scanf("%d",  &N);
    int count = 0;
        //enter numbers
        printf("Enter the elements of matrix \n");
            for(i=0; i<N; i++)
            {
                    for(j=0; j<N; j++)
                    {
                        scanf("%d", &A[i][j]);
                    }
             }

//		printf("\n\nMATRIX  is\n");
//                for(i=0; i<N; i++)
//                {
//                    for(j=0; j<N; j++)
//                    {
//                        printf("%3d\t", A[i][j]);
//			        }
//
//                printf("\n");
//		        }

//		 calculate diagonal sum
		for(i=0; i<N; i++) {
		    diagonalsum = 0;
			for(j=0; j<N; j++)
			{
				if(i==j) {
					diagonalsum = diagonalsum + A[i][j];
                        }
            }
		}

//       calculate row sum
		for(i=0; i<N; i++) {
			rowsum = 0;
			for(j=0; j<N; j++) {
				rowsum = rowsum + A[i][j];
			}
			if(rowsum != diagonalsum) {
				count++;

    			}
		}

//       calculate column sum
		for(i=0; i<N; i++) {
                columnsum = 0;
			for(j=0; j<N; j++) {
				columnsum =  columnsum + A[j][i];
			}
			if(columnsum != diagonalsum) {
				count++;
			}
			 }

if(count>0){
printf("Matrix is not a magic square \n");
}

else
{
printf("Matrix is a magic square\n");
}
return 0;
		}















