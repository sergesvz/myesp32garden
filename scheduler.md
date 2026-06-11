L'ESP32 ne se réveille plus toutes les heures. Il se réveille uniquement :

pour un arrosage programmé ;
* après un appui long sur le bouton ;
* après un redémarrage.

Le principe :

Au démarrage, l'ESP récupère l'heure.
* Il calcule la prochaine vanne à exécuter parmi les 4 vannes
* Il dort exactement jusqu'à cette heure.
* Il se réveille quelques secondes avant (ou exactement à l'heure).
* Il exécute l'arrosage.
* Il recalcule le prochain événement.
* Il retourne dormir.