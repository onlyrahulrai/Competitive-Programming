const btn = document.getElementById("btn")
let counter = 0;
btn.addEventListener("click",function(){
    counter += 1;
    btn.innerText = counter;
})

