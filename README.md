## Cifra-de-cezar-c

Biblioteca de uma cifra de cezar simples

---

Exemplo 

```

void main(){
  char abc[4] = "abc";
  int saltos = 1;

  EncriptCDC(abc, saltos);
  
  printf("%d",abc);
  //Output bcd
  }
