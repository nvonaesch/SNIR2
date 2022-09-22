function afficheInfo(){
    var texteDeLaDiv = document.getElementById("divclique").textContent;
    alert("texte dans la div :" + texteDeLaDiv);
}
function afficheInfoDiv(){
    var texteDeLaDivSouris = document.getElementById("divdessus").textContent;
    alert("texte dans le paragraphe :" + texteDeLaDivSouris);
}
function cacherInfo(){
    console.log("functtion cacher")
    $('#divdessus').hide();
}