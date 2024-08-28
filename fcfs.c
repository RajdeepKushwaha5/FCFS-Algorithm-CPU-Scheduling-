#include <stdio.h>


int main()
{
  int num, pro[10], arr_time[10], bur_time[10], com_time[10] = {0};
  int time = 0;
  printf("Enter the number of process that you want : ");
  scanf("%d", &num);
  printf("\nEnter the process number : ");
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &pro[i]);
  }
  

  printf("\nEnter the arrival time for each process respectively: ");
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr_time[i]);
  }
  
  printf("\nEnter the burst time for each process respectively: ");
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &bur_time[i]);
  }
  

  for (int i = 0; i < num; i++)
  {
    if (i == 0)
    {
      time =arr_time[i]+ bur_time[i];
      com_time[i] = time;
    }
    if (i >= 0)
    {
      if (arr_time[i] <= com_time[i - 1])
      {
        
        com_time[i] =com_time[i-1]+bur_time[i];
      }
      else
      {
        time = arr_time[i]+bur_time[i];
        com_time[i]=time;
      }
    }
  }

  printf("\nthe process number  : ");
  for (int i = 0; i < num; i++)
  {
    printf(" %d | ", pro[i]);
  }

printf("\nthe arrival time : ");
  for (int i = 0; i < num; i++)
  {
    printf(" %d | ", arr_time[i]);
  }

  printf("\nthe burst time : ");
  for (int i = 0; i < num; i++)
  {
    printf(" %d | ", bur_time[i]);
  }



  printf("\nThe completion time : ");
  for (int i = 0; i < num; i++)
  {
    printf(" %d | ", com_time[i]);
  }

  return 0;
}
