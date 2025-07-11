#include <stdio.h>
#include <string.h>

int main()
{
    char input[21],smallest[21],largest[21];
    int temb=1;

    while(1){
        printf("Enter word: ");
        scanf("%20s",&input);

        if(strlen(input) == 4)
        break;

        if(temb){
            strcpy(smallest,input);
            strcpy(largest,input);
            temb=0;
        }
        else{
            if(strcmp(input,smallest)<0)
                strcpy(smallest,input);
            if (strcmp(input,largest)>0)
                strcpy(largest,input);
        }

    }
        printf("smallest word is: %s\n",smallest);
        printf("largest word is: %s\n",largest);


    return 0;
}
