#include<stdio.h>
#include<string.h>
#include <stdlib.h>
 typedef struct Book{
    int id,Price; 
    float Rating ;
    char Book_Name[100];
    char Author_Name[50];
    char Category[50];
}Book;
int count=0 ;
void hardcoded(Book* bkk,int* count);
int storebook(Book* b, int count, Book* allBooks);
void display(Book* b,int count);
void searchbyid(Book* b,int id,int count );
void  searchbyname(Book* b,char* B_Name ,int count);
void UpdateBook(Book* b,int id );
void deleteBook(Book* b, int* count);
void Sort(Book* b);
void Find(Book* b,int count );

int main()
{
   
   Book *b;
   int capacity = 10;
b = malloc(capacity * sizeof(Book));

    hardcoded(b,&count);
    
    int ch;
    do{
    printf("\n");
    printf("enter your Choice\n1: Display Books \n2: Add new Book \n3: Search Book \n4: Update Books \n5: Delete Books \n6: Sort Books \n7: Search By Authors Name  \n0: Exit \n");
    scanf("%d",&ch);
  
    switch (ch)  {
      
        case 1:printf("Display Books \n");
        display(b,count);
        break;

        case 2: printf("Store Books \n");
       
        if(count == capacity)
    {
        capacity = capacity * 2;
        Book *temp = realloc(b, capacity * sizeof(Book));
        b = temp;
    }
    
  
  int ret = storebook(&b[count], count, b);
 
    if(ret ==1 ){
           count ++;
        printf("Details Are Valid Book  Added Sucessfully\n");
    }
    if(ret ==0){
        printf("Details are invalid please add valid details \n");
    }
        break;

        case 3:printf("Search Books \n");
        int subch;
        printf("Enter How you want to Serch Books\n1: serch By Id  \n2: Serch by Book Name  ");
        scanf("%d",&subch);
        int id;
        char B_Name[100];
        switch (subch)
        {
        case 1:printf("Serch By Book Id ");
        searchbyid(b,id,count);
        break;

        case 2: printf("Serch By Name ")  ;
        searchbyname(b,B_Name,count);
        break;

        default:printf("Invalid Choice");
        }
        break;

        case 4:printf("Update Book");
        printf("Enter ID to update: ");
        scanf("%d", &id);
        UpdateBook(b, id);
        break;

        case 5:printf("Delete Book");
        deleteBook(b, &count);
        break;

        case 6:printf("Sort Book");
        Sort(b);
        display(b, count);   
        break;

        case 7:printf("Find Books By Author Name ");
        Find(b,count);
        break;

        case 0:printf("Exiting The Code");
        break;

        default:printf("Invalid Choice");

        }
        } 
      
        
 while(ch!=0);
 free(b);
 return 0;
}// main ends here 


void hardcoded(Book* bkk,int* count){


    bkk[0].id=101;
	strcpy(bkk[0].Book_Name,"Pride and Prejudice");
	strcpy(bkk[0].Author_Name,"Samarth");
    strcpy(bkk[0].Category,"Classic");
	bkk[0].Price=1000;
    bkk[0].Rating=8.9;
	
	bkk[1].id=102;
	strcpy(bkk[1].Book_Name,"To Kill a Mockingbird");
    strcpy(bkk[1].Author_Name,"Ranjit");
    strcpy(bkk[1].Category,"Gothic");
	bkk[1].Price=1500;
    bkk[1].Rating=9.2;
	
    bkk[2].id=103;
	strcpy(bkk[2].Book_Name,"The Alchemist");
	strcpy(bkk[2].Author_Name,"Aniket");
    strcpy(bkk[2].Category,"Adventure");
	bkk[2].Price=670;
    bkk[2].Rating=9.9;
	
	bkk[3].id=104;
	strcpy(bkk[3].Book_Name,"The Guide");
	strcpy(bkk[3].Author_Name,"Vaibhav");
    strcpy(bkk[3].Category,"Fiction");
	bkk[3].Price=1007;
    bkk[3].Rating=8.5;
	
    bkk[4].id=105;
	strcpy(bkk[4].Book_Name,"Atomic Habits");
	strcpy(bkk[4].Author_Name,"Samarth");
    strcpy(bkk[4].Category,"Productivity");
	bkk[4].Price=700;
    bkk[4].Rating=7.4;

    bkk[5].id=106;
	strcpy(bkk[5].Book_Name,"PThe Great Gatsby");
	strcpy(bkk[5].Author_Name,"Ranjit");
    strcpy(bkk[5].Category,"Classic");
	bkk[5].Price=750;
    bkk[5].Rating=8.2;

	
	bkk[6].id=107;
	strcpy(bkk[6].Book_Name,"Midnight's Children");
	strcpy(bkk[6].Author_Name,"Aniket");
    strcpy(bkk[6].Category,"Magical Realism");
	bkk[6].Price=500;
    bkk[6].Rating=9.2;
	
	bkk[7].id=108;
	strcpy(bkk[7].Book_Name,"The Diary of a Young Girl");
	strcpy(bkk[7].Author_Name,"Omkar");
    strcpy(bkk[7].Category,"Autobiography");
	bkk[7].Price=600;
    bkk[7].Rating=7.9;
	
    bkk[8].id=109;
	strcpy(bkk[8].Book_Name,"Harry Potter and the Sorcerer's Stone");
	strcpy(bkk[8].Author_Name,"Samarth");
    strcpy(bkk[8].Category,"Fantacy");
	bkk[8].Price=900;
    bkk[8].Rating=6.4;
	
    bkk[9].id=110;
	strcpy(bkk[9].Book_Name,"The Catcher in the Rye");
	strcpy(bkk[9].Author_Name,"Ranjit");
    strcpy(bkk[9].Category,"Influential");
	bkk[9].Price=1200;
    bkk[9].Rating=8.5;

    *count = 10;
	
	
}

int storebook(Book* b, int count, Book* allBooks){
    printf("Enter The ID " );
scanf("%d", &b->id);

for(int i = 0; i < count; i++)
{
    if(allBooks[i].id == b->id)
    {
        printf("Book ID already exists!\n");
        return 0;
    }
}
printf("Enter The Book Name  " );
scanf(" %[^\n]",b->Book_Name);
printf("Enter The Author Name " );
scanf(" %[^\n]", b->Author_Name);
printf("Enter The Book Price  " );
scanf("%d", &b->Price);
printf("Enter The Book Rating  " );
scanf("%f", &b->Rating);
printf("Enter The Book  Category  " );
scanf(" %s", b->Category);


if( b->id<0 || b->Price<0 || b->Rating<0 || b->Rating>10 || strlen(b->Book_Name) == 0 || strlen(b->Author_Name) == 0){
printf("Invalid Input. Please enter valid values.\n");
return 0;
    }
    else{
        printf("Book Added Successfully\n");
        return 1;
    }

}



void display(Book* b,int count){
    printf("Display Books \n");
    for (int i=0 ; i<count;i++){
   
printf("The Book Name is %s\n",b[i].Book_Name);
printf("The Author Name Of Book is %s\n",b[i].Author_Name);
printf("The Book ID is %d\n",b[i].id);
printf("Price Of Book is %d\n",b[i].Price);
printf("Rating Of Book is %f\n",b[i].Rating);
printf("Category Of Book is %s\n",b[i].Category);
printf("\n");
    }
}
void searchbyid(Book* b,int id ,int  count  ){
    printf("Enter The ID you want to search ");
						scanf("%d",&id);
    int found = 0;

    for(int i = 0; i < count; i++)
    {
        if(id == b[i].id )
        {
            found = 1;

            printf("Book is Found & Details are\n");
            printf("The Book Name is %s\n", b[i].Book_Name);
            printf("The Book ID is %d\n", b[i].id);
            printf("The Author Name is %s\n", b[i].Author_Name);
            printf("Price is %d\n", b[i].Price);
            printf("Rating is %.1f\n", b[i].Rating);
            printf("Category is %s\n", b[i].Category);
            break;
        }
    }

    if(found == 0)
    {
        printf("Book Not Found\n");
    }
}
void searchbyname(Book* b , char* Book_Name, int count){ 
    int found=0;
                printf("Enter The Book Name  you want to search ");
				scanf(" %[^\n]", Book_Name);
                printf("You entered: %s\n", Book_Name);

    for (int i = 0; i < count; i++)
{
    if (strcasecmp(b[i].Book_Name, Book_Name)==0)
    {
        found = 1;

        printf("Book is Found & Details are\n");
        printf("The Book Name is %s\n", b[i].Book_Name);
        printf("The Book ID is %d\n", b[i].id);
        printf("The Author Name is %s\n", b[i].Author_Name);
        printf("Price is %d\n", b[i].Price);
        printf("Rating is %.1f\n", b[i].Rating);
        printf("Category is %s\n\n", b[i].Category);
    }
}
    

    if(found == 0)
    {
       printf("BOOK NOT FOUND \n");
    }
    }

    void UpdateBook(Book *b, int id)
{
    int Newid, Ps;
    float Rt;
    char B_Name[100];
    char A_Name[50];
    char Catg[50];

    for(int i = 0; i < count; i++)
    {
        if(b[i].id == id)
        {
            printf("Enter New ID: ");
            scanf("%d", &Newid);
            printf("Enter New Book Name: ");
            scanf(" %[^\n]", B_Name);
            printf("Enter New Author Name: ");
            scanf(" %[^\n]", A_Name);
            printf("Enter New Price: ");
            scanf("%d", &Ps);
            printf("Enter New Rating: ");
            scanf("%f", &Rt);
            printf("Enter New Category: ");
            scanf(" %[^\n]", Catg);

            b[i].id = Newid;
            b[i].Price = Ps;
            b[i].Rating = Rt;
            strcpy(b[i].Book_Name, B_Name);
            strcpy(b[i].Author_Name, A_Name);
            strcpy(b[i].Category, Catg);
            printf("Book Updated Successfully\n");
            return;
        }
        else{
    printf("Book Not Found Please Enter Valid ID\n");
    }
    }
}
 
void deleteBook(Book* b, int* count) {
    int id ;
    printf("Enter The Id of Book You Want to DELETE ");
    scanf("%d",&id);
    int found=0;
    for(int i=0 ; i<*count; i++){
        if(b[i].id==id){
            found =1;
            for(int j=i; j<*count-1;j++){
             b[j]=b[j+1];

            }
             (*count)--; 
            printf("Book with ID %d deleted successfully  \n", id);
            break;
            
        }
       
    }
     if(found==0){
        printf("book with ID %d is not Found",id);
      
    }
   
}
void Sort(Book* b){
    int choice ;
    Book temp;

    printf("Enter on How you want to Sort Books \n1:Rating \n2:Price");
    scanf("%d",&choice);
    switch (choice){
        case 1:printf("Sort Books According To Rating");

    for (int i=0 ; i<count-1;i++){
        for (int j=0; j<count -i-1; j++){
            if(b[j].Rating < b[j+1].Rating)
            {
               temp = b[j];
               b[j] = b[j+1];
               b[j+1] = temp;
            }

        }
    }
    break;

     case 2:printf("Sort Books According To price");

        for(int i = 0; i < count - 1; i++)
            {
                for(int j = 0; j < count - i - 1; j++)
                {
                    if(b[j].Price < b[j + 1].Price)
                    {
                        temp = b[j];
                        b[j] = b[j + 1];
                        b[j + 1] = temp;
                    }
                }
            }
    break;
    default:printf("Invalid Choice");
}
}
void Find(Book* b,int count){
    int found=0;
    char Author[100];
    printf("Enter The Authors Name ");
   scanf(" %[^\n]", Author);
   printf("Author entered = %s\n", Author);
    for(int i=0;i<count; i++){
    if(strcmp(b[i].Author_Name, Author) == 0){
        found=1;
        
        printf("The Book Name is %s\n", b[i].Book_Name);
        printf("The Book ID is %d\n", b[i].id);
        printf("The Author Name is %s\n", b[i].Author_Name);
        printf("Price is %d\n", b[i].Price);
        printf("Rating is %.1f\n", b[i].Rating);
        printf("Category is %s\n\n", b[i].Category);
    }
    
    }
    if(found==0){
        printf("Author Not Found ");
    }
}
void TopThree(Book* b,int count ){

    printf("\nTop 3 Books");

    for(int i = 0; i < 3 && i < count; i++)
    {
        printf("Book %d\n", i + 1);
        printf("The Book Name is %s\n", b[i].Book_Name);
        printf("The Book ID is %d\n", b[i].id);
        printf("The Author Name is %s\n", b[i].Author_Name);
        printf("Price is %d\n", b[i].Price);
        printf("Rating is %.1f\n", b[i].Rating);
        printf("Category is %s\n\n", b[i].Category);
    }
}