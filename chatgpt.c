/*
You have been hired to assist firefighters locate wildfires in a large geographic area. The area is divided into smaller zones. Each zone is scanned via satellite for its average temperature. If a zone has an average temperature strictly greater than 1000°F, we assume there is a fire in that zone. If the temperature is between 100 degrees (included) and 1000 degrees (included), we have to further investigate, so it becomes a "zone to watch."

The large geographic area you are watching is a rectangle with a certain length and width, each given in terms of zones. For example, if the area to be scanned  has a length of 6 and width of 9 then it will be divided into 6*9 zones:

----length = 6----
[ ][ ][ ][ ][ ][ ]   |
[ ][ ][ ][ ][ ][ ]   w
[ ][ ][ ][ ][ ][ ]   i
[ ][ ][ ][ ][ ][ ]   d
[ ][ ][ ][ ][ ][ ]   t
[ ][ ][ ][ ][ ][ ]   h
[ ][ ][ ][ ][ ][ ]   =
[ ][ ][ ][ ][ ][ ]   9
[ ][ ][ ][ ][ ][ ]   |
Because your program will be used for a variety of geographic areas (each with its own length and width) your program needs to dynamically allocate the memory for the number of zones it is to handle (vertically and horizontally).

To do so, you must use the two following functions without changing the code in them:

int ** allocateIntStarArray(int num){
    int ** ptr = (int **) malloc(num * sizeof(int *));
    return ptr;
}
int * allocateIntArray(int num){
    int * ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}
The function allocateIntArray() will be used to allocate the space required to store the average temperatures in one row of zones, that is, an array of integers. The function therefore returns a pointer to such an array of integers.

The function allocateIntStarArray() will be used to allocate an array of pointers, each of which will store a pointer to a row of integers (temperatures of zones). That is, the function returns a pointer to an array of pointers. Each cell of this array will point to an array of integers containing the temperature values for the zones.

The inputs of the program are first the length, then the width of an area, then the average temperatures of all zones, row by row.

Please remember to free the memory you have allocated.

The output should pinpoint the possible zones with fires with [X] and the watch zone with a [*], the other zone are displayed with [ ].

Look at the example at the bottom and make sure to format your output in the exact same way.

Input:

6
9
70   71   70   72   70   69
71   73   68   71   73   72
70   71   70   76   1900 78
69   71   100  800  75   71
70   70   71   79   70   69
70   71   112  1005 75   72
70   71   70   900  70   70
72   70   70   72   70   69
73   74   73   72   70   70
Output:

[ ][ ][ ][ ][ ][ ]
[ ][ ][ ][ ][ ][ ]
[ ][ ][ ][ ][X][ ]
[ ][ ][*][*][ ][ ]
[ ][ ][ ][ ][ ][ ]
[ ][ ][*][X][ ][ ]
[ ][ ][ ][*][ ][ ]
[ ][ ][ ][ ][ ][ ]
[ ][ ][ ][ ][ ][ ]
*/

/*
Based on your requirements, we need to write a C program that dynamically allocates memory to store average temperatures for different zones in a large geographic area. The program will identify zones with potential fires ([X] for temperatures > 1000°F) and zones to watch ([*] for temperatures between 100°F and 1000°F).

Steps to Implement the Solution
Memory Allocation:

Use allocateIntStarArray(int num) to create an array of pointers for each row.
Use allocateIntArray(int num) to allocate an array of integers for each row (representing temperatures in that row).
Input Reading:

First, read the dimensions of the area (length and width).
Then, read the average temperatures for each zone in the area.
Processing Zones:

For each temperature, classify it as a fire zone [X], a watch zone [*], or a safe zone [ ] based on its value.
Output Formatting:

Print the zone classifications in a grid format as specified.
Memory Deallocation:

Free each row's memory and then the memory allocated for the array of pointers.
*/

#include <stdio.h>
#include <stdlib.h>

// Provided functions for memory allocation
int **allocateIntStarArray(int num){
    int **ptr = (int **) malloc(num * sizeof(int *));
    return ptr;
}

int *allocateIntArray(int num){
    int *ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}

int main() {
    int length, width;

    // Step 1: Read dimensions of the area
    scanf("%d %d", &length, &width);

    // Step 2: Allocate memory for the 2D array
    int **temperatureGrid = allocateIntStarArray(width);
    for (int i = 0; i < width; i++) {
        temperatureGrid[i] = allocateIntArray(length);
    }

    // Step 3: Read the average temperatures for each zone
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < length; j++) {
            scanf("%d", &temperatureGrid[i][j]);
        }
    }

    // Step 4: Process and print the zones
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < length; j++) {
            if (temperatureGrid[i][j] > 1000) {
                printf("[X]");
            } else if (temperatureGrid[i][j] >= 100) {
                printf("[*]");
            } else {
                printf("[ ]");
            }
        }
        printf("\n");
    }

    // Step 5: Free allocated memory
    for (int i = 0; i < length; i++) {
        free(temperatureGrid[i]);
    }
    free(temperatureGrid);

    return 0;
}

/*
Explanation of the Code
Memory Allocation:

temperatureGrid is a 2D array where each element is a pointer to an integer array representing a row of temperatures.
allocateIntStarArray(length) creates an array of length pointers to int *.
allocateIntArray(width) creates an array of integers of size width for each row.
Reading Input:

The program reads the length and width first.
Then it reads each temperature into the allocated 2D array (temperatureGrid).
Processing and Output:

For each temperature in the grid, the program checks its value and prints [X], [*], or [ ] accordingly.
The output is formatted to match the exact requirement with each row of the grid printed on a new line.
Memory Deallocation:

Each row's memory is freed with free(temperatureGrid[i]).
Finally, the memory for the array of pointers (temperatureGrid) itself is freed with free(temperatureGrid).
*/

/*
#include <stdio.h>
#include <stdlib.h>

int ** allocateIntStarArray(int num){
	int ** ptr = (int **) malloc(num * sizeof(int *));
	return ptr;
}

int * allocateIntArray(int num){
	int * ptr = (int *) malloc(num * sizeof(int));
	return ptr;
}

int main(void)
{
    int line, col;
    scanf("%d",&col);
    scanf("%d",&line);
    int ** matrix = allocateIntStarArray(line);
    for(int i = 0; i < line; i++){
     matrix[i] = allocateIntArray(col);
    }


    for(int i = 0; i < line; i++){
        for(int j = 0; j < col; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

     for(int i = 0; i < line; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j]>1000){
                printf("[X]");
            }else{
                if(matrix[i][j]>=100){
                printf("[*]");
                }else{
                printf("[ ]");
                }
            }
           
        }
        printf("\n");
    }
   

    return 0;
}
*/