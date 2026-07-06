int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    
    int **ans = malloc(numRows * sizeof(int*));
    *returnColumnSizes = malloc(numRows * sizeof(int));
    *returnSize = numRows;

    for(int i = 0; i < numRows; i++) {
        
        ans[i] = malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1;

        for(int j = 0; j <= i; j++) {
            
            if(j == 0 || j == i)
                ans[i][j] = 1;
            else
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
    }

    return ans;
}