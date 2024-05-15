#define NUM 20
#define NAME_LEN 20
#define PHONE_LEN 20
#define ADDRESS_LEN 20
#define SEX_LEN 20

struct contacter
{
    char name[NAME_LEN];
    char sex[SEX_LEN];
    char phone[PHONE_LEN];
    char address[ADDRESS_LEN];
    int age;
};

void add(struct contacter c[NUM]);

void delete_(struct contacter c[NUM]);

void search(struct contacter c[NUM]);

void display(struct contacter c[NUM]);

void sort(struct contacter c[NUM]);

void modify(struct contacter c[NUM]);
