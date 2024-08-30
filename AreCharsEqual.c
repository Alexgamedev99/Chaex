int are_chars_equal(char* str) {
    int count = 0;
    char fl = str[0];
    char ll;
    while (str[count] != '\0'){
        count++;
    }
    ll = str[count-1];
    if(fl == ll){
        return 1;
    }
    return 0;
}