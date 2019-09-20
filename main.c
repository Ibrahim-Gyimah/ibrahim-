//ADDITION OF TWO MATRIX
/*#include <stdio.h>

int main()
{
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    printf("Enter the elements of second matrix\n");

    for (c = 0; c < m; c++)
        for (d = 0 ; d < n; d++)
            scanf("%d", &second[c][d]);

    printf("Sum of entered matrices:-\n");

    for (c = 0; c < m; c++) {
        for (d = 0 ; d < n; d++) {
            sum[c][d] = first[c][d] + second[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }

    return 0;
}
*/



//MULTIPLICATION OF TWO MATRICES

/*#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;

    printf("\nEnter the matrix elements of A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the matrix elements of B\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    printf("\nProduct of two matrix is:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n\n");
    }

    return 0;
}
*/



/* C Program to Subtract Two Matrices */

/*#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], b[10][10];
    int Subtraction[10][10];

    printf("\n Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &i, &j);

    printf("\n Please Enter the First Matrix Elements\n");
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0;columns < j;columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }

    printf("\n Please Enter the Second Matrix Elements\n");
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0;columns < j;columns++)
        {
            scanf("%d", &b[rows][columns]);
        }
    }

    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0;columns < j;columns++)
        {
            Subtraction[rows][columns] = a[rows][columns] - b[rows][columns];
        }
    }

    printf("\n After Subtracting Matrix a from Matrix b = a - b \n");
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0; columns < j; columns++)
        {
            printf("%d \t ", Subtraction[rows][columns]);
        }
        printf("\n");
    }
    return 0;
}
 */


//inverse of matrices
/*#include<stdio.h>

int main(){

    int a[3][3],i,j;
    float determinant=0;

    printf("Enter the 9 elements of matrix: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("\nThe matrix is\n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
    }

    for(i=0;i<3;i++)
        determinant = determinant + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));

    printf("\nInverse of matrix is: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%.2f\t",((a[(i+1)%3][(j+1)%3] * a[(i+2)%3][(j+2)%3]) - (a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/ determinant);
        printf("\n");
    }

    return 0;
}
*/




//WAP TO DELETE ELEMENTS OF AN ARRAY
/*#include <stdio.h>

int main()
{
    int array[100], position, c, n;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position);

    if (position >= n+1)
        printf("Deletion not possible.\n");
    else
    {
        for (c = position - 1; c < n - 1; c++)
            array[c] = array[c+1];

        printf("Resultant array:\n");

        for (c = 0; c < n - 1; c++)
            printf("%d\n", array[c]);
    }

    return 0;
}
*/

//WAP TO SEARCH  ELEMENTS IN  AN ARRAY USING LINEAR SEARCH
/*#include <stdio.h>

int main()
{
    int array[100], search, c, n;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d integer(s)\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter a number to search\n");
    scanf("%d", &search);

    for (c = 0; c < n; c++)
    {
 /*       if (array[c] == search)    /* If required element is found */
/*        {
            printf("%d is present at location %d.\n", search, c+1);
            break;
        }
    }
    if (c == n)
        printf("%d isn't present in the array.\n", search);

    return 0;
}

*/



//WAP TO SEARCH ELEMENTS IN AN ARRAY USING BINARY SEARCH
/*#include <stdio.h>

int main()
{
    int c, first, last, middle, n, search, array[100];

    printf("Enter number of elements\n");
    scanf("%d",&n);

    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
        scanf("%d",&array[c]);

    printf("Enter value to find\n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while (first <= last) {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search) {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last)/2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}
 */




/* Bubble sort code */

/*#include <stdio.h>

int main()
{
    int array[100], n, c, d, swap;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    for (c = 0 ; c < n - 1; c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
 //           if (array[d] > array[d+1]) /* For decreasing order use < */
 /*           {
                swap       = array[d];
                array[d]   = array[d+1];
                array[d+1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (c = 0; c < n; c++)
        printf("%d\n", array[c]);

    return 0;
}
 */



//.WAP TO SORT ELEMENTS OF AN ARRAY USING SLECTION SORT
/*#include <stdio.h>

int main()
{
    int array[100], n, c, d, position, swap;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    for (c = 0; c < (n - 1); c++)
    {
        position = c;

        for (d = c + 1; d < n; d++)
        {
            if (array[position] > array[d])
                position = d;
        }
        if (position != c)
        {
            swap = array[c];
            array[c] = array[position];
            array[position] = swap;
        }
    }

    printf("Sorted list in ascending order:\n");

    for (c = 0; c < n; c++)
        printf("%d\n", array[c]);

    return 0;
}
*/




//WAP TO IMPLEMENT MERGE SORT ON ELEMENTS OF AN ARRAY
/*#include <stdio.h>

#define max 10

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];

void merging(int low, int mid, int high) {
    int l1, l2, i;

    for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
        if(a[l1] <= a[l2])
            b[i] = a[l1++];
        else
            b[i] = a[l2++];
    }

    while(l1 <= mid)
        b[i++] = a[l1++];

    while(l2 <= high)
        b[i++] = a[l2++];

    for(i = low; i <= high; i++)
        a[i] = b[i];
}

void sort(int low, int high) {
    int mid;

    if(low < high) {
        mid = (low + high) / 2;
        sort(low, mid);
        sort(mid+1, high);
        merging(low, mid, high);
    } else {
        return;
    }
}

int main() {
    int i;

    printf("List before sorting\n");

    for(i = 0; i <= max; i++)
        printf("%d ", a[i]);

    sort(0, max);

    printf("\nList after sorting\n");

    for(i = 0; i <= max; i++)
        printf("%d ", a[i]);
}
 */