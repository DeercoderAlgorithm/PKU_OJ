#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char Haab_month[][10] = {
"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};

const char Holly_day[][10] = {
"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};

int main()
{
   // first get the number and month or years
   int num_of_input;
   int i, j;
   scanf("%d", &num_of_input);
   //printf("%d\n", num_of_input);

   long *p_day = (long *)malloc(num_of_input * sizeof(long));

   for (i = 0; i < num_of_input; i++)
   {
     // first get the input
     int date, year, month;
     char str[10];
     scanf("%d.%s %d", &date, str, &year);
     //printf("%d, %s, %d\n", date, str, year);

     // get the month num
     for (j = 0; j < 19; j++)
     {
	  if (!strcmp(Haab_month[j], str))
	  {
	        month = j;
		break;
	  }
     }

     // calculate the real day from start
     long day;
     day = year * 365 + date + month * 20;
     p_day[i] = day; 
     //printf("%d\n", day);

/*
    // convert the day to another format 
    int remain_day = day % 20;
    char *new_month = (char *)Holly_day[remain_day];
    int remain_num = day % 13 + 1;
    int holly_year = day / 260;

    printf("%d %s %d\n", remain_num, new_month, holly_year);
*/
   }

   printf("%d\n", num_of_input); 
   for( j = 0; j < num_of_input; j++)
   {
	int remain_day = p_day[j] % 20;
    	char *new_month = (char *)Holly_day[remain_day];
    	int remain_num = p_day[j] % 13 + 1;
    	int holly_year = p_day[j] / 260;
	printf("%d %s %d\n", remain_num, new_month, holly_year);
   }

   free(p_day);
   return 0;
}
