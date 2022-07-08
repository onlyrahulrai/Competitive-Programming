function printLeaders(elements,size){
    for(let i=0;i<size;i++){
        let j;
        for(j=i+1;j<size;j++){
            if(elements[i] <= elements[j]){
                break
            }
        }

        if (j == size){
            console.log(elements[i])
        }
    
    }
}

const elements = [16, 17, 4, 3, 5, 2];
const n = elements.length;
printLeaders(elements, n)

