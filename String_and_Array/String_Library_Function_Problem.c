
//String Library Functions

#include <stdio.h>
#include <string.h>

int main()
{
  char s1[100],s2[100],s3[100];
  printf("Enter the string s1: ");
  gets(s1);
  printf("Enter the string s2: ");
  gets(s2);
  if(strcmp(s1,s2)==0){
    printf("\nthey are equal");
  }
  else{
    printf("\nthey are not equal\n");
    strcat(s1,s2);
    printf("\nThen the concatinated string is ");
    puts(s1);
  }
  strcpy(s3,s1);
  printf("\nThe copied string s3 is ");
  puts(s3);
  printf("\nThe strings s1,s2,s3 are: \n\t");
  puts(s1);
  printf("\t");
  puts(s2);
  printf("\t");
  puts(s3);
  printf("\nThe length of the string s1 is %d", strlen(s1));
  printf("\nThe length of the string s2 is %d", strlen(s2));
  printf("\nThe length of the string s3 is %d", strlen(s3));
  return 0;
}