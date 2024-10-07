const form = document.querySelector("form-box");
eField = form.querySelector(".email"),
eInput = email.querySelector("input");
let signup=document.getElementById("signup")
let signin=document.getElementById("signin")
let title=document.getElementById("title")
let nameField=document.getElementById("nameField")
signin.onclick=function(){
    nameField.style.maxHeight="0";
    
  signup.classList.add("disable")  
  signin.classList.remove("disable") 
   if(eInput.value=="")
   {title.textContent="Sign in";}
}
signup.onclick=function(){
    nameField.style.maxHeight="65px";
    title.textContent="Sign up";
  signup.classList.remove("disable")  
  signin.classList.add("disable")  
}
