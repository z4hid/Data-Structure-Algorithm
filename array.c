// C program to insert an element into a particular position of an array.
#include <stdio.h>

int main()
{
   int A[100], i, n, position, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &A[i]);

   printf("Enter the Position where you wish to insert an element\n");
   scanf("%d", &position);

   printf("Enter the value to insert in array\n");
   scanf("%d", &value);

   for (i = n - 1; i >= position - 1; i--)
      A[i+1] = A[i];

   A[position-1] = value;

   printf("Result after reposition array is\n");

   for (i = 0; i <= n; i++)
      printf("%d\n", A[i]);

   return 0;
}
