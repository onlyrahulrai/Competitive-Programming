const k = 3
const elements = [1,2,3,4,5,6,7,8,9,10]
const n = elements.length;

const swapElement = (array,first,second) => {
    let temp = array[first];
    array[first] = array[second]
    array[second] = temp;
}

for(var i=0;i<n;i+=k){
    let j = Math.min((i+k-1),n-1)
    let st = i;

    while(st < j){
        swapElement(elements,st++,j--)
    }
}

console.log(" ----- Elements ----- ",elements)






