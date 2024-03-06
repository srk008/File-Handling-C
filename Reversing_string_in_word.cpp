#include <stdio.h>
#include <string.h>

int main() {
    char s[20], m[20];
    int i, j, k, d = 0;
    
    printf("Enter any string: ");
    gets(s);

    int len = strlen(s);
  //  strrev(s);

    for (i = 0; i <= len; i++) 
	{
    	
        if (s[i] == ' ' || s[i] == '\0')
		 {
            for (j = i - 1, k = 0; j >= d; j--, k++) {
                m[k] = s[j];
            }
            m[k] = '\0';
            printf("%s ", m);
            d = i + 1;
        }
    }

   // printf("%s", m);

    return 0;
}

