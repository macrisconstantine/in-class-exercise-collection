#include <stdio.h>

void
readIntArrayFromUser (int *arr, int arrSize)
{
  printf ("Input a line of %d integers: ", arrSize);
  for (int i = 0; i < arrSize; i++)
    arr[i] = 0;
  for (int i = 0; i < arrSize; i++)
    {
      scanf ("%d", &arr[i]);
    }
// implement: do a loop that reads up to arrSize integers from user
// if user types something that is not integer then
} void

readIntArrayFromUser2 (int *arr, int arrSize)
{
  printf ("Input a line of up to %d integers (end with q): ", arrSize);
  for (int i = 0; i < arrSize; i++)
    arr[i] = 0;
  for (int i = 0; i < arrSize; i++)
    {
      if (scanf ("%d", &arr[i]) == 0)
	break;
    }
}

int
main ()
{
  const int SIZE = 10;
  int arr[SIZE];
  readIntArrayFromUser2 (arr, SIZE);
  for (int i = 0; i < SIZE; i++)
    printf ("%d:%d\n", i, arr[i]);
  return 0;
}
