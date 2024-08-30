char find_single_occurrence(char* str) {
  
    char word;
    for(int i = 0;str[i] != '\0';i++){
        word = 0;
        for(int j = 0; str[j] != '\0';j++){
            if(str[i] == str[j]){
                word++;
                
            }  
        }
        if(word == 1){
            word = str[i];
            return word;
        }
    }
    return word;
   
}