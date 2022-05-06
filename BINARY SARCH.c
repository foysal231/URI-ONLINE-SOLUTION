#include <stdio.h>

Binary_Search(int a[], int low, int high, int key)
{
    int mid;

  while (low <= high)
     {
        mid = (low+high)/2;

        if (a[mid] < key)

        low = mid + 1;
        else if (a[mid] == key)

    {
      printf("%d found at location %d.\n", key, mid+1);

      break;
    }
    else

    high = mid - 1;

    mid = (low + high)/2;
  }

  if (low > high)
    printf("Not found! %d isn't present in the list.\n", key);

  return 0;
}

int main()
{
  int c, low, high, n, key, a[100];

  printf("Enter number of elements\n");

  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)

  scanf("%d", &a[c]);

  printf("Enter value to find\n");

  scanf("%d", &key);

  low = 0;

  high = n - 1;

  Binary_Search( a, low, high, key);

}
