$(document).ready(function () {
    $("#rechercher").keyup(obtenirPays);
});

function obtenirPays() {
    let valeur = $(this).val();
    console.log(valeur);
    if (valeur.length > 0) {
        $.ajax({
            type: "GET",
            url: "https://philippes.ddns.net/exo/Ajax/pays.php",
            data: "nomPays=" + valeur,
            success: function (dataJson) {
                console.log(dataJson);
                $("#suggestions").html(transformer(dataJson));
                $("#rechercher").css("background: FFFF");
            }
        });
    } else {
        $("#suggestions").empty();
    }

}

// fonction pour transformer un JSON en liste HTML
function transformer(dataJson) {
    let codehtml = "<ul>";
    for (i = 0; i < dataJson.length; i++) {
        codehtml += "<li onClick = select('" + dataJson[i] + "')>" + dataJson[i] + "</li>";
    }

    codehtml += "</ul>";
    console.log(codehtml);
    return codehtml;
}

function select(valeur){
    $("#rechercher").val(valeur);
    $("#suggestions").hide();
}