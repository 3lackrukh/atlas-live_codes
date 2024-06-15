int main() {
    char *p = "Chicken";
    char *s = "Rice";
    int c = 300;
    
    bento_t *my_bento = init_bento(p, s, c);
    
    if (my_bento!= NULL) {
        printf("Your lunch is ready!")
        printf("Protein: %s\nSide: %s\nCalories: %d\n", my_bento->protein, my_bento->side, my_bento->calories);
        
        // Remember to free the memory when done
        free(my_bento->protein);
        free(my_bento->side);
        free(my_bento);
    } else {
        printf("Failed to create bento.\n");
    }
    
    return 0;
}