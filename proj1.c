#include <stdio.h>
#include <stdlib.h> 
#define p 4

int main(void) 

{
	int negativeProduct = 1;
    int sLength = 0;
    int i, j;
    int k = 0;
	
	
    int A[p][p] = {{-5, 4, 6, -10},
                  {3, -7, 8, 5},
                  {-4, -8, 1, -4},
                  {4, 3, -3, -7}
                 };

    
    
    
    for (i = 0; i < p; i++) {
        if (A[i][i] < 0) {
            negativeProduct *= A[i][i];
            sLength++; 
        }
    }

   
    int *S = (int *)malloc(sLength * sizeof(int));
    if (S == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }


    for (i = 0; i < p; i++) {
        if (A[i][i] < 0) {
            S[k] = A[i][i];
            k++;
        }
    }

    //(bubble sort)
    for (i = 0; i < sLength - 1; i++) {
        for (j = 0; j < sLength - i - 1; j++) {
            if (S[j] < S[j + 1]) {
                int temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
            }
        }
    }

    printf("The product of the negative elements on the main diagonal is: %d\n"\
    , negativeProduct);
    printf("Negative values in ascending order S: ");
    for (i = 0; i < sLength; i++) {
        printf("%d ", S[i]);
    }
    
    free(S);
    
  printf("Funny meme bro");

    return 0;
}
