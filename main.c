#include <stdio.h>
#include <stdlib.h>


int sum(int arr[])
{
    int total=0;
    for(int i=0;i<sizeof(arr) ;i++)
    {
        total=total+arr[i];
    }
    return total;

}

int main()
{

  int number[25]; int checker[25] ; int i;
  printf("Enter the numbers to add");
  for (i=0;i<20;i++)
  {
    scanf("%d",& number[i]);
  }
  for (i=0;i<20;i++)
     {
         for (int k=0;k<20;k++)
     {
          if (number[i] == checker[k])
          printf("You've entered this number previously");
    }
      }
        printf("\n %d", number[i]);
        printf("\n %d", sum(number[i]));
  }





