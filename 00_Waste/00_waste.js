console.log("I am a tutorial on Loops")

let a = 1;
for(let i=0; i < 10; i++){
    console.log(a + i);
}

let obj = {  // Object
    name: "Manas",
    role: "Programmer",
    company: "CodeWithHarry AI"
}

for(const key in obj){ // 'for-in' loop
    const element = obj[key];
    console.log(key, element);
}

for(const c of "Harry"){ // 'for-of' loop 
    console.log(c);
}

let i=0;
while(i < 6){
    console.log(i);
    i++;
}

let j=0;
do{
    console.log(j)
    j++;
} while(j < 6);