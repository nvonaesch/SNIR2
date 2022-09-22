function demandeNom() {
    nom = prompt("Quel est votre nom?");
    alert("salut : "+ nom);
}

function confirmation() {
    envoyer = confirm("etes vous certain de vouloir envoyer les données ?");
    if (envoyer === true) {
        document.forms[monForm].submit();
    }
}

