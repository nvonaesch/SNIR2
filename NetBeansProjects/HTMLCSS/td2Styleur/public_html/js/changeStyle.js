
function changerCouleurBordure()
{
    var coul = $("#couleurBordure").val();
    $("#divTest").css("border-color", coul);
}
function changerLargeurBordure()
{
    var largeur = $("#largeurBordure").val();
    $("#divTest").css("border-width", largeur ,"px");
    
}
function changerCourbureBordure(){
    var courbe = $("#courbeBordure").val();
    var courbepx = courbe + "px";
    $("#divTest").css("border-radius", courbepx);
}
function changerStyleBordure(){
    var style = $("#styleBordure").val();
    $("#divTest").css("border-style", style);
}
function changerCaracteristiqueOmbre(){
    var dechorizontale = $("#ombreDecalH").val()+ "px ";
    
    var decverticale = $("#ombreDecalV").val()+ "px ";
    
    var flou = $("#ombreDistFlou").val()+ "px ";
    
    var taille = $("#ombreTaille").val()+ "px ";
    
    var couleur = $("#ombreCouleur").val();
    var chainecomplete = dechorizontale + decverticale + flou + taille + couleur;
    console.log(chainecomplete);
    $("#divTest").css("box-shadow", chainecomplete);
    
}
function changerStyleTexte(){
    var texte = $("#texteVal").val();
    var tailleTexte = $("#texteTaille").val
}
$(function () {
    /*  gestion bordure */
    $("#couleurBordure").change(changerCouleurBordure);
    $("#largeurBordure").change(changerLargeurBordure);
    $("#courbeBordure").change(changerCourbureBordure);
    $("#styleBordure").change(changerStyleBordure);
    $("#zoneOmbre").change(changerCaracteristiqueOmbre);
});
