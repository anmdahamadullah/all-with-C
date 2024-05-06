
#include <stdio.h>
//
int naeem(int a, int b) { return a + b; };

int saeem(int a, int b) { return a - b; };

int rajiya(int a, int b) { return a * b; };

int halima(int a, int b) { return a / b; };
int abdurrajjak(int a, int c) { return a + c; };
int romisa(int a, int c) { return a - c; };
int badena(int a, int c) { return a * c; };
int sommayya(int a, int c) { return a / c; };

int tyjol(int a, int d) { return a + d; };
int rabiya(int a, int d) { return a - d; };
int nani(int a, int d) { return a * d; };
int nana(int a, int d) { return a / d; };
int afroja(int a, int e) { return a + e; };
int amina(int a, int e) { return a - e; };
int ayesha(int a, int e) { return a * e; };
int khatun(int a, int e) { return a / e; };
int torikul(int a, int f) { return a + f; };
int maya(int a, int f) { return a - f; };
int rabirabba(int a, int f) { return a * f; };
int nasima(int a, int f) { return a / f; };
int asma(int a, int g) { return a + g; };
int rohi(int a, int g) { return a - g; };
int hali(int a, int g) { return a * g; };
int naziba(int a, int g) { return a / g; };

int main() {

  int a, b, c, d, e, f, g;
  printf("Input Your Seven Digit:");
  scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

  int s1 = naeem(a, b); // 30

  int s2 = saeem(a, b);
  int s3 = rajiya(a, b);
  int s4 = halima(a, b);
  int s5 = abdurrajjak(a, c);
  int s6 = romisa(a, c);
  int s7 = badena(a, c);
  int s8 = sommayya(a, c);
  int s9 = tyjol(a, d);
  int s10 = rabiya(a, d);
  int s11 = nani(a, d);
  int s12 = nana(a, d);
  int s13 = afroja(a, e);
  int s14 = amina(a, e);
  int s15 = ayesha(a, e);
  int s16 = khatun(a, e);
  int s17 = torikul(a, f);
  int s18 = maya(a, f);
  int s19 = rabirabba(a, f);
  int s20 = nasima(a, f);
  int s21 = asma(a, g);
  int s22 = rohi(a, g);
  int s23 = hali(a, g);
  int s24 = naziba(a, g);
  printf(
      "naeem: %d\n\nsaeem: %d\nrajiya: %d\nhalima: %d\nabdurrajjak: "
      "%d\nromisa: "
      "%d\nbadena: %d\nsommayya: %d\ntyjol: %d\nrabiya: %d\nnani: %d\nnana: "
      "%d\nafroja: %d\namina: %d\nayesha: %d\nkhatun: %d\ntorikul: %d\nmaya: "
      "%d\nrabirabba: %d\nnasima: %d\nasma: %d\nrohi: %d\nhali: %d\nnaziba: %d",
      s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16,
      s17, s18, s19, s20, s21, s22, s23, s24);

  return 0;
};
