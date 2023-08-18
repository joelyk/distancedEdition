#Calcul de la Distance d'Édition (Distance de Levenshtein) en C

Ce dépôt contient un programme en langage C pour calculer la distance d'édition entre deux mots, également connue sous le nom de distance de Levenshtein. La distance d'édition mesure le nombre minimal d'opérations (insertions ou suppressions de caractères) nécessaires pour transformer un mot en un autre. Cela trouve des applications dans des domaines tels que la correction d'orthographe, la bio-informatique et le traitement automatique du langage naturel.
Comment ça fonctionne

Le programme utilise la programmation dynamique pour calculer la distance d'édition entre deux chaînes de caractères x et y. Il remplit un tableau bidimensionnel dp où dp[i][j] représente la distance d'édition entre les préfixes de longueur i de la chaîne x et les préfixes de longueur j de la chaîne y. Les opérations possibles sont l'insertion, la suppression ou la substitution de caractères.

La fonction editDistance prend en entrée deux chaînes de caractères x et y et renvoie la distance d'édition entre ces deux chaînes.
Comment utiliser le programme

    Assurez-vous d'avoir un compilateur C installé sur votre système (par exemple, GCC).
    Clonez ce dépôt ou téléchargez le fichier edit_distance.c.
    Ouvrez un terminal et naviguez jusqu'au répertoire où se trouve le fichier edit_distance.c.
    Compilez le programme en utilisant la commande : gcc -o edit_distance edit_distance.c
    Exécutez le programme en entrant : ./edit_distance

Le programme est préconfiguré avec les chaînes de caractères "mines" et "mimes". Vous pouvez modifier les valeurs de x et y dans la fonction main pour tester la distance d'édition entre d'autres mots.
Exemple de sortie

Après avoir exécuté le programme avec les chaînes "mines" et "mimes", vous devriez obtenir une sortie similaire à celle-ci :


Distance d'édition entre mines et mimes : 2

Cela signifie qu'il faut effectuer deux opérations (une suppression et une insertion) pour transformer le mot "mines" en "mimes".
Auteur

[Par Joel Yankam!]
