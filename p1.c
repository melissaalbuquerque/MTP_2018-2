/* P1.c */
/* Melissa de Albuquerque Barbosa*/
/* 11811EBI030 */

#include <stdio.h>

int main()
{
	int i = 0;
	int estado = 0;
	char bits[256];
	
	printf("Digite a sequencia de 0s e 1s desejada:");
	scanf("%s", bits);
	
	while (bits[i]!= '\0')
	{
		if ( bits[i]=='0' && estado==0)
		{
			estado = 0;
		}
		else if (bits[i]=='0' && estado==1)
		{
			estado = 2;
		}
		else if (bits[i]=='0' && estado==2)
		{
			estado = 1;
		}
		else if (bits[i]=='1' && estado==0)
		{
			estado = 1;
		}
		else if (bits[i]=='1' && estado==1)
		{
			estado = 0;
		}
		else if (bits[i]=='1' && estado==2)
		{
			estado = 2;
		}
		else if (bits[i] != '1' && '0')
		{
			printf("O numero nao e binario.");
			return 0;
		}
		i++;
	}
	
   if (estado==0)
   {
   	printf(" O numero binario %s e multiplo de 3",bits);
   }
   else
	printf(" O numero binario %s nao e multiplo de 3",bits);
	
	return 0;
}
