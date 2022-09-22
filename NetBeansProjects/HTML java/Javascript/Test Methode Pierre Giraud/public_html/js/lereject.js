function testLogin(){
    let login = $("#log").val();
    console.log(login);
    
    let r = /^[a-zA-Z0-9]/g;
    
    $("#log").next('p').remove();
    
    if (r.test(login)){
        $("<p> Login valide</p>").insertAfter("#log");
        
    }
    else {
        $("<p> Login invalide</p>").insertAfter("#log");
    }
}
$(document).ready(function(){
     $("#log").keyup(testLogin);
});



