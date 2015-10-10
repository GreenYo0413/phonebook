#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#define MAX_LAST_NAME_SIZE 16


typedef struct __PHONE_BOOK_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    dataLink* pdata;
    struct __PHONE_BOOK_ENTRY *pNext;
} entry;

typedef struct __DataLink{
	char firstName[16]
	char email[16];
	char phone[10];
	char cell[10];
	char addr1[16];
	char addr2[16];
	char city[16];
	char state[2];
}dataLink;

entry *findName(char lastname[], entry *pHead);
entry *append(char lastName[], entry *e);

#endif
