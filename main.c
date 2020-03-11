#include <stdio.h>
#include <cs50.h>
#include <math.h>

long helper(long number){
    if(number>10000000000000){
        return 14;
    }
    if(number>1000000000000){
        return 13;
    }
    if(number>10){
        return 2;
    }
    return 1;
}

long memory_rest[9] = {0,0,0,0,0,0,0,0};
long card_brand = 0;
int main(void){
    long cardNumber = get_long("What's the card number? \n>");
   
   //long cardNumber = 378282246310005;
    /*long counterNumber = log10(cardNumber);
    card_brand[0] = counterNumber / pow(10,counterNumber);
    */
    card_brand = cardNumber;
    while(card_brand>=100){
        card_brand = card_brand/10;
    }

    if(helper(cardNumber) > 12){
    long memory[9] = {0,0,0,0,0,0,0,0};
    string typecard = "";
    int pointerB = 0;
    int found = 0;
    int counter = 0;
    
    int x = 0;
    long numberElevated = pow(10,x);

    for(int i=0;i<=16;i++){
  long number = (cardNumber / (numberElevated)) % 10;
  //printf("z%liz",number);
        if(x<16){
      
               
        //printf("%li ", number  );
            x +=1;
        numberElevated = pow(10,x);
        counter+=1;
        if((counter % 2) == 0){
         found +=1;
         memory[found] = number;
        }else{
            memory_rest[pointerB] = number;
            pointerB +=1;
        }
    }
    }
   // printf("\n");
    long result_multiply_by_two[10] = {0,0,0,0,0,0,0,0};
    for(int i=1;i<9;i++){
      //  printf(" %li ",memory[i]);
        result_multiply_by_two[i] = (memory[i] *2);
    }
     // printf("\n");
      long memory_products[13] = {0,0,0,0,0,0,0,0,0,0,0};
      int counter_product = 0;
          for(int i=1;i<9;i++){
               // printf(" >%li< ",result_multiply_by_two[i]);
              if(helper(result_multiply_by_two[i]) == 2){
                  memory_products[counter_product] = result_multiply_by_two[i] / 10;
                  counter_product+=1;
                  memory_products[counter_product] = result_multiply_by_two[i] % 10;
                  counter_product+=1;
              }else{
               //   printf(">%d<",counter_product);
                  memory_products[counter_product] = result_multiply_by_two[i];
                  counter_product+=1;
              }
    }
       // printf("\n");
          long result_product = 0;
         for(int i=0;i<10;i++){
             result_product = result_product + memory_products[i];
    }
      // printf(" [%li] ", result_product);
 // printf("\n");
    long result_final = 0;
     for(int i=0;i<8;i++){
         result_final+=memory_rest[i];
            //printf("_[%li]_ ",memory_rest[i]);
    }
    result_final+=result_product;
   // printf("\n %li\n\n",result_final);
    if((result_final % 10) == 0){
        //printf("(%li)",card_brand);
        if(card_brand / 10 == 4){
          printf("VISA\n");
        }
        if(card_brand == 34){
             printf("AMEX\n");
        }else if(card_brand == 37) {
            printf("AMEX\n");
        }

        switch(card_brand){
            case 51:
             printf("MASTERCARD\n");
            case 52:
             printf("MASTERCARD\n");
            case 53:
             printf("MASTERCARD\n");
            case 54:
             printf("MASTERCARD\n");
            case 55:
             printf("MASTERCARD\n");
            break;
        }
        
    }else{
        printf("INVALID\n");
    }
    }else{
        printf("INVALID\n");
    }

}

