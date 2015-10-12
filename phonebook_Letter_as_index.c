#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "phonebook_opt.h"

/* FILL YOUR OWN IMPLEMENTATION HERE! */
entry *findName(char lastname[], entry *e)
{

	int len=strlen(lastname);
        int i=0;
        int index;
        while(i<len){
                index=(lastname[i]>=97)?(lastname[i]-97):(lastname[i]-65);
                if(e->pLastNameLetter[index]==NULL){
                        e->pLastNameLetter[index]=(entry*)malloc(sizeof(entry));
                        e->pLastNameLetter[index]->pdata=NULL;
                }
                e=e->pLastNameLetter[index];
                i++;
        }

        if(e->pdata==NULL){
                return NULL;
        }
	else{
		return e;
	}
}

entry *append(char lastName[], entry *e)
{
	int len=strlen(lastName);
	int i=0;
	int index;
	while(i<len){
		index=(lastName[i]>=97)?(lastName[i]-97):(lastName[i]-65);
		if(e->pLastNameLetter[index]==NULL){
			e->pLastNameLetter[index]=(entry*)malloc(sizeof(entry));
			e->pLastNameLetter[index]->pdata=NULL;
		}
		e=e->pLastNameLetter[index];
		i++;
	}
	
	if(e->pdata==NULL){
		e->pdata=(dataLink*)malloc(sizeof(dataLink));
	}
    return e;
}
