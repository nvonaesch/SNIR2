$(document).ready(function () {
    $('#notes').DataTable(
            {
                "lengthMenu": [[5, 10, 15, 25, 50, 100, -1], [5, 10, 15, 25, 50, 100, "Tous"]],
                "pageLength": 5,
                "language": {
                    "lengthMenu": "Afficher _MENU_ lignes par page",
                    "info": "page _PAGE_ sur _PAGES_",
                    "infoEmpty": "pas de résultat",
                    "search": "Recherchez: ",
                    "paginate": {
                        "first": "Premier",
                        "last": "Dernier",
                        "next": "Suivant",
                        "previous": "Précédent"
                    },
                },
            }
    );
});


