#include <simplecpp>
#include <cstring>


main_program{
        char a[10][20];
        for(int i=0; i<10; i++){
                cin.getline(a[i],20);
        }

        for(int i=9; i>=0; i--){
                for(int j=0; j<=i; j++){
                        if(strcmp(a[j],a[j+1]) > 0){
                                char temp[20];
                                strcpy(temp,a[j]);
                                strcpy(a[j],a[j+1]);
                                strcpy(a[j+1],temp);
                        }
                }

        }


        for(int i=0; i<10; i++){
                cout<<a[i]<<endl;
        }

}
