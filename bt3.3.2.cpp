#include <stdio.h> 
#include <math.h>

int USCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int USCLN_n_so(int arr[], int n)
{
    //arr : mảng chứa n số nguyên dương
    //n : số lượng số trong mảng
    
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = USCLN(result, arr[i]);
    }
    return result;
}
int main()
{
    int a, b; 
    printf("Nhap cac he so a, b: "); 
    scanf("%d %d", &a, &b); 
    printf("Uoc chung lon nhat cua 2 so la: %d\n", USCLN(a, b));
    int arr[] = {12, 24, 27, 30, 36};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("USCLN cua mang la:%d\n", USCLN_n_so(arr, n));
    return 0;
}