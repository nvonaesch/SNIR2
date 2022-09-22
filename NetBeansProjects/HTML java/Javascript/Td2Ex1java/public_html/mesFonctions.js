function verifierMotDePasse() {
    var mdp = $("#mdp").val();
    var confmdp = $("#confirmation").val();
    
    console.log("mdp:" + mdp +"confmdp :" + confmdp);
    
    if (mdp !== confmdp) {
        alert("Les mots de passe ne sont pas identiques");
    }
    
}
function changerOptions() {
    var versionos = $("#se").val();
    $("#version").empty();
    switch(versionos){
        case "WIN":
            $('#version').append($("<option>", {value:"seven"}).text("Seven"));
            $('#version').append($("<option>", {value:"win10"}).text("Windows 10"));
            $('#version').append($("<option>", {value:"win11"}).text("Windows 11"));
            $('#version').append($("<option>", {value:"winser"}).text("Windows Server"));
            break;
        case "LIN":
            $('#version').append($("<option>", {value:"deb"}).text("Debian"));
            $('#version').append($("<option>", {value:"ubun"}).text("Ubuntu"));
            $('#version').append($("<option>", {value:"fedo"}).text("Fedora"));
            $('#version').append($("<option>", {value:"suse"}).text("SuSE"));
            break;
        case "MAC":
            $('#version').append($("<option>", {value:"tiger"}).text("Tiger"));
            $('#version').append($("<option>", {value:"leopard"}).text("Leopard"));
            $('#version').append($("<option>", {value:"snleopard"}).text("Snow Leopard"));
            $('#version').append($("<option>", {value:"lion"}).text("LIon"));
            break;
    }
}
$(document).ready(function () {
    $("#inscription").click(verifierMotDePasse);
    $("#se").change(changerOptions);
});