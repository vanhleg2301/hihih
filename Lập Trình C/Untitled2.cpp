#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int a[MAX_SIZE];
    int n, value, i;
    
    do
    {
        printf("Enter an element (zero to stop): ");
        scanf("%d", &value);
        if (value)
            a[n++] = value;
    } while (value && n < MAX_SIZE - 1);
        
    printf("Your entered array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    return 0;
}



// Nhap vao mang n phan tu
// In ra vi tri va gia tri cua phan tu lon nhat, nho nhat
// n = 5
// 6 2 4 7 3

// max: 4, 7
// min: 2, 2
