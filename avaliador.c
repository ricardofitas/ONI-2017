#include <stdio.h>
#include <stdlib.h>
#include "avaliador.h"
#include "resolver.c"


int correct = 0;
int n, guesses = 0;
char c;
char p[MAXN];

void end()
{
  if (correct)
    printf("Correto! Foram usadas %d adivinhas\n", guesses);
  else
    printf("Incorreto...%d\n",guesses);
  exit(0);
}

int adivinhar(char g[MAXN])
{
  correct = 0;
  guesses++;

  if (guesses > 2050)
    end();

  int nm = 0, i;
  for (i = 0; i < n; i++)
    if (g[i] != '0' && g[i] != '1')
      end();
    else if (g[i] != p[i])
      nm++;

  if (nm == 0)
    correct = 1;

  if (c == 'V')
  {
    if (nm == 0)
      nm = 0;
    else if (nm == n / 2)
      nm = n / 2;
    else
      nm = n;
  }

  return nm;
} 

int main()
{
  scanf("%d %c", &n, &c);
  scanf(" %s", p);
	resolver(n, c);
  end();

  return 0;
}
