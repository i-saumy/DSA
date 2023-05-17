#include <stdio.h>
int main ()
{
  int r1, r2, c1, c2, a[100][100], b[100][100], sum[100][100], i, j,
    sub[100][100], mul[100][100];
  printf ("Enter the number of rows of 1st matrix : ");
  scanf ("%d", &r1);
  printf ("Enter the number of columns  of 1st matrix : ");
  scanf ("%d", &c1);

  printf ("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c1; ++j)
      {
	printf ("Enter element a%d%d: ", i + 1, j + 1);
	scanf ("%d", &a[i][j]);
      }
  printf ("Enter the number of rows of 2nd matrix: ");
  scanf ("%d", &r2);
  printf ("Enter the number of columns of 2nd matrix: ");
  scanf ("%d", &c2);
  printf ("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r2; ++i)
    for (j = 0; j < c2; ++j)
      {
	printf ("Enter element b%d%d: ", i + 1, j + 1);
	scanf ("%d", &b[i][j]);
      }


  for (i = 0; i < r1; ++i)
    for (j = 0; j < c1; ++j)
      {
	sum[i][j] = a[i][j] + b[i][j];
      }

  printf ("\nSum of two matrices: \n");
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c1; ++j)
      {
	printf ("%d   ", sum[i][j]);
	if (j == c1 - 1)
	  {
	    printf ("\n\n");
	  }
      }

  for (i = 0; i < r1; ++i)
    for (j = 0; j < c1; ++j)
      {
	sub[i][j] = b[i][j] - a[i][j];
      }

  printf ("\nSubstraction two matrices: \n");
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c1; ++j)
      {
	printf ("%d   ", sub[i][j]);
	if (j == c1 - 1)
	  {
	    printf ("\n\n");
	  }
      }

  for (i = 0; i < r1; ++i)
    for (j = 0; j < c1; ++j)
      {
	mul[i][j] = a[i][j] * b[i][j];
      }

  printf ("\nMultiplication two matrices: \n");
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c1; ++j)
      {
	printf ("%d   ", mul[i][j]);
	if (j == c1 - 1)
	  {
	    printf ("\n\n");
	  }
      }

  return 0;
}
