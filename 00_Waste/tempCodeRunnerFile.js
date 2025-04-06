let obj = {  // Object
    name: "Manas",
    role: "Programmer",
    company: "CodeWithHarry AI"
}

for(const key in obj){ // 'for-in' loop
    const element = obj[key];
    console.log(key, element);
}
