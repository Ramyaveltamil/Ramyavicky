#include <stdio.h>
int main ()
{
  int n, i, a[100], b[100], c[100];
  printf ("Enter a number");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      scanf ("\n%d %d", &a[i], &b[i]);
    }
  for (i = 0; i < n; i++)
    {
      if (b[i] > a[i])
	{
	  c[i] = b[i] - a[i];
	  printf ("\n%d", c[i]);
	}
      else
	return 0;
    }
}
