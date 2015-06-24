#include <stdio.h>

main()
{
    int a[2], b[2], i, jumlah1, jumlah2, *c1, *c2, kali1, kali2, kali3, kali4, *m11, *m12, *m21, *m22;
    char d=0, e=0;
    printf("matrik A");
    d='i';
    for(i=0;i<2;i++)
    {
        printf("\nMasukkan nilai %c :", d+i);
        scanf("%d", &a[i]);
    }
    printf("\n matrik A = [%d %d]", a[0], a[1]);
    printf("\n------------------------------");
    printf("\nmatrik B");
    e='k';
    for(i=0;i<2;i++)
    {
        printf("\nMasukkan nilai %c :", e+i);
        scanf("%d", &b[i]);
    }
    printf("\n matrik B = [%d %d]", b[0], b[1]);
    printf("\n------------------------------");
    jumlah1= a[0] + b[1];
    jumlah2= a[1] + b[1];
    c1=&jumlah1;
    c2=&jumlah2;
    printf("\nC = [ %d ; %d ]", *c1, *c2);
    kali1 = a[0]*b[0];
    kali2 = a[0]*b[1];
    kali3 = a[1]*b[0];
    kali4 = a[1]*b[1];
    m11 = &kali1;
    m12 = &kali2;
    m21 = &kali3;
    m22 = &kali4;
    printf("\nM = [ %d %d ; %d %d ] \n", *m11, *m12, *m21, *m22);
    printf("---------------------------------\n");
    return 0;
}
