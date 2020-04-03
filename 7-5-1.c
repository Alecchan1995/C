/*搜尋陣列程式*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
int search(int [ ],int,int,int);
int main(void)
{
    int i,a[SIZE],from=0,key;
    srand(time(NULL));
    for(i=0;i<SIZE;i++) 
      a[i] = rand( ) % 10 + 1;
    printf("請輸入欲搜尋的值(1~10)");  
    scanf("%d",&key);
    while(from < SIZE) {
      int ans;
      ans = search(a,from,SIZE,key);
      if(ans == -1) {
        if(!from)     
          printf("%d not found\n",key);
        break;
      } else {  
        printf("%d found at a[%d] = %d\n",key,ans,a[ans]);
        from = ans + 1;
      }  
    }
    system("pause");
}

int search(int a[ ],int from,int size,int key)
{
   int i;
   for(i=from;i<size;i++)
     if(a[i] == key)
       return i;
   return -1;       
}

