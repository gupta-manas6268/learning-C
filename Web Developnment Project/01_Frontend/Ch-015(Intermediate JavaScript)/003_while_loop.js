var count = 99;

while(count >= 0){
    var a = count-1;
    if(count > 1){
        console.log(count + " bottles of beer on the wall, " + count + " bottles of beer.");
        console.log("Take one down and pass it around, " + a + " bottles of beer on the wall.");
    }
    else if(count == 1){
        console.log(count + " bottles of beer on the wall, " + count + " bottles of beer.");
        console.log("Take one down and pass it around, no more bottles of beer on the wall.");
    }
    else{
        console.log("No more bottles of beer on the wall, no more bottles of beer.");
        console.log("Go to the store and buy some more, 99 bottles of beer on the wall.");
    }
    count--;
}