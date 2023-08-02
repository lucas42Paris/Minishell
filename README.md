# Minishell

🇫🇷

L'objectif du projet Minishell est simple : créer un shell minimaliste personnalisé qui imite les fonctionnalités de base du shell Bash.

Le code doit respecter la Norme imposée par 42 (voir pdf).

__Fonctionnalites a implementer__ :

* Afficher un prompt pour l'entrée de commande.
* Gérer l'historique des commandes.
* Rechercher et exécuter le bon exécutable (en se basant sur la variable d'environnement PATH, ou sur un chemin relatif ou absolu).
* Gérer les guillemets simples et doubles pour interpréter les méta-caractères.
* Implémenter les redirections d'entrée et de sortie (`<`, `>`, `<<`, `>>`).
* Implémenter les pipes (`|`).
* Gérer les variables d'environnement et leur substitution dans les commandes.
* Gérer le code de sortie de la dernière commande exécutée (`$?`).
* Gérer les signaux `ctrl-C`, `ctrl-D` et `ctrl-\`.
* Implémenter les commandes intégrées suivantes : `echo`, `cd`, `pwd`, `export`, `unset`, `env` et `exit`.

__Comment tester le projet__ ?
* `make` a la racine, puis `./minishell`
* Vous etes maintenant dans notre shell personnalise, amusez vous avec des commandes et comparez le comportement avec Bash !

🇺🇸

The code must respect the Norm imposed by 42 (see pdf).

![Rating](rating.png)
