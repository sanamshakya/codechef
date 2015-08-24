#include<stdio.h>
#include<string.h>

int main(void){
	int compare_count = 0;
	scanf("%d", &compare_count);
	
	char string_list1[compare_count][14];
	char string_list2[compare_count][14];
	char string1[14];
	char string2[14];
	int i;
	for (i = 0; i < compare_count; i++) {
    scanf("%s",string1 );
    scanf("%s",string2 );
    strcpy(string_list1[i], string1);
    strcpy(string_list2[i], string2);
   }
   
   char output_string[compare_count];
   char temp_str1[14];
   char temp_str2[14];
   int j;
   for (i = 0; i < compare_count; i++) {
    temp_str1 = string_list1[i]; 
    temp_str2 = string_list2[i];
    
    len_str1 = strlen(temp_str1);
    
    for(j=0; j<len_str1; j++){
		if ( (temp_str1[j]==temp_str2[j]) || temp_str1[i] == '?' || temp_ )
	}
    
   }
	
	return 0;
}
