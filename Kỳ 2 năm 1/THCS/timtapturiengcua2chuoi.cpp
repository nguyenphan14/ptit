#include<stdio.h>
#include<string.h>

struct Word{
	char a[100];
	int check;
};
Word words1[100], words2[100];
int count1 = 0, count2 = 0;

void split(char s[], Word words[], int &count) {
	char *token = strtok(s, " ");
	while (token != NULL) {
		strcpy(words[count].a, token);
		words[count].check = 1;
		count++;
		token = strtok(NULL, " ");
	}
}

int isChecked(int i) {
	for (int k = i-1; k >= 0; k--) {
		if (strcmp(words1[i].a, words1[k].a) == 0) return 1;
	}
	return 0;
}

int main() {
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	
	//tach tu
	split(s1, words1, count1);
	split(s2, words2, count2);
	
	//Sap xep
	for (int i = 0; i < count1-1; i++) {
		for (int j = 0; j < count1-i-1; j++) {
			if (strcmp(words1[j].a, words1[j+1].a) > 0) {
				Word temp = words1[j];
				words1[j] = words1[j+1];
				words1[j+1] = temp;
			}
		}
	}
	
	for (int i = 0; i < count1; i++) {
		if (isChecked(i)) words1[i].check = 0;
		else for (int j = 0; j < count2; j++) {
				if (strcmp(words1[i].a, words2[j].a) == 0) {
					words1[i].check = 0;
					break;
				}
			}
		if (words1[i].check == 1) printf("%s ", words1[i].a);
	}
	return 0;
}

