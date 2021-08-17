/*	HACKERRANK QUESTION - QUALCOMM
 * Complete the 'entryTime' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING keypad
 
 KEYPAD :	
 9 		2		5
 8		3		7
 6		1		4
 
 INPUT CODE : 4 2 5 6 9 2
 
 ADJACENT KEYS : UP, DOWN, RIGHT, LEFT, DIAGONAL ALSO -> E.G. 1, 3, & 7 are adjacent to 4 
 NON-ADJACENT KRYS : REMAINING KEYS -> 9, 2, 5, 8, 6 are non-adjacet keys to 4
 
 TIME TAKEN TO PRESS ADJACENT KEYS = 1s 
 TIME TAKEN TO PRESS NON-ADJACENT KEYS = 2s 
 
 CALCULATE TIME NEEDED TO PRESS KEYS : 4 2 5 6 9 2
 
 OUTPUT : 
 4->2 = 2s
 2->5 = 1s
 5->6 = 2s
 6->9 = 2s
 9->2 = 1s
 
 TOTAL = 8s
 */

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

int a[3][3];

void pos(int v, int* x, int* y)
{	int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {   
            if(a[i][j]== v)
            {
                *x = i; *y = j;
                printf(" %d : (%d, %d)\n", v, *x, *y);
                return;
            }
            //printf("\t%d", a[i][j]);
        }
        //printf("\n");
    }
    
    return;
}

int dist(int o, int p)
{
    int x1, y1, x2, y2;
    pos(o, &x1, &y1);
    pos(p, &x2, &y2);
    
    int d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    
    return d;
}

int entryTime(char* s, char* keypad) {

    printf("s = %s \n", s);
    printf("kpd = %s \n", keypad);
    
    int l = strlen(s);
    
    int m = atoi(s);
    int k = atoi(keypad);
    
    printf("s_l = %d \n", l);
    printf("s_m = %d \n", m);
    printf("k = %d \n", k);
    
    
    int i, j;
    for(i=2; i>=0; i--)
    {
        for(j=2; j>=0; j--)
        {
            a[i][j] = k%10;
            k/=10;
        }
    }
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    
    printf("NEXT\n");
    
    int c; // = l-1;
    int w = m;
    int* b = &w;
    int* g = NULL; 
    g = b;
    
//	*b = w%10;
//    printf("*b = %d,\t", (*b));
//    w/=10;
   
    //while(c)
    for(c = l; c > 0; c--)
    {
    	*b = m%10;
    	printf("(*b) = %d,\t", (*b));
    	m/=10;
    	printf("w = %d,\n", m);
    	//c--;
    	b++;
	}
	
	printf("\nNEXT\n");
	
    b=g;
    
	for(c = 0; c < l; c++)
    {
    	printf("%d,\t", (*b));
    	b++;
	}
	
	printf("\n");
	
	printf("NEXT\n");
    
    int f = pow(10, c);
//    while(c)
//    {
//    	f*=10;
//	}

//    int q = m / f;
//    m/=10;
//    int r = 0;
//    c--;
//    while(c)
//    { 	r = m / f;
//    	printf(" q = %d, r = %d, f = %d, c = %d \t\t", q, r, f, c);
//    	printf("dist(%d, %d) %d\n", dist(q, r));
//    	c--;
//    	m/=10;
//    	q=r;
//    	
//	}
    
    //printf("d(4, 9) %d\n", dist(4, 9));
     
    return 0;
}

int main()
{
    //FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    //char* s = readline();

    //char* keypad = readline();
    
    char* s = "425692";

    char* keypad = "925837614";

    int result = entryTime(s, keypad);

    //fprintf(fptr, "%d\n", result);

    //fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}
