#include <stdio.h>

int main(){
    FILE* fp;
    FILE* fi;
    
    fp = fopen("file.txt", "r");
    fi = fopen("input.txt", "w");

    char sr[3];
    for(int i = 0; i < 3; i++){
	sr[i] = fgetc(fp);
    }
    printf("%s", sr);

    fputs("ciaooooo", fi);
    return 0;
}
