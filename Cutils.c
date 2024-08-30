int count_zeros(int num){
    char temp[128];
    int len = sprintf(temp,"%b",num);
    int result = 0;
    for(int i = 0; i < len; i++){
        if(temp[i] == '0'){
            result++;
        }
    }
    return result;
}

