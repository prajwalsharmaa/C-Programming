#include <stdio.h>
int main()
{
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
     int n = 5;
     for(int i =1;i<=10;i++){
        for(int j=i;j<=10;j++){
            printf("\n");
        }
        printf("%d",i);
     }
    //  int n = 5;
    //  for(int i=1;i<=n;i++){
    //     for(int j = 1;j = i;j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    //  }
    return 0;
}

/*
12345
12345
12345
12345
*/