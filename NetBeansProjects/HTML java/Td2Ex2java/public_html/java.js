$(function(){
    $("#submit").click(faireCalculAddition);
    $("#submit2").click(faireCalculMultiplication);
});

function faireCalculAddition(){
    var nombre1 = $("#valeur1").val();
    var nombre2 = $("#valeur2").val();
    var somme = eval(nombre1) + eval(nombre2);
    console.log(somme);
    $("#reponse").val(somme);
}

function faireCalculMultiplication(){
    var nombre1 = $("#valeur3").val();
    var nombre2 = $("#valeur4").val();
    var somme = nombre1 * nombre2;
    console.log(somme);
    $("#reponse2").val(somme);
}

















