#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
    char str[100], s[100], r[100], ans[100]; //String storing variables
		int i,j,c,m,k;
		system("clear");
    printf("\nPlease enter the original string.\n");
    fflush(stdin);
    gets(str); 
    printf("\nPlease enter the string to search.\n");
    fflush(stdin);
    gets(s); 
    printf("\nPlease enter the replace string.\n");
    fflush(stdin);
    gets(r); 
		i=m=c=j=0;
		while (str[c] != '\0') {
			if(str[m] == s[i]) {
				i++;
				m++;
				if (s[i] == '\0') {
					for(k=0; r[k] != '\0';k++,j++) {
						ans[j] = r[k];
						i=0;
						c=m;
					}
				}
			}
			else {
				ans[j] = str[c];
				j++;
				c++;
				m = c;
				i=0;
			}
		}
		ans[j] = '\0';
		printf("\nThe resultant string is\n%s\n" ,ans);
}
