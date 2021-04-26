//z43.c 
#include <stdio.h>
#include <stdlib.h>

/* Struktura koja predstavlja cvor drveta */
typedef struct _cvor
{ int broj;
    struct _cvor *l, *d;
} cvor;

/* Pomocna funkcija za kreiranje cvora. */
cvor* napravi_cvor(int b) 
{
  cvor* novi = (cvor*)malloc(sizeof(cvor));
  if (novi == NULL)
  { fprintf(stderr, "Greska prilikom alokacije memorije"); exit(1);}
  novi->broj = b;
  novi->l = NULL;
  novi->d = NULL;
  return novi;
}

/* Funkcija umece broj b u drvo ciji je koren dat 
preko pokazivaca koren. Funkcija vraca pokazivac na
koren novog drveta */
cvor* ubaci_u_drvo(cvor* koren, int b)
{
  if (koren == NULL) return napravi_cvor(b);
  if (b < koren->broj) koren->l = ubaci_u_drvo(koren->l, b);
  else koren->d = ubaci_u_drvo(koren->d, b);
  return koren;
}

/* Funkcija proverava da li dati broj postoji u drvetu */
int pronadji(cvor* koren, int b)
{
  if (koren == NULL) return 0;
  if (koren->broj == b) return 1;
  if (b < koren->broj) return pronadji(koren->l, b);
  else return pronadji(koren->d, b);
}

/* Funkcija ispisuje sve cvorove drveta u infiksnom redosledu L-K-D:*/
void ispisi_drvo(cvor* koren) {
  if (koren != NULL)
  {
    ispisi_drvo(koren->l); 
    printf("%d ", koren->broj);
    ispisi_drvo(koren->d);
  }
}

/* Funkcija oslobadja memoriju koju je drvo zauzima
lo */
void obrisi_drvo(cvor* koren) {
  if (koren != NULL)
  {
  /* Oslobadja se memorija za levo poddrvo */
  obrisi_drvo(koren->l);
  /* Oslobadja se memorija za desno poddrvo */
  obrisi_drvo(koren->d);
  /* Oslobadja se memorija koju zauzima koren */
  free(koren);
  }
}

/* Funkcija sumira sve vrednosti binarnog stabla */
int suma_cvorova(cvor* koren)
{
  if (koren == NULL) return 0;
  return suma_cvorova(koren->l) +koren->broj +suma_cvorova(koren->d);
}

  /* Funkcija prebrojava broj cvorova binarnog stabla
  */
  int broj_cvorova(cvor* koren)
  {
  if (koren == NULL) return 0;
  return broj_cvorova(koren->l) +1 +broj_cvorova(koren->d);
}

/* Funkcija prebrojava broj listova binarnog stabla*/
int broj_listova(cvor* koren)
{
  if (koren == NULL) return 0;
  if (koren->l == NULL && koren->d == NULL) return 1;
  return broj_listova(koren->l) +broj_listova(koren->d);
}

/* Funkcija izracunava sumu listova binarnog stabla
*/
int suma_listova(cvor* koren)
{
  if (koren == NULL) return 0;
  if (koren->l == NULL && koren->d == NULL) return koren->broj;
  return suma_listova(koren->l) +suma_listova(koren->d);
}

/* Funkcija ispisuje sadrzaj listova binarnog stabla */
void ispisi_listove(cvor* koren)
{
  if (koren == NULL) return;
  ispisi_listove(koren->l);
  if (koren->l == NULL && koren->d == NULL)
  printf("%d ", koren->broj);
  ispisi_listove(koren->d);
}

/* Funkcija pronalazi maksimalnu vrednost u drvetu
Koristi se cinjenica da je ova vrednost smestena u
najdesnjem listu */
int max_vrednost(cvor* koren)
{
  if (koren==NULL) return 0;
  if (koren->d==NULL) return koren->broj;
  return max_vrednost(koren->d);
}

/* Iterativna funkcija za pronalazenje maksimalne vrednosti. */
int max_vrednost_nerekurzivno(cvor* koren)
{
  if (koren==NULL) return 0;
  else
  {
  cvor* tekuci;
  for (tekuci=koren; tekuci->d!=NULL; tekuci=tekuci->d);
  return tekuci->broj;
  }
}

#define max(a,b) (((a)>(b))?(a):(b))
/* Funkcija racuna "dubinu" binarnog stabla */
int dubina(cvor* koren)
{
  if (koren==NULL) return 0;
  else
  { 	
    int dl=dubina(koren->l);
    int dd=dubina(koren->d);
    return 1+max(dl,dd);
  }
}
/* Program koji testira rad prethodnih funkcija */
main()
{
  cvor* koren = NULL;
  koren = ubaci_u_drvo(koren, 1);
  koren = ubaci_u_drvo(koren, 8);
  koren = ubaci_u_drvo(koren, 5);
  koren = ubaci_u_drvo(koren, 3);
  koren = ubaci_u_drvo(koren, 7);
  koren = ubaci_u_drvo(koren, 6);
  koren = ubaci_u_drvo(koren, 9);
  if (pronadji(koren, 3)) printf("Pronadjeno 3\n");
  if (pronadji(koren, 2)) printf("Pronadjeno 2\n");
  if (pronadji(koren, 7)) printf("Pronadjeno 7\n");
  ispisi_drvo(koren);
  putchar('\n');
  printf("Suma cvorova : %d\n", suma_cvorova(koren));
  printf("Broj cvorova : %d\n", broj_cvorova(koren));
  printf("Broj listova : %d\n", broj_listova(koren));
  printf("Suma listova : %d\n", suma_listova(koren));
  printf("Dubina drveta : %d\n", dubina(koren));
  printf("Maximalna vrednost : %d\n", max_vrednost(koren));
  ispisi_listove(koren);
  obrisi_drvo(koren);
}
/*
Pronadjeno 3
Pronadjeno 7
1 3 5 6 7 8 9
Suma cvorova : 39
Broj cvorova : 7
Broj listova : 3
Suma listova : 18
Dubina drveta : 5
Maximalna vrednost : 9
3 6 9
*/
