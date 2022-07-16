let n=9, x=5;
let arr = [ 1, 3, 5, 5, 5, 5, 67, 123, 125 ];
let first = -1,last = -1;

for(var i=0;i<n;i++){
    if(arr[i] === x && first === -1){
        first = i;
        last = i;
    }

    if(arr[i] === x && last !== -1){
        last = i;
    }
}

console.log(first,last)