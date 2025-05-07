#include <stdio.h>
#include <string.h>

struct movies {
    char title[50];
    char director[50];
    int year;
    float rating;
};

void define_movie(struct movies *mov, const char *title, const char *director, int year, float rating) {
    strcpy(mov->title, title);
    strcpy(mov->director, director);
    mov->year = year;
    mov->rating = rating;
}

int main() {
    struct movies mov[3];
    define_movie(&mov[0], "Inception", "Christopher Nolan", 2010, 8.8);
    define_movie(&mov[1], "The Matrix", "Lana Wachowski, Lilly Wachowski", 1999, 8.7);
    define_movie(&mov[2], "Interstellar", "Christopher Nolan", 2014, 8.6);

    for (int i = 0; i < 3; i++) {
        printf("Title: %s\n Director: %s\n Year: %d\n Rating: %.1f\n", mov[i].title, mov[i].director, mov[i].year, mov[i].rating);
    }
}