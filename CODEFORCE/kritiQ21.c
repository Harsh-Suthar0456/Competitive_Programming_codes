#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int wordcheck(char* word,char* stopword){
    if(strcasecmp(word,stopword)==0){return 1;}
    return 0;
}

void printer(FILE* input){
    char word[50];
    int initial=0;
    while(fscanf(input,"%s",word)!=EOF){
        
        int leng= strlen(word);
        int flag=0;
        char* stopper[20]={"a","an","all","and","are","each","he","has","had","have","in","is","it","its","of","the","there","was","were","who"};
        for(int i=0;i<20;i++){
            if(wordcheck(word,stopper[i])==1){flag=1;}
        }
        if(flag==0){
            if(word[leng-1]=='.'){word[leng-1]='\0';}
            printf("%s",word);if(initial !=0){printf(" ");}initial=10;}
    }
}

int main() {
    char filename[40];
    scanf("%s",filename);
    FILE* inputf = fopen(filename,"r");
    printer(inputf);
    fclose(inputf);

    // Write your program logic here. This line is a comment, you can leave it in code if you wish.

    return 0;
}