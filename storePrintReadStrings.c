#include<stdio.h>

int storePrintReadStrings( ) {
    char word[50]; //array of characters (string) -
    printf("Please enter a word with up to 50 letters: ");
    scanf("%s", word) ;
    printf("The word read is: %s.\n", word);
    printf("The caracters are: <%c> <%c> <%c> <%c> \n", word[0],word[1],word[2],word[3]);
    //word[1] = ' a' ;
    printf("The new word is %s\n", word);
return 0;
}

int RepetitonOfStringsActivity() {
    int numberOfRepetitions = 0 ;
    char word2[101];
    int k = 0 ;

   // scanf("%d %s", &numberOfRepetitions, word2);

    for (k=0 ; k < numberOfRepetitions ; k++) {
        printf("%s\n", word2);

    }
return 0 ;
}

int NullTerminator() { //  \0
    char word1[5] ;
    char word2[8];

    word1[3]='\0';
    word2[2]='\0';

    scanf("%s %s", word1 , word2);
    printf("%s %s\n",word1,word2);
    return 0;
}

int swapFisrtAndLastName() {
    int numberOfNames = 0;
    char firstName[101];
    char lastName[101];
    int k = 0;

    scanf("%d", &numberOfNames);

    for (k=0; k < numberOfNames ; k++) {
    scanf("%s %s",lastName,firstName);
    printf("%s %s\n",firstName, lastName );
    }
return 0;
}

int FindLengthOfStrings () {
    char word[30];
    int i = 0;

    printf("Please enter a word: ");
    scanf("%s", word);

    while (word[i] != '\0') {
        i++ ;
    }
    printf("%s has word length %d.\n", word, i);


return 0;
}

int oddEvenActivity() {
    char name[50];
    int i = 0;

    scanf("%s", name);
    while (name[i] != '\0') {
        i++ ;
    }

  if (i%2 != 0) { //resto da divisao por 2
    printf("%d",2);
  }else{
    printf("%d",1);
  }


return 0;
}

int FindFrequencisOfWordLengths () {
    int i =0 ;
    int t = 0;
    int l = 0 ; //letters
    int j=0;
    int length[10]; // ex: length[5] = number of 5-letter-long words in the text
    int nbWords =0 ;
    char word[11]; //

    for (i=0; i <10;i++) {
        length[i] = 0;
    }

    scanf("%d", &nbWords);

    for(t=0 ; t < nbWords; t++) {
        scanf("%s" , word);
        printf("%s",word);

        l = 0;// qtdade letras na palavra

        while(word[l] != '\0'){ //conta quantas letras tem a palavra
            l++ ;
        }

        length[l] = length [l] + 1  ;

        printf("%s %d", word,l);

    }

    for (j=0;j<10;j++) {
        printf("There are %d words with %d letters.\n", length[j],j);
    }

return 0;
}

int longestStringLength() {

    int numberOfWords = 0 ;
    char word[101];
    int WordLength = 0;
    //int nextWordLength = 0;
    int k = 0 ;
    int Letter = 0;

    scanf("%d", &numberOfWords);

    for (k=0; k < numberOfWords; k++) {
        scanf("%s", word); //inseri a palavra digitada dentro de um array string

        Letter = 0;
        while (word[Letter] != '\0') {
            Letter = Letter +1; //qtdade de letras da palavra que acaba de ser escaneada
        }

        if (Letter > WordLength) {
        WordLength = Letter;
        }


    }
    printf("%d", WordLength);



    return 0;
}

int sortStringAlphabetically() {
    char word1[50];
    char word2[50];

    printf("Please enter a word: ");
    scanf("%s", word1);
    printf("And another: ");
    scanf("%s", word2);
    int i = 0;
    //find first letter un which words differ

    while (word1[i] != '\0' && word2[i] != '\0' &&  word1[i] == word2[i]){
        i++ ;

        if (word1[i] < word2[i]) {
            printf("%s comes before %s in the alphabet.\n", word1,word2);
        }else if (word1[i] > word2[i]){
             printf("%s comes after %s in the alphabet.\n", word1,word2);
        }else{
            printf("Same word");
        }

    }
//lembre-se: letra minuscula vem depois de maiscula

return 0;
}

int SearchForAnumber () {

int list[] = {6, -2, 5, 12, 7, 3, 8, 18, -10, 1};
    int n = 10;
    int item;
    //int = 0;
    int found = 0; //false
    int i=0 ;

    printf("Which number are you looking for? ");
    scanf("%d", &item);

    while (!found && i<n) { // (!found) = nao encontrado = true - enquanto NOT FOUND = TRUE , loop continua
        if( item == list[i]){
                found = 1;
        }else{
                i++;
        }
    }

   if (!found) {
        printf("%d is not a member of this list. \n", item);
    }else {
        printf("I found %d at index %d in the list. \n", item, i);
    }

return 0;
}

int searchingForALetter () {
    char word[51];
    //char letter1 = 'T';
    //char letter2 = 't';
    int nLetter = 0;
    int wordLength = 0;
    int halfWord = 0;
    int T1 = 0; //temos t na primeira parte da palavra
    int T2 = 0; //temos t na segunda parte da palavra
    //int Tfinal = 0;

    scanf("%s", word);
        //printf("%s\n",word[0]);
        //printf("%s\n",word[1]);
        //printf("%s\n",word[2]);

    while (word[nLetter] != '\0'){
        nLetter = nLetter + 1;
    }

    wordLength = nLetter;

    halfWord = wordLength/2 ;

    printf("halfword : %d\n",halfWord);
    printf("wordlength : %d\n",wordLength);

    //analisa primeira metade da palavra
    for (nLetter=0; nLetter <= halfWord ; nLetter++) {
        if (word[nLetter] == 'T' || word[nLetter]== 't'){
            T1 = 1;
        }
    }

    //analisa segunda metade da palavra
    for (nLetter = halfWord + 1; nLetter < wordLength ; nLetter++) {
        if (word[nLetter] == 'T' || word[nLetter]== 't'){
            T2 = 1;
        }
    }

    //resultado
    if (T1 == 0 && T2 == 0){
        printf("%d",-1);
    }else if (T1 == 1 && T2 ==0) {
        printf("%d",1);
    }else if (T1 == 0 && T2 == 1){
        printf("%d",2);
    }

return 0;
}

int sortedNumberList () {
   //! showArray(list, cursors=[ia, ib, mid])
    int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted list */
    int n = 10;
    int item = 0;
    int ia, ib, mid, found;

    printf("Which number are you looking for? ");
    scanf("%d", &item);
    ia = 0;
    ib = n-1;
    found = 0;

    while (!found && (ia <= ib)) {
        mid = (ia + ib)/2; // middle index
        if (item == list[mid]) {
            found = 1;  // found item!
        } else if (item<list[mid]) {
            ib = mid-1; // toss the top half
        } else {
            ia = mid + 1; // toss the bottom half
        }
    }

    if (!found) {
        printf("Number %d was not found in the array. \n", item);
    } else {
        printf("Number %d was found at index %d in the array.\n", item, mid);
    }


return 0;
}

int sortAnArrayUsingBubbleSort() {
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
    int n = 10;
    int i, j;
    int swap;

    printf("Unsorted list: \n");
    for (i=0; i<n; i++) {
        printf("%d ", list[i]);
    }

    for (j=0; j<n-1; j++) {
        for (i=0; i<n-1; i++) {
            if (list[i] > list[i+1]) {
                swap = list[i];
                list[i] = list[i+1];
                list[i+1] = swap;
            }
        }
    }

    printf("\nSorted list: \n");
    for (i=0; i<n; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}

int findRepeatLettersActivity() {


      char word[51];
    int l = 0; //representa o index de cada letra dentro da palavra word
    int nletters = 0 ; //representa o numero de letras dentro da palavra inserida
    int n=0;
    int swap = 0 ;
    int contador = 0;
    int i = 0;
    int k = 0;
    int j = 0;
    scanf("%s", word);

    //1- contar quantas letras tem a palavra inserida pelo usuario:
    while (word[nletters] != '\0') {
        nletters ++ ;
    }

    //printf("%d\n", nletters);
    //printf("%c\n", word[1]);

    //2- coloca as letras em ordem  (ASCII)
    for(j = 0 ; j < nletters - 1 ; j++) {
      for (l = 0 ; l < nletters - 1 ; l++) {
          if(word[l] > word[l+1]) {
                  swap = word[l];
                  word[l] = word[l+1];
                  word[l+1] = swap ;
          }
      }
    }
 /*printf("%c\n", word[1]);
    for (k=0 ; k < nletters ; k++) {
    printf("%c", word[k]);
    } */
    n = 0;
    //3- compara as letras da palavra
      for (n = 0 ; n < nletters - 1 ; n++) {
        if(word[n] == word[n+1]) {
                contador ++ ;
                while (word[n] == word[n+1]){ //vou passando para a proxima letra ate que a anterior nao seja igual a proxima
                    n++;
                }

        }
      }
  printf("%d", contador);

  return 0;
}

/* SOLUCAO: - mas o meu jeito acima fez mas sentindo (pelo menos eu acho - kkkk)
#include <stdio.h>
int main(void)
{
    char word[51];
    int length = 0;
    int i, j;
    char swap;
    int repeats = 0;

    scanf("%s", word);

    while (word[length]!='\0')
	length++;

    //Sort the word by alphabetical order
    for(j=0;j<length-1; j++) {
        for(i=0;i<length-1;i++) {
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i]   = word[i+1];
                word[i+1] = swap;
            }
        }
    }

    i = 0;

    //Check for repeating characters in the sorted word
    while (i<length-1) {
        if (word[i]==word[i+1]) {
            repeats++;
            j=i+2;

            //Continues through the word until it reaches a new character
            while (j<length && word[i]==word[j])
                j++;
            i = j;
        } else {
            i++;
        }
    }

    printf("%d", repeats);

    return 0;
}
*/
