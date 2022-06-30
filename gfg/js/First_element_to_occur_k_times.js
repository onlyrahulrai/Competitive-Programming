const firstElementKTime = (elements,k) => {
    const object = new Object()
    for(var i=0;i<elements.length;i++){
        if(!object[elements[i]]){
            object[elements[i]] = 0;
        }
    
        object[elements[i]]++;

        if(object[elements[i]] === k) return elements[i]
    }
}

const elements = [1, 7, 4, 3, 4, 8, 7]

console.log(firstElementKTime(elements,2))