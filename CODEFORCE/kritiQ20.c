#include<stdio.h>
#include<string.h>

int main(){
    char filename[100];
    char cc;
    scanf("%s", filename);
    char entryp[100][100];for(int i=0;i<100;i++){for (int j=0;j<100;j++){entryp[i][j]='\0';}}
    int j=0;
    FILE *infile = fopen(filename, "r");
    while(fscanf(infile, "%c", &cc) != EOF){
        if(cc=='/'){j++;}
        if(cc=='\n' || cc=='\t'){break;}
        entryp[j][strlen(entryp[j])] = cc;
    }
    //printf("%s", entryp[4]);
    int line=1;
    char lines[100][100];
    while(fscanf(infile, "%c", &cc) != EOF){
        if(cc=='\n'){line++;continue;}
        lines[line][strlen(lines[line])] = cc;
    }
    //printf("%s", lines[1]);
    //printf("%d", line);
    for(int k=1;k<=j;k++){
        int flag=0;
        for(int l=1;l<line;l++){
            char *finder = strstr(lines[l], entryp[k]);
            //printf("%s \n", finder);
            
            if(finder!= NULL){flag=1;}
            else{flag=0;break;}
            //printf("%d %d \n", flag,k);
        }
        if(flag==1){printf("%s", entryp[k]);}
    }
    fclose(infile);
    return 0;
}