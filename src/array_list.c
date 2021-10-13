#include <array_list.h>

/**
 * Initialise le tableau.
 * @param l
 */
void init_array_list(Array_list *l) {
    l->index = 0;
}


/**
 * Inserer a une position defini
 * @param l
 * @param position
 * @param value
 */
void insert_at(Array_list *l, int position, float value) {
    if (position > l->index) {
        add(l, value);
    } else {
        for (int i = l->index; i >= position; i--) {
            l->data[i + 1] = l->data[i];
        }
        l->data[position] = value;
        l->index++;
    }
}


/**
 * Insere a la fin du tableau
 * @param l
 * @param value
 */
void add(Array_list *l, float value) {
    l->data[l->index] = value;
    l->index++;
}


/**
 * Retire une valeur a la position donner.
 * @param l
 * @param position
 * @return
 */
float remove_at(Array_list *l, int position) {
    float tmp = l->data[position];
    if (position <= l->index) {
        for (int i = position; i < l->index; i++) {
            l->data[i] = l->data[i + 1];
        }
        l->index--;
    }
    return tmp;
}


/**
 * Obtiens la valeur a une position donner.
 * @param l
 * @param position
 * @return
 */
float get_at(Array_list *l, int position){
    return l->data[position];
}


/**
 * Vide le tableau de toute ses valeurs.
 * @param l
 */
void clear(Array_list *l){
    init_array_list(l);
}