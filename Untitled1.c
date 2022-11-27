//Point-of-sale system
#include<stdio.h>
void main (void){
int code qty;
float price,amt,total Amt,cash,change;

char addAnother;
//do-while loop -> Post-test
//while loop -> Pre-test
//for loop -> Pre-test
do{
    system("cls")
    Printf("Shopping List\n");
    Printf("[1]Maize flour\t\t KES 200.00\n");
    Printf("[2]Sugar\t\t KES 150.00\n");
    Printf("[3]Cooking Oil\t\t KES 400.00\n");
    Printf("[4]Lentils\t\t KES 300.00\n");
    Printf("[1]Soap\t\t KES 150.00\n");

    Printf("\n Enter Code: ")
    Scanf("%d" , &code);
    Printf("\n Enter quantity\t: ");
    scanf("%d", &qty);

    switch(code){
     Case1: price=200.00
        break;
        Case2: price=150.00
        break;
            Case3: price=400.00
        break;
            Case4: price=300.00
        break;
            Case5: price=150.00
        break;
    }

    amt=price*qty;
    Printf ("\nAmount\t\t:%.2f"amt);
    totalAmt = totalAmt;
    Printf("n\TotalAmount\t:2f ",totalAmt);
    addAnother=getche();


    }while(addAnother=='y'||addAnother=='Y');

    do{
        Printf("\nCash Tendered: ");
        Scanf("%f"&cash);

    }while(cash<totalAmt);
    change=cash-totalAmt;
    Printf("\n change\t\t :%2f ",change);
    Printf("\n\n Thankyou!Come Again");
}
