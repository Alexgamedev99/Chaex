int factorial(int num){
     int mul = 1;
    while(num != 0){
      mul*=num;
      num--;
    }
    return mul;
   
}