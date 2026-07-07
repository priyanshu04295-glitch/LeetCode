int* getRow(int rowIndex, int* returnSize) {
    int* row = (int*)malloc((rowIndex + 1) * sizeof(int));

    *returnSize = rowIndex + 1;

    for(int i = 0; i <= rowIndex; i++) {
        row[i] = 1;

        for(int j = i - 1; j > 0; j--) {
            row[j] = row[j] + row[j - 1];
        }
    }

    return row;
}