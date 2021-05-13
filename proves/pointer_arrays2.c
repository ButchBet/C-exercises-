#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 1 */
#define TABLES  2
#define ROWS    5
#define COLS    2

/* 2 */
int main()
{
    /* 3 */
    int array[TABLES][ROWS][COLS];

    /* Fill the array with random elements */
    srand(time(NULL));

    for(int i = 0; i < TABLES; i++){
        for(int j = 0; j < ROWS; j++){
            for(int k = 0; k < COLS; k++){
                array[i][j][k] = rand()%(99)+1;
            }
        }
    }

    /* Show the array with nested loop and index */
    for(int i = 0; i < TABLES; i++){
        for(int j = 0; j < ROWS; j++){
            for(int k = 0; k < COLS; k++){
                printf("(%lu, %lu, %lu): %i.\n", (unsigned long) i, (unsigned long) j, (unsigned long) k, array[i][j][k]);
            }
        }
    }

    printf("\n\n\n");

    /* pointer to the first "table" level - array is 3-d but decays into 2-d giving out int (*)[5][2] */
    /* name your variables meaningully */
    int (*table_ptr)[ROWS][COLS] = array;  /* try to club up declaration with initialization when you can */
    /* 4 */
    size_t i = 0, j = 0, k = 0;
    for (i = 0; i < TABLES; ++i)
    {
        /* pointer to the second row level - *table_ptr is a 2-d array which decays into a 1-d array */
        int (*row_ptr)[COLS] = *table_ptr++;
        for (j = 0; j < ROWS; ++j)
        {
            /* pointer to the third col level - *row_ptr is a 1-d array which decays into a simple pointer */
            int *col_ptr = *row_ptr++;
            for (k = 0; k < COLS; ++k)
            {
                printf("(%lu, %lu, %lu): %u\n", (unsigned long) i, (unsigned long) j, (unsigned long) k, *col_ptr++);  /* dereference, get the value and move the pointer by one unit (int) */
            }         
        }
    }
    return 0;   /* report successful exit status to the platform */
}