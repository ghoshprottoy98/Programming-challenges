#include <stdio.h>
#include <string.h>

void main () 
{
   char s1[] = "listen";
   char s2[] = "silent";
   char t;
   int i, j;
   int n  = strlen(s1);
   int n1 = strlen(s2);

   // If both strings are of different length, then we can directly say they are not anagrams
   if( n != n1) 
   {    
      printf("%s and %s are not anagrams! \n", s1, s2);
   }
   
   // Soring both strings −

   for (i = 0; i < n-1; i++) 
   {
      for (j = i+1; j < n; j++) 
      {
         if (s1[i] > s1[j]) 
         {
            t = s1[i];
            s1[i] = s1[j];
            s1[j] = t;
         }
         if (s2[i] > s2[j]) 
         {
            t = s2[i];
            s2[i] = s2[j];
            s2[j] = t;
         }
      }
   }

   // Compare both strings character by character

   for(i = 0; i<n; i++) 
   {
      if(s1[i] != s2[i]) 
      {    
         printf("Given strings are not anagrams\n");
      }
   }
   printf("Given strings are anagrams!\n");
}
