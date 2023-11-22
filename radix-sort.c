#include <stdio.h>
 
static void sort(void)

 
static void count_sort(int array[], int n, int exp) 
{ 
    int output[n];
    int i, count[10] = {0};
 
    for (i = 0; i < 10; i++) {
        count[i] = 0;
    }
 
    for (i = 0; i < n; i++) {
        count[(array[i] / exp) % 10]++;
    }
 
    for (i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    } 
 
    for (i = n - 1; i >= 0; i--) { 
        output[count[(array[i] / exp) % 10] - 1] = array[i]; 
        count[(array[i] / exp) % 10]--; 
    }
 
    for (i = 0; i < n; i++) 
        array[i] = output[i]; 
} 
 
static void sort(int array[], int n) 
{ 
    int m = get_max(array, n); 
 
    for (int exp = 1; m / exp > 0; exp *= 10) 
        count_sort(array, n, exp); 
} 
 
static void print_array(int *array, int len)
{
    int i;
 
    for (i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
 
int main()
{
    int array[MAX_LEN], len, i;
 
    printf("What's the length of the array? Maximum lenght is %d\n", MAX_LEN);
    scanf("%d", &len);
 
    printf("Gimme the %d elements\n", len);
    for (i = 0; i < len; i++) {
    scanf("%d", &array[i]);
    }
 
    printf("Nonsorted array: ");
    print_array(array, len);
 
    sort(array, len);
 
    printf("Sorted array: ");
    print_array(array, len);
 
    return 0; 
}
Pe parcursul creării acestui Pull Request țineți cont de următoarele:

Alegeți nume relevant pentru branch-ul pe care îl veți crea.
Adăugați o secțiune în README.md în care să descrieți algoritmul pe care l-ați implementat (Radix Sort).
Dați un mesaj de commit și o descriere potrivită PR-ului vostru.
Verificați pe tot parcursul dezvoltării starea repository-ului (git status) și istoricul de commituri (git log).
Bune practici
Alternativa la a crea un Pull Request ar fi să lucrăm direct pe branch-ul master.

Așa cum am menționat și în secțiunile anterioare, este BAD-PRACTICE să lucrăm direct pe branch-ul master din mai multe motive:

Pe branch-ul master se ține întotdeauna o versiune de cod funcțională. Astfel, lucrul pe acest branch ar însemna să facem commituri doar atunci când o funcționalitate este finalizată. Altfel pe branch-ul master vom avea o bucată de cod neterminată care poate să afecteze întreg proiectul.
Lucrul pe un singur branch nu oferă posibilitatea de a da feedback pe schimbările făcute pe repository. Dacă nu avem posibilitatea să oferim feedback unui coleg prin intermediul GitHub, atunci vom avea nevoie să comunicăm pe un alt mediu observațiile noastre, iar ei vor trebui să creeze un nou commit pentru rezolvarea problemelor. Mult mai simplu este să se realizeze întreaga etapă de feedback, numită code review, înainte ca schimbările să apară pe master.
În unele situații nici nu vom avea drepturi să scriem pe branch-ul master, astfel devenind obligatoriu lucrul pe un alt branch și integrarea codului în branch-ul master printr-un Pull Request.
Cuprins
Laborator 08 (one page)
Introducere în Git și GitHub
Primele commituri
Lucrul pe branch-uri
Crearea unui Pull Request (PR) pe GitHub
1) https://en.wikipedia.org/wiki/Source_code
2) Mesajele de commit trebuie să fie punctuale și ușor de înțeles. Alte persoane care lucrează la același proiect software vor vrea să înțeleagă rapid ce am modificat printr-un anumit commit. Recomandări punctuale legate de crearea unor bune mesaje de commit găsiți aici: https://chris.beams.io/posts/git-commit/
3) Codul hash este calculat ca o sumă de control SHA-1 a conținutului commitului.
4) Noi am pornit de la un repository gol, așadar operația pull nu a fost necesară.
5) ID-ul unui commit are o formă lungă, completă, și o formă scurtă formată din primele 7 caractere. De exemplu, pentru commitul cu ID-ul b2a590a8637f1eab96e557334dbd4be14bf95833, forma scurtă este b2a590a.
6) Este GOOD PRACTICE ca fiecare modificare făcută pe un repository să fie făcută pe un branch nou. Branch-ul trebuie să aibă un nume sugestiv pentru ca ceilalți să poată înțelege rapid ce schimbări se fac pe el.
7) https://docs.github.com/en/github/collaborating-with-issues-and-pull-requests/about-pull-requests https://www.atlassian.com/git/tutorials/making-a-pull-request
8) Putem schimba acest branch prin apăsarea butonului base: master. Vor fi afișate toate branch-urile din acest repository și vom putea alege în ce branch să integrăm PR-ul.
Laborator 08 - Dezvoltarea aplicațiilor
Laborator 08 (one page)
Introducere în Git și GitHub
Primele commituri
Lucrul pe branch-uri
Crearea unui Pull Request (PR) pe GitHub
Navigare
Anunțuri
USO Need to Know
Calendar
Reguli generale și notare
Notare
Notare AC
Hit List
Orar
Echipă
Resurse
Catalog
Cartea de USO
Cheatsheet Bash
Cheatsheet
Conturi de email @stud.acs.upb.ro
Feed RSS
Folosire Vim
Mașina virtuală
Terminal screen-share folosind tmate
Ce să fac după USO?
Cursuri
01. Introducere în sisteme de operare
02. Utilizarea sistemului de fișiere
03. Procese
04. Rețelistică și Internet
05. Interfața în linia de comandă
06. Automatizarea sarcinilor. Shell scripting
07. Dezvoltarea programelor
08. Componente Hardware. Pornirea Sistemului
09. Utilizatori
10. Securitatea Sistemului
11. Automatizarea sarcinilor
12. Administrarea spatiului de stocare
Laboratoare
01. Acomodarea în Linux
02. Lucrul cu fișiere (partea 1)
03. Lucrul cu fișiere (partea a 2-a)
04. Instalarea și utilizarea aplicațiilor
05. Conectarea la Internet
06. Îmbunătățirea lucrului în linia de comandă
07. Automatizarea în linia de comandă
08. Dezvoltarea aplicațiilor
09. Utilizatori și permisiuni
10. Investigarea securității sistemului
11. Planificarea sarcinilor administrative
12. CTF
Altele
Recapitulare midterm
Laboratoare AC
01. Acomodarea în Linux
02. Lucrul cu fișiere (partea 1)
03. Lucrul cu fișiere (partea a 2-a)
04. Instalarea și utilizarea aplicațiilor
05. Conectarea la Internet
06. Îmbunătățirea lucrului în linia de comandă
Altele
Recapitulare midterm
Teme
Instrucțiuni de folosire a checkerului
Întrebări frecvente
Tema 0
Tema 1
Tema 2
Table of Contents
Laborator 08 - Dezvoltarea aplicațiilor
Introducere în Git și GitHub
Crearea unui cont pe GitHub (dacă nu aveți deja)
Pregătirea inițială a mediului Git
Crearea primului repository
Crearea unui repository gol pe GitHub
Crearea unui repository gol local
Conectarea celor două repository-uri
Primele commituri
Adăugarea unui fișier README
Crearea primului commit
Verificarea stării repository-ului local
Adăugarea unui fișier (în staging area)
Crearea commitului local
Crearea unui nou commit
Crearea unui commit cu modificări în fișiere existente
Verificarea istoricului de commituri
Publicarea commiturilor în repository-ul remote
Obținerea commiturilor din repository-ul remote
Lucrul pe branch-uri
Adăugarea unui fișier .gitignore repository-ului
Operația merge dintre un branch secundar și master
Ștergerea unui branch
Modificarea fișierului .gitignore
Exerciții
Bune practici
Crearea unui Pull Request (PR) pe GitHub
Pași Pull Request
Crearea unui branch nou
Crearea unui commit pe branch-ul nou creat
Crearea Pull Requestului
Descrierea Pull Requestului
Configurarea branch-ului în care vom integra PR-ul
Recenzii și recenzenți
Integrarea PR-ului
Ștergerea branch-ului în urma integrării în branch-ul master
Exercițiu - Crearea unui PR
Bune practici
Cuprins
uso/labora{
    // TODO: add radix sort algorithm here
}
 
int main()
{
    return 0;
}
