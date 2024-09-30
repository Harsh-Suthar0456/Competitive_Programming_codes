function table(){
    let x=prompt("ENTER THE NUMBER YOU WANT HE TABLE OF");
    let tab=``;
    for(let i=1;i<=10;i++){
        tab+= `${x} * ${i}=${x*i}\n`;
    }
    alert(tab);
}