#include <stdio.h>
int isPrime(int n)
{///質數不能整除
    for(int i=2;i<n;i++){
        if(n%i==0)return 0;///失敗
    }
    return 1;///成功!!!結尾不能寫功,有毒!!
}
int main()
{
    printf("請輸入1個數:");
    int n;
    scanf("%d",&n);
    int ans = 0;
    for(int i=2;i<=n;i++){///列出
        if (isPrime(i)) {
            printf("%d",i);
            ans ++;
        }
    }
    printf("總共有 %d 個質數\n", ans);
}