function gestionCalculatrice() {

    var touche = $(this).val();
    
    switch (touche) {
        case "=":
            var resultat = eval($("#ecran").val());
            $("#ecran").val(resultat);
            break;
        case "c":
            $("#ecran").val("");
            break;
        default:
            $("#ecran").val($("#ecran").val() + touche);
    }
}
$(function () {
    $(".touche").click(gestionCalculatrice);
});
