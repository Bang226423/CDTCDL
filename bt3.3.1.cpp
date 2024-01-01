#include <stdio.h> 
#include <math.h>
int main() 
{ 
double a, b, c; 
printf("Nhap cac he so a, b, c: "); 
scanf("%lf %lf %lf", &a, &b, &c); 

//Mã 3.3.1 – Khung chương trình tìm nghiệm đa thức ax2 + bx + c 

if(a != 0) 
{ 
// tìm nghiệm của đt bậc 2: ax^2+bx+c (a # 0) 
    double delta = b*b - (4*a*c);
    if(delta > 0)
    {
        double x1 = (-b  + sqrt(delta))/(2*a);
        double x2 = (-b  - sqrt(delta))/(2*a);
        printf("Nghiem cua phuong trinh la: x1 = %.2lf, x2 = %.2lf", x1, x2);
    }
    else if(delta == 0)
    {
        double x = -b/(2*a);
        printf("Phuong trinh co nghiem kep: x = %.2lf", x);
    }
    else
    {
        printf("Phuong trinh vo nghiem!!!");
    }
} 
else 
{ 
// tìm nghiệm của đt bậc 1: bx + c 
    if(b != 0){
            double x = -c / b;
            printf("Phuong trinh co nghiem: x = %.2lf", x);
        }
        else{
            if(c != 0){
                printf("Phuong trinh vo nghiem~!!");
            }
            else{
                printf("Phuong trinh co vo so nghiem");
            }
        }
} 
return 0;
}