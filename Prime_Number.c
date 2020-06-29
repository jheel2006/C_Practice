#include <stdio.h>

int main()
{   int n;
    int p=1;
    printf("Enter a number ");
    scanf("%d", &n);

    for (int i = 2; i <= n/2; i++) {
        
        if (n%i==0){
            p=2;
            break;
        }
    }
        if (n==1) {
            printf("Neither prime nor composite");
        }
        else {
        
        if (p==2) {
            printf("Composite");
        }
        else{
            printf("Prime");
        }
        }
}
