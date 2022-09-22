function calculer() {
    //let operande1 = $("#op1").val()*1;
    //console.log("Operande 1 = " + operande1);
    
    let operande2 = $("#op2").val()*1;
    console.log("Operande 2 = " +operande2);
    
    let operateur = $("#operateur option:selected").val();
    let resultat=0;
    switch(operateur){
        case "+" :
            resultat = operande1 + operande2;
            break;
        case "-" :
            resultat = operande1 - operande2;
            break;
        case "*" :
            resultat = operande1 * operande2;
            break;
        case "/" :
            resultat = operande1 / operande2;
            break;
    }
    $("#res").val(resultat);
}
function verifier(){
    let mdp = $("#mdp").val();
    let conf_mdp = $("#conf_mdp").val();
    if (mdp != conf_mdp){
        alert("Erreur confirmation du mot de passe ! !");
    }
}
$(document).ready(function () {
    console.log("Je suis dans le main");
    $("#cal").click(calculer); // Quand je clique sur le bouton calculer je lance la fonction calculer
    $("#inscription").submit(verifier);
});
