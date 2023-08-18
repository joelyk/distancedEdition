//Auteur : Mr Joel YK
#include <stdio.h>
#include <string.h>

// Fonction pour trouver le minimum parmi trois nombres
int min(int a, int b, int c) {
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

// Fonction pour calculer la distance d'édition entre deux chaînes de caractères
int editDistance(char *x, char *y) {
    int m = strlen(x);
    int n = strlen(y);
    int dp[m + 1][n + 1]; // Tableau pour stocker les distances intermédiaires

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0) {
                dp[i][j] = j; // Initialisation pour la première chaîne vide
            } else if (j == 0) {
                dp[i][j] = i; // Initialisation pour la seconde chaîne vide
            } else if (x[i - 1] == y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1]; // Pas d'opération nécessaire si les caractères sont égaux
            } else {
                // Choix entre trois opérations possibles (insertion, suppression, substitution)
                dp[i][j] = min(dp[i - 1][j - 1] + 2, dp[i - 1][j] + 1, dp[i][j - 1] + 1);
            }
        }
    }

    return dp[m][n]; // Renvoie la distance d'édition entre les deux chaînes
}

int main() {
    char x[] = "mines";
    char y[] = "mimes";
    //www.Pandacodeur.com
    int distance = editDistance(x, y);
    printf("Distance d'édition entre %s et %s : %d\n", x, y, distance);

    return 0;
}
