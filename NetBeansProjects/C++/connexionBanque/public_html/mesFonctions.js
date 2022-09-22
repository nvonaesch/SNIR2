$(document).ready(function construireClavier() {
    tab = new Array(16);
    for (i=0;i<16;i++){
        tab[i]=-1;
    }
    for (i=0;i<15;i++){
        alea= Math.floor(Math.random() * 10);
        if (tab[i]===-1){
            tab[i]=alea;
        }
        else{
            tab[i+1]=alea;
        }
        console.log(tab[i]);
    }
    let bouton = "<input type=\"button\" class=\"touche\" value=\"\">";
    for(i=0;i<4;i++){  
        $("#clavier").append(bouton);
    }
    $("#clavier").append("</br>");
    for(i=0;i<4;i++){
        $("#clavier").append(bouton);
    }
    $("#clavier").append("</br>");
    for(i=0;i<4;i++){
        $("#clavier").append(bouton);
    }
    $("#clavier").append("</br>");
    for(i=0;i<4;i++){
        $("#clavier").append(bouton);
    }
});
function effacer(){
    $("#motdepasse").val("");
}
function valider(){
    let login= $("#login").val();
    let motdepasse= $("#motdepasse").val();
    if (login === "nvonaesch" && motdepasse === "1234"){
        alert("Vous êtes bien connecté à la banque !");
    } else {
        alert("Connexion refusée !");
    }
    console.log(login);
    console.log(motdepasse);   
}
$(function (){
    $("#envoyer").click(valider);
    $("#effacer").click(effacer);
});