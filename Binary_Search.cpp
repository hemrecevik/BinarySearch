#include <stdio.h>
#include <stdlib.h>/*
int BinarySearch(int dizi[],int aranan){
	int ilk,son,ortanca,i=0,sayac=0;
	ilk=0;
	while(dizi[i]!=NULL)
	{
		sayac++;
		i++;
	}
	printf("%d",sayac);
	son=sayac;
	while(son>=ilk)
	{
		ortanca=(ilk+son)/2;
		if(aranan>dizi[ortanca])
		{
			ilk=ortanca+1;
		}
		else if(aranan<dizi[ortanca])
		{
			son=ortanca-1;
		}
		else if(aranan==dizi[ortanca])return 1;
		
	}
	return 0;
}*/
int BinarySearch(int dizi[],int aranan,int ilk,int son)
{
	int ortanca;
	if(ilk>son)return 0;
	else{
	
	ortanca=(ilk+son)/2;
	if(aranan==dizi[ortanca])return 1;
	if(aranan>dizi[ortanca])BinarySearch(dizi,aranan,ortanca+1,son);
	else BinarySearch(dizi,aranan,ilk,ortanca-1);
}

}



main()
{
	int dizi[5]={8,15,23,34,49};
	
	if(BinarySearch(dizi,2,0,5))printf("Bulundu");
	else printf("Bulunamadi");
	
}
