char* identify_formations(char* formation) {
    if(formation[0] > 90){
        return "Stalagmites";
    }
    return "Stalactites";
}