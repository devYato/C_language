#include <stdio.h>
#include <string.h> 

struct Disciplina {
    char nome[30];
    char professor[50];
    int cargaHoraria;
};

struct Aluno {
    char nome[50];
    int idade;
    int matricula;
    struct Disciplina disciplinas[3];
}; 

void definirAluno(struct Aluno *aluno, const char *nome, int idade, int matricula) {
    strcpy(aluno->nome, nome);
    aluno->idade = idade;
    aluno->matricula = matricula;
}

void definirDisciplina(struct Disciplina *disciplina, const char *nome, const char *professor, int cargaHoraria) {
    strcpy(disciplina->nome, nome);
    strcpy(disciplina->professor, professor);
    disciplina->cargaHoraria = cargaHoraria;
}

void exibirAluno(const struct Aluno *aluno) {
    printf("Nome: %s\n", aluno->nome);
    printf("Idade: %d\n", aluno->idade);
    printf("Matricula: %d\n", aluno->matricula);
    printf("Disciplinas:\n");
    for (int i = 0; i < 3; i++) {
        printf("  Nome: %s\n", aluno->disciplinas[i].nome);
        printf("  Professor: %s\n", aluno->disciplinas[i].professor);
        printf("  Carga Horaria: %d\n", aluno->disciplinas[i].cargaHoraria);
    }
}

int main() {
    struct Aluno aluno1;
    definirAluno(&aluno1, "João Silva", 20, 123456);
    
    definirDisciplina(&aluno1.disciplinas[0], "Matematica", "Prof. Carlos", 60);
    definirDisciplina(&aluno1.disciplinas[1], "Fisica", "Prof. Ana", 45);
    definirDisciplina(&aluno1.disciplinas[2], "Quimica", "Prof. Pedro", 30);
    
    exibirAluno(&aluno1);
    
    return 0;
}
// This code defines a structure for a student and their subjects, initializes the data, and displays it.