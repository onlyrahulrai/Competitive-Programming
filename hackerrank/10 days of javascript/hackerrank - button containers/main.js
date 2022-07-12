document.addEventListener("DOMContentLoaded",function(){
    const btn_ids = [1,2,3,4,6,7,8,9]
    const btn_values = [1,2,3,4,6,7,8,9]

    const btn5 = document.getElementById("btn5")

    btn5.addEventListener("click",function(){
        btn_values.unshift(btn_values.pop())
        for(let i = 0;i < btn_values.length;i++){
            const btn = document.getElementById("btn"+btn_ids[i])
            btn.innerText = btn_values[i]
        }
    })
})