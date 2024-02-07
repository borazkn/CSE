#include <stdio.h>

#define MAX_ELEMENTS 118

int read_line(char str[], int n);
int character_counter(char str[], int n);

int main()
{
	char elements[MAX_ELEMENTS];
	
	printf("Enter a list of chemical elements: ");
	int VAL = read_line(elements, MAX_ELEMENTS);
	int C_C = character_counter(elements, VAL);
	
	printf("**********************************************\n");

	printf("There are %d chemical elements in the list.\n", C_C);
	
	int i = 0, count = 1;
	for(count = 1; count <= C_C; count++){
		printf("%d. chemical element is: ", count);
		for(; i < VAL; i++){
			if(elements[i] != ','){
				printf("%c", elements[i]);
			}
			else{
				i++;
				printf("\n");
				break;
			}
		}
	}
	
	return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int character_counter(char str[], int n) {
	int i, count = 0;

	for(i = 0; i < n; i++){
		if(str[i] == ',')
			count++;
	}
	return count + 1;
}
