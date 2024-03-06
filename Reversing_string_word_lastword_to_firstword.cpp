#include<stdio.h>
#include<string.h>
int main()
{
	char name[20],reverse[20];
	int i,index=0,wordStart,WordEnd,len;
	printf("Enter Any string..");
	gets(name);
	len=strlen(name);
	wordStart=len-1;
	WordEnd=len-1;
	while(wordStart>0)
	{
		if(name[wordStart]==' ')
		{
			i=wordStart+1;
			 while(i <= WordEnd)
            {
                reverse[index] = name[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            WordEnd = wordStart - 1;
			
		}
		wordStart--;
	}
	 // Finally add the last word
    for(i=0; i<=WordEnd; i++)
    {
        reverse[index] = name[i];
        index++;
    }

    // Add NULL character at the end of reverse string
    reverse[index] = '\0'; 

    printf("Original string \n%s\n\n", name);
    printf("Reverse ordered words \n%s", reverse);

}
