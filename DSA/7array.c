#include <stdio.h>
int main()
{
    int n = 0, x, min = 0, max = 0, posmin = 0, posmax = 0 ,temp=0;

    printf("enter no:");
    scanf("%d", &x);
    int a[x];
    while (1)
    {
        printf("\n1.enter element\n2.display element\n3.minimum value\n4.maximum element\n5.remove minimum\n6.remove maximum\n7.insert at first\n8.asscending sorting\n9.desending sorting\nenter your choice:");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            for (int i = 0; i < x; i++)
            {
                scanf("%d", &a[i]);
            }
            break;
        case 2:
            for (int i = 0; i < x; i++)
            {
                printf("%d\n", a[i]);
            }
            break;
        case 3:
            min = a[0];
            for (int i = 1; i < x; i++)
            {
                if (min > a[i])
                {
                    min = a[i];
                    posmin = i;
                }
            }
            printf("minimun element is: %d at %d location", min, posmin);
            break;
        case 4:
            max = a[0];
            for (int i = 0; i < x; i++)
            {
                if (max < a[i])
                {
                    max = a[i];
                    posmax = i;
                }
            }
            printf("maximum element is: %d at %d location", max, posmax);
            break;
        case 5:
            for (int i = posmin; i < x - 1; i++)
            {
                a[i] = a[i + 1];
            } 
            x--;
            printf("minimum element is removed");
            break; 
        case 6:
            for (int i = posmax; i < x - 1; i++)
            {
                a[i] = a[i + 1];
            }
            x--;
            printf("maximum element is removed");
            break;
        case 7:
            for (int i = x - 1; i >= 0; i--)
            {
                a[i + 1] = a[i];
            }
            x++;
            scanf("%d", &a[0]);
        case 8:
            for(int i=0;i<x;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(a[i]>a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            } 
        case 9:
            for(int i=0;i<x;i++)
            {
                for(int j=i+1;j<x;j++)
                {
                    if(a[i]<a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }    
            break;  
        default:
            break;
        }
    }
}