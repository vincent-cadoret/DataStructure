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

- `void init_stack(Stack *s);`  init: Initialise la pile   @param s
- `void push_stack(Stack *s, float value);`   push : Empilement de données  @param s  @param value
- `float pop_stack(Stack *s);`  pop : Récupération des données  @param s  @return
- `bool is_stack_empty(Stack *s);`   is_empty: Etat de la pile  @param s  @return
- `float peek_stack(Stack *s);` //aka top or front   peek : Récupération de données sans des-empiler   @param s   @return
- `void dup(Stack *s);`  dup : Duplique le sommet de la pile  @param s
- `void swap(Stack *s);`  swap : Echange les deux éléments au sommet   @param s
- `void clear_stack(Stack *s);`  clear: Vide la pile  @param s

**Partie 2 : implémentation d’une file:**   
_Une file est une séquence dans laquelle on ne peut ajouter un élément qu’a une seule extrémité et ne supprimer un élément qu’à l’autre extrémité : la«tête»de la file._
- `void init_queue(Queue *s);`  enqueue: Ajout de données  @param q  @param value
- `void enqueue(Queue *q, float value);`  init_queue : Récupération des données   @param s
- `float dequeue(Queue *q);`  dequeue : Récupération des données  @param q  @return
- `bool is_queue_empty(Queue *q);`   is_empty : Etat de la pile   @param q   @return
- `float front(Queue *q);` //aka peek  front : Récupération de données sans des-empiler   @param q  @return
- `void clear_queue(Queue *q);`  clear: Vide la file  @param q

**Partie 3 : implémentation d’une liste:**   
_Une liste est une structure de données permettant de regrouper des données de manière à pouvoir y accéder librement (contrairement aux files et aux piles, dont l'accès se fait respectivement en mode FIFO et LIFO)._
- `void init_array_list(Array_list *l);`  Initialise le tableau.  @param l
- `void insert_at(Array_list *l, int position, float value);`  Inserer a une position defini  @param l  @param position  @param value
- `void add(Array_list *l, float value);`   Insere a la fin du tableau  @param l  @param value
- `float remove_at(Array_list *l, int position);`   Retire une valeur a la position donner. @param l  @param position  @return
- `float get_at(Array_list *l, int position);`   Obtiens la valeur a une position donner.  @param l  @param position  @return
- `void clear_list(Array_list *l);`    Vide le tableau de toute ses valeurs.  @param l

**Partie 4 : Implémentation d’un tas:**   
_En informatique, le tri par tas est un algorithme de tri par comparaisons. Cet algorithme est de complexité asymptotiquement optimale, c'est-à-dire que l'on démontre qu'aucun algorithme de tri par comparaison ne peut avoir de complexité asymptotiquement meilleure. Dans l'algorithme, on cherche à obtenir un tas, c'est-à-dire un arbre binaire vérifiant les propriétés suivantes (les deux premières propriétés découlent de la manière dont on considère les éléments du tableau) : la différence maximale de profondeur entre deux feuilles est de 1 (i.e. toutes les feuilles se trouvent sur la dernière ou sur l'avant-dernière ligne) ; les feuilles de profondeur maximale sont « tassées » sur la gauche. chaque nœud est de valeur supérieure (resp. inférieure) à celles de ses deux fils, pour un tri ascendant (resp. descendant). Il en découle que la racine du tas (le premier élément) contient la valeur maximale (resp. minimale) de l'arbre. Le tri est fondé sur cette propriété._
- `void init_heap(Heap *h);` Initialise le tableau.  @param h
- `bool is_heap_empty(Heap *h);` Vérifie si le heap est vide.  @param h @return
- `float pop_heap(Heap *h);` //pop the root value  @param h @return
- `void push_heap(Heap *h, float value);`  @param h  @param value
- `float replace(Heap *h, float value);` // pop root and replace with a new value.   @param h  @param value @return
- `float peek_heap(Heap *h);` // return root value but don’t remove it   @param h  @return
- `void clear_heap(Heap *h);`

// En option
- `void heapify(Heap *s, float array[], size_t array_size);`   @param s  @param array  @param array_size

// Create Heap from array
- `void merge(Heap *dest, Heap *src);` //merge src into dest

## Démarrage
Pour lancer le programme, _il faut exécuter la commande suivante depuis un terminal de cmd_:   
 - Se placer dans le répertoire du projet.
 - `cd cmake-build-debug`
 - `DataStructure.exe`
 
 ![Screenshot_1](https://user-images.githubusercontent.com/58009814/137632116-11dd885d-bbe9-459a-ac33-5d1b8c3aa1ff.png)


## Auteurs   
* **Vincent Cadoret** _alias_ [@vincent-cadoret](https://github.com/vincent-cadoret)   
* **Mustafa Harbutoglu** _alias_ [@MustafaHar](https://github.com/MustafaHar)   

## Evolution à venir   
Pour l'instant, aucune évolution du programme est envisagé. 
Si la décision change, vous serez informé aussitôt.   

## Sources:   
**Wikipedia:**
- [Tri par tas](https://fr.wikipedia.org/wiki/Tri_par_tas) - Wikipedia
