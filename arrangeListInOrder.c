#include <stdio.h>


int main()
{
	int students = 0;
	char nombre[30][51];
	int scores[30];
	int currentScore = 0;
	int OSocres[30];

	scanf("%d", &students);
	if(students <= 30) {
		for(int i = 0; i < students; i++) {
			scanf("%d",&currentScore);
			scores[i] = currentScore;
			OSocres[i] = currentScore;
		}
		for(int i = 0; i < students; i++) {
			scanf("%s", nombre[i]);
		}

        for(int j = 0; j<students;j++){
            for(int i = 0; i < students; i++){
                if(OSocres[i] < OSocres[i+1]){
                    int swap = OSocres[i];
                    OSocres[i] = OSocres[i+1];
                    OSocres[i+1] = swap;
                }
            }
        }
       
        for(int i = 0; i < students; i++){
            
            for(int j = 0; j < students; j++){
                
                if(OSocres[j] == scores[i]){
                    
                    printf("%s %d\n",nombre[i], j+1);
                    
                }
                
            }
        }

	}


	return 0;
}
