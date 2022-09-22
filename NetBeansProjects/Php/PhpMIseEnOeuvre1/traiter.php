<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
        echo "Votre login est :" . $_GET["login"] . "<br/>";
        echo "Votre mot de passe est :" . $_GET["pwd"] . "<br/>";
        $login =$_GET["login"];
        $mdPasse =$_GET["pwd"];
        require_once './fonction.inc.php';
        if(VerifierLogin($login, $mdPasse)){
            echo "Utilisateur identifié";
        } else {
            echo "Mauvais login ou mot de passe";
        }
        ?>
    </body>
</html>
