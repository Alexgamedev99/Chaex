int count_digits(int num){
    int reminder;
    int count = 0;
    while(num != 0){
        count++;
        num /= 10;
    }
    return count;
    
}