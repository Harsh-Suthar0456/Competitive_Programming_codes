function myFunction() {
    alert("deem");
}
function validate(){
    let uname=document.forms["Reg"]["username"].value;
    let pass=document.forms["Reg"]["password"].value;
    //alert(pass);
    pattern=/^(?=.*[0-9])(?=.*[a-z])(?=.*[A-Z])[a-zA-Z0-9!@#$%^&*]{8,}/
    if(!/^[a-zA-Z]+ [a-zA-Z]+/.test(uname)){
        alert("naam shi likh");
        return false;
    }
    if(!pattern.test(pass)){
        alert("password naya bana");
        return false;
    }
}