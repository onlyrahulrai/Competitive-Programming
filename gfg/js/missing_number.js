const elements = [1,2,3,4,6]

let sum = 0;
for(var i=1;i<=6;i++){
    sum += i;
}

let total = 0;
for(var j = 0;j<elements.length;j++){
    total += elements[j]
}

console.log(sum-total)
