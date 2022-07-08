let value = 123456

let reverse = 0;

let num = value;
while(num > 0){
    let temp = num % 10;
    reverse = ((reverse * 10) + temp);
    num = Math.floor(num/10);
}

console.log(reverse)