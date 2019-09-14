#include <stdio.h>


typedef struct{
  double real, imaginary;
} complex;

complex add(complex a1,complex a2){
  complex re;
  re.real = a1.real + a2.real;
  re.imaginary = a1.imaginary + a2.imaginary;
  return re;
}

int main(void){
  complex a1,a2;
  printf("複素数の加算演算\n");
  printf("二項を入力\n");
  printf("第1項　実部:");
  scanf("%lf",&a1.real);
  printf("第1項　虚部:");
  scanf("%lf",&a1.imaginary);
  printf("第2項　実部:");
  scanf("%lf",&a2.real);
  printf("第2項　虚部:");
  scanf("%lf",&a2.imaginary);
  complex ans;
  ans = add(a1,a2);
  printf("第1項 + 第2項 = (%lf+%lfi)\n", ans.real,ans.imaginary);
  return 0;
}
