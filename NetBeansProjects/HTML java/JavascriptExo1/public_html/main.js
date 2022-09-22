function kingOfCool() {
    //alert('RoI dU cOoL');
    let lelogin = window.document.forms["monForm"].login.value;
    alert("votre login = " + lelogin);
}
var anonyme = function () {
    alert('Fonction anonyme');
};
//kingOfCool();

var a = 10;
let b = 5;

c = a + b;

console.log(c);
anonyme();

$(document).ready(function () {
    // Fonction anonyme comme argument de la fct click
    //$("#element1").click(function () {
    //    console.log("Le paragraphe a été cliqué.");
    //    alert('Le paragraphe a été cliqué.');
    //});
    
    //lelogin = window.document.forms["monForm"].login.value;
    
    //console.log("value = " + window.document.forms["monForm"].login.value);
    let login = prompt("Donnez votre login c:" , "nom d'utilisateur");
    console.log("Vous avez saisi :",login);
    $("#element2").click(kingOfCool);
});
    