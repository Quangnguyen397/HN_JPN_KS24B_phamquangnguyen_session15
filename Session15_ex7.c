#include<stdio.h>
int main(){
	char str[]="Hello my gmail is test123@gmail.com";
    int countCharacterText = 0;
    int length = strlen(str);
    for(int i =0; i<length; i++){
    	if(str[1]>='a'&&str[i]<='z'){
    		countCharacterText++;
		}
		if(str[i]>='A'&&str[i]<='Z'){
			countCharacterText++;
		}
	}
	printf("So ki tu la chu cai la %d :", countCharacterText);
int count =0;
	int length =strlen(str1);
	for(int i = 0;i < length; i++){
	if(str1[i]==' '){
		count = count + 1;
	   }
	}
	printf("Chuoi ban vua nhap co %d", count);
	return 0;
}
