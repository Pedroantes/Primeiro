

#include <stdio.h>
#include <string.h>




int main(){
    int a=0  ;

    char characters[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz .,;-";
    char text[100];
    char encryptedmessage[100];
    char decryptedmessage[100];
    printf("Enter a text to be encrypted:\t");
    scanf("%[^\n]", text);
    size_t leng = strlen(text); // assing a variable to the char[] size
for(a=0; a < leng ; a++){
    char *position =strchr(characters, text[a]);//vou criar um pointer para procurar em characters um caracter de text
    for(int j=0 ; j<67; j++){
      if(text[a] == characters[j]){
        encryptedmessage[a] = j;
        printf("Caractere '%c' encontrado na posição %d\n", text[a], j);
        break;
      }
    }
}
printf("mensagem encriptada:\n");
for (a=0 ; a < leng; a++) {
printf("%d ", encryptedmessage[a]);
}
printf("\n");

//desemcriptar

size_t len = strlen(encryptedmessage);
for(a = 0; a < len ; a++){
            decryptedmessage[a] = characters[encryptedmessage[a]];
            printf("%c", decryptedmessage[a]);
        }
printf("\nmensagem desencriptada");
}









