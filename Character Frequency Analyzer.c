#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){      
    while (true) {
        printf("\nplease provide a text that you want to analyze the frequency of it : ");
        int i;
        int j;
        char Text_inputed [100];
        int Frequency[256]= {0};
        int ascii = 0;

        fgets(Text_inputed,sizeof(Text_inputed),stdin);

        Text_inputed[strcspn(Text_inputed,"\n")] ='\0';

        for (i=0 ; Text_inputed[i] ; i++ ) {
            if (Text_inputed[i] >= 65 && Text_inputed[i] <= 90 || Text_inputed[i] >=97 && Text_inputed[i] <= 122 ){
                ascii=Text_inputed[i];
                Frequency[ascii]+=1;
            }
        }
        for (j = 0 ; j<256;j++){
            if (Frequency[j]>0){
                printf("%c --->Repeated %d Times\n",j,Frequency[j] );
            }

        }
    }
    return 0;
}