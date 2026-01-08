#include<stdio.h>
#define max 5
struct queue 
{ 
  int e;
  int p;
};
struct queue q[max];
int rear = -1;
void insert()
{
  if (rear == max - 1) 
  {
    printf("queue is full\n");
  }
  else
  {
    rear++;
    printf("enterr element:\n");
    scanf("%d",&q[rear].e);
    printf("enter priority:\n");
    scanf("%d",&q[rear].p);
  }
}
void maxpriority()
{
  int maxindex=0;
  if (rear==-1)
  {
    printf("queue is empty\n");
  }
  else
  {
    
    for(int i=1;i<=rear;i++)
    {
      if(q[i].p > q[maxindex].p)
      {
         maxindex=i;
      }
    }
    printf("Max Priority Element: %d (Priority: %d)\n", q[maxindex].e, q[maxindex].p);
  }
}
void minpriority() {
  if (rear == -1) {
      printf("queue is empty!\n");
      return;
  }
  int minindex = 0;
  for (int i = 1; i <= rear; i++) {
      if (q[i].p < q[minindex].p) {
          minindex = i;
      }
  }
  printf("Min Priority Element: %d (Priority: %d)\n", q[minindex].e, q[minindex].p);
}
void traversal() {
  if (rear == -1) {
      printf("queue is empty!\n");
      return;
  }
  printf("Elements in priority order:\n");
  for (int i = 0; i <= rear; i++) {
      printf("Element: %d, Priority: %d\n", q[i].e, q[i].p);
  }
}
int main ()
{
   int choise;
   while (1)
   {
    printf("1.enter element\n");
    printf("2.max priority element\n");
    printf("3.min priority element\n");
    printf("4.traversal\n");
    printf("5.exit\n");
    printf("enter your choise:");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:
            insert();
      break;
    case 2: maxpriority();
      break;
    case 3: minpriority();
      break;
    case 4: traversal();
       break; 
    case 5:
            return 0;
      break;    
    default:
      break;
    }
   }
    
}