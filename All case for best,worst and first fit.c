#include <stdio.h>

int main ()
{
  int c, i, j, k, n, l, m[10], p[10], po[20], flag, z, y, temp, temp1;
  printf("\n Sarthak Tripathi 22MCB0030");
  printf("\nEnter memory total partitions: ");
  scanf("%d",&n);
  printf("\nEnter memory size for ");
  for (i = 1; i <= n; i++)
    {
      printf("\npartition %d \t",i);
      scanf("%d",&m[i]);
      po[i] = i;
    }
  printf("\nEnter total number of process:\t");
  scanf("%d",&j);
  printf("\nEnter memory size for\n");
  for (i = 1; i <= j; i++)
    {
       printf("\nprocess %d \t",i);
      scanf("%d",&p[i]);
    }
  int rp = 1;
  while (rp == 1)
    {
     	printf("\n*Menu*\n1.first fit\n2.best fit\n3.worst fit\nenter choice:\t");
       scanf("%d",&c);
       switch (c)
	{
	case 1:
	  for (i = 1; i <= j; i++)
	    {
	      flag = 1;
	      for (k = 1; k <= n; k++)
		{
		  if (p[i] <= m[k])
		    {
		      printf("\nprocess %d whose memory size is %dKB allocated at memory partition:\t%d",i,p[i],po[k]);
		      m[k] = m[k] - p[i];
		      break;
		    }
		  else
		    {
		      flag++;
		    }
		}
	      if (flag > n)
		{
		  printf("\nprocess %d whose memory size is %dKB can't be 'allocated :",i,p[i]);
		}
	    }
	  break;
	case 2:
	  for (y = 1; y <= n; y++)
	    {
	      for (z = y; z <= n; z++)
		{
		  if (m[y] > m[z])
		    {
		      temp = m[y];
		      m[y] = m[z];
		      m[z] = temp;
		      temp1 = po[y];
		      po[y] = po[z];
		      po[z] = temp1;
		    }
		}
	    }
	  for (i = 1; i <= j; i++)
	    {
	      flag = 1;
	      for (k = 1; k <= n; k++)
		{
		  if (p[i] <= m[k])
		    {
		      printf("\nprocess %d whose memory size is %dKB allocated at memory partition:\t%d",i,p[i],po[k]);
		      m[k] = m[k] - p[i];
		      break;
		    }
		  else
		    {
		      flag++;
		    }
		}
	      if (flag > n)
		{
		   printf("\nprocess %d whose memory size is %dKB can't be 'allocated :",i,p[i]);
		}
	    }
	  break;
	case 3:
	  for (y = 1; y <= n; y++)
	    {
	      for (z = y; z <= n; z++)
		{
		  if (m[y] < m[z])
		    {
		      temp = m[y];
		      m[y] = m[z];
		      m[z] = temp;
		      temp1 = po[y];
		      po[y] = po[z];
		      po[z] = temp1;
		    }
		}
	    }
	  for (i = 1; i <= j; i++)
	    {
	      flag = 1;
	      for (k = 1; k <= n; k++)
		{
		  if (p[i] <= m[k])
		    {
             printf("\nprocess %d whose memory size is %dKB allocated at memory partition:\t%d",i,p[i],po[k]);
		      m[k] = m[k] - p[i];
		      break;
		    }
		  else
		    {
		      flag++;
		    }
		}
	      if (flag > n)
		{
		  printf("\nprocess %d whose memory size is %dKB can't be 'allocated :",i,p[i]);
		}
	    }
	  break;
	}
      printf("\nEnter 1 to continue, 0 to quit");
      scanf("%d",&rp);
    }

  return 0;
}
