int highest_digit(int num){
    int min = 0;
    int count = 0;
    int copy =  num;
    int rest = 0;
    while(copy!= 0){
      copy /= 10;
      count++;
    }
    while(count != 0){
      rest =  num % 10;
      num = num /10;
      if(rest > min){
        min = rest;
      }
      count--;
    }
    return min;
  }