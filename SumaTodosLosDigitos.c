int sum_of_digits(int num){
    int sum = 0;
    int count = 0;
    int copy = num;
    int rest;
    while(copy != 0){
        copy /= 10;
        count++;
    }
   while(count != 0){
         rest = num % 10;
         num = num / 10;
         sum += rest;
         printf("%d\n",sum);
         count--;
    }
    return sum;
}