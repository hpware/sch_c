#include <stdio.h>

int main() {
    char cat_name[] = "cat6";
    int cat_age = 2;
    double old_cat_weight = 10.54;
    double new_cat_weight = 4.33;
    printf("My %s is %d years old\n", cat_name, cat_age);
    printf("The weight of the %s is %.1f\n", cat_name, old_cat_weight);
    printf("and is heavy idk.\n");
    printf("one day the cat went outside and walked for a few miles \n");
    printf("then %s went back home with %f\n", cat_name, new_cat_weight);
    if (old_cat_weight > new_cat_weight) {
        printf("WHOA, %s has lost %.2f pounds\n", cat_name, old_cat_weight - new_cat_weight);
    } else if (new_cat_weight > old_cat_weight) {
        printf("WHOA, %s has lost %.2f pounds\n", cat_name, new_cat_weight - old_cat_weight);
    }
    return 0;
}
