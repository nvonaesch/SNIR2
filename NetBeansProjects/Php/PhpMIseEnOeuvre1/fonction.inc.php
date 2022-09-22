<?php

function VerifierLogin($login, $pwd)
{
    $retour = FALSE;
    if($login=="toto" && $pwd=="toto"){
        $retour = TRUE;
    }
    return $retour;
}
