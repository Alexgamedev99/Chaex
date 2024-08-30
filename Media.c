float calculate_mean(int num){
    int reminder;
    int sum = 0;
    int mean;
    int count = 0;
    for(int i = 0; i < num; i++){
        reminder = num % 10;
        sum += reminder;
        num /= 10;
        count++;
    }
    return sum / count;
}