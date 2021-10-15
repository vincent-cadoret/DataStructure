# DataStructure

CPE Lyon - 3ICS - Année 2021/22   
Développement informatique - 1   
**TP 3 – Structure de données**   
(travail en binôme, temps estimé : 8h)   
15 Octobre 2021    


## Pour commencer   
Pour ce TP vous allez devoir récupérer le projet « DataStructure » sur le serveur. Ce projet contient les déclarations de différentes fonctions permettant de manipuler des piles, des files, listes et tas. L’implémentation sera basée sur l’utilisation de tableaux.   
  
-Vérifiez le comportement de vos fonctions (créez une fonction test_stack, test_queue test_arraylist, test_heap dans le fichier main.c. Ces fonctions contiendront le code que vous avez utilisé pour tester vos implémentations)   
-Utilisez les assertions dans un premier temps.   
-Utilisez les frameworks de test unitaire. Cunit est  particulièrement simple à prendre en main (surtout avec Netbeans, après l’installation des packages CUnit et Cunit-devel).   
-Vos fonctions doivent être annotées (javadoc ou doxygen).   
-Votre code doit être versionné.   
-N’oubliez pas d’inviter votre enseignant dans votre projet.   

### Fonctions principales   
**Partie 1 : implémentation d’une pile:**   
_Une pile est une séquence dans laquelle on ne peut ajouter et supprimer un élément qu’a une seule extrémité : le«sommet» de la pile._  

- `void init_stack(Stack *s);`
- `void push_stack(Stack *s, float value);`
- `float pop_stack(Stack *s);`
- `bool is_stack_empty(Stack *s);`
- `float peek_stack(Stack *s);` //aka top or front
- `void dup(Stack *s);`
- `void swap(Stack *s);`
- `void clear_stack(Stack *s);`

**Partie 2 : implémentation d’une file:**   
_Une file est une séquence dans laquelle on ne peut ajouter un élément qu’a une seule extrémité et ne supprimer un élément qu’à l’autre extrémité : la«tête»de la file._
- `void init_queue(Queue *s);`
- `void enqueue(Queue *q, float value);`
- `float dequeue(Queue *q);`
- `bool is_queue_empty(Queue *q);`
- `float front(Queue *q);` //aka peek
- `void clear_queue(Queue *q);`

**Partie 3 : implémentation d’une liste:**   
_Une liste est une structure de données permettant de regrouper des données de manière à pouvoir y accéder librement (contrairement aux files et aux piles, dont l'accès se fait respectivement en mode FIFO et LIFO)._
- `void init_array_list(Array_list *l);`
- `void insert_at(Array_list *l, int position, float value);`
- `void add(Array_list *l, float value);`   
- `float remove_at(Array_list *l, int position);`   
- `float get_at(Array_list *l, int position);`   
- `void clear_list(Array_list *l);`   

**Partie 4 : Implémentation d’un tas:**   
_En informatique, le tri par tas est un algorithme de tri par comparaisons. Cet algorithme est de complexité asymptotiquement optimale, c'est-à-dire que l'on démontre qu'aucun algorithme de tri par comparaison ne peut avoir de complexité asymptotiquement meilleure. Dans l'algorithme, on cherche à obtenir un tas, c'est-à-dire un arbre binaire vérifiant les propriétés suivantes (les deux premières propriétés découlent de la manière dont on considère les éléments du tableau) : la différence maximale de profondeur entre deux feuilles est de 1 (i.e. toutes les feuilles se trouvent sur la dernière ou sur l'avant-dernière ligne) ; les feuilles de profondeur maximale sont « tassées » sur la gauche. chaque nœud est de valeur supérieure (resp. inférieure) à celles de ses deux fils, pour un tri ascendant (resp. descendant). Il en découle que la racine du tas (le premier élément) contient la valeur maximale (resp. minimale) de l'arbre. Le tri est fondé sur cette propriété._
- `void init_heap(Heap *h);`
- `bool is_heap_empty(Heap *h);`
- `float pop_heap(Heap *h);` //pop the root value
- `void push_heap(Heap *h, float value);`
- `float replace(Heap *h, float value);` // pop root and replace with a new value.
- `float peek_heap(Heap *h);` // return root value but don’t remove it
- `void clear_heap(Heap *h);`

// En option
- `void heapify(Heap *s, float array[], size_t array_size);`   

// Create Heap from array
- `void merge(Heap *dest, Heap *src);` //merge src into dest

## Démarrage
Pour lancer le programme, _il faut exécuter la commande suivante depuis un terminal de cmd_:   
``   

## Auteurs   
* **Vincent Cadoret** _alias_ [@vincent-cadoret](https://github.com/vincent-cadoret)   
* **Mustafa Harbutoglu** _alias_ [@MustafaHar](https://github.com/MustafaHar)   

## Evolution à venir   
Pour l'instant, aucune évolution du programme est envisagé. 
Si la décision change, vous serez informé aussitôt.   

## Sources:   
