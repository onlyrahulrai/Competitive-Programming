const items = [1,2,3,4,5,6]

for(let i=0;i<items.length;i+=2){
    [items[i],items[i+1]] = [items[i+1],items[i]]
}

console.log(items)