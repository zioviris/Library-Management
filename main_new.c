/* Name: Georgios Zioviris
Christmas Project: Library Management

Me to paron project skopos einai i kataxorisi ektiposi & diaxeirisi vivlion apo ton vivliothikario.
Yparxoyn 6 synarthseis oi opoies einai ipeuthines gia sygkekrimenes ergasies

*/


#include <stdio.h>
#define NAMESIZE 50
#define N 10
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


    struct vivlio_info{
        char book_title[NAMESIZE];
        char book_category[NAMESIZE];
        char book_author_name[NAMESIZE];
        int book_id;
        int book_supply;
        };



    struct vivlio_info register_book();
    bool search_book(struct vivlio_info vivlio[]);
    void print_book (struct vivlio_info vivlio[]);
    struct vivlio_info update_book(struct vivlio_info vivlio[]);
    int loan_book(struct vivlio_info vivlio[]);
    int return_book(struct vivlio_info vivlio[]);


    int main(){

        srand( (int) time(NULL));
        char epilogi,epilogi2;
        struct vivlio_info vivlio[N];
        int i;



        printf("Welcome to the library menu\n");
        printf("Your options are:\n");
        printf("Register a book: (Press R) \n");
        printf("Update a book: (Press U) \n");
        printf("Search a book: (Press S) \n");
        printf("Loan a book: (Press L) \n");
        printf("Print information about a specific book: (Press P) \n");
        printf("Return a book (Press A) \n");
        printf("Exit (Press E) \n");
        printf("What do you want to do today?\n");
        scanf(" %c",&epilogi);

        while (epilogi!='R' && epilogi!='U' && epilogi!='S' && epilogi != 'P' && epilogi!='L' && epilogi!='A' && epilogi!='E'){
            printf("What do you want to do today?\n");
            scanf(" %c",&epilogi);
        }



        switch(epilogi){
            int i;
            for (i=0;i<N;i++){
                vivlio[i]=register_book();
            }

            case 'R':

                register_book(vivlio);
                break;

            case 'U':
                update_book(vivlio);
                break;

            case 'P':
                print_book(vivlio);
                break;

            case 'S':
                search_book(vivlio);
                break;

            case 'L':
                loan_book(vivlio);
                break;

            case 'E':
                exit(0);

            case 'A':
                return_book(vivlio);
                break;
            }



        while(epilogi=='R'|| epilogi=='U'|| epilogi=='S' || epilogi=='S' || epilogi=='L' || epilogi=='A' || epilogi =='P'){

            printf("Welcome to the library menu\n");
            printf("Your options are:\n");
            printf("Register a book: (Press R) \n");
            printf("Update a book: (Press U) \n");
            printf("Search a book: (Press S) \n");
            printf("Loan a book: (Press L) \n");
            printf("Print information about a specific book: (Press P) \n");
            printf("Return a book (Press A) \n");
            printf("Exit (Press E) \n");
            printf("What do you want to do today?\n");
            scanf(" %c",&epilogi2);

            while (epilogi2!='R' && epilogi2!='U' && epilogi2!='S' && epilogi2!='L' && epilogi2!='A' && epilogi2!='E' && epilogi2!='P'){
                printf("What do you want to do today?\n");
                scanf(" %c",&epilogi2);
            }

        switch(epilogi2){
            int i;
            for (i=0;i<N;i++){
                vivlio[i]=register_book();
                }

            case 'R':
                register_book(vivlio);

                break;
            case 'U':
                update_book(vivlio);
                break;
            case 'S':
                search_book(vivlio);
                break;
            case 'P':
                print_book(vivlio);
                break;
            case 'L':
                loan_book(vivlio);
                break;
            case 'E':
                exit(0);
            case 'A':
                return_book(vivlio);
                break;
            }
        }

        return 0;
        }


    struct vivlio_info register_book(){

        struct vivlio_info vivlio3;
        int i,x;


        x=rand()%1001;

        printf("Enter title: \n");
        scanf("%49s", vivlio3.book_title);
        printf("Enter category: \n");
        scanf("%49s", vivlio3.book_category);
        printf("Enter author name & surname: \n");
        scanf("%49s", vivlio3.book_author_name);
        printf("Book ID: %d\n",x);

        vivlio3.book_id=x;


        printf("Book supply: ");
        scanf("%d", &vivlio3.book_supply);



        printf("\n");

        printf("The book has been registered!");
        printf("\n");
        printf("\n");

        return vivlio3;


        }

    void print_book(struct vivlio_info vivlio[]){

        struct vivlio_info vivlio1;
        printf("Enter Book ID: ");
        scanf("%d", &vivlio1.book_id);
        printf("Book Title: %49s", vivlio1.book_title);
        printf("\n");
        printf("Book Category: %49s",vivlio1.book_category);
        printf("\n");
        printf("Author's Name & Surname: %49s",vivlio1.book_author_name);
        printf("\n");
        printf("ID: %d",vivlio1.book_id);
        printf("\n");
        printf("Book Supply: %d",vivlio1.book_supply);
        printf("\n");
        printf("\n");
        printf("\n");

        }


    bool search_book(struct vivlio_info vivlio[]){

        struct vivlio_info vivlio9;

        printf("Enter Book ID: \n");
        scanf("%d", &vivlio9.book_id);

        if (vivlio9.book_supply>0){
            printf(" We got it!");
            printf("\n");
            printf("\n");

            return true;
            }

        else{
            printf("Sorry, we do not have it right now...");
            printf("\n");
            printf("\n");

            return false;
        }

    }

    struct vivlio_info update_book(struct vivlio_info vivlio[]){

        struct vivlio_info vivlio4;

        printf("Enter Book ID: \n");
        scanf("%d", &vivlio4.book_id);

        printf("Enter new title: \n");
        scanf("%49s", &vivlio4.book_title);
        printf("Enter new category: \n");
        scanf("%49s", &vivlio4.book_category);
        printf("Enter new author name & surname: \n");
        scanf("%49s", &vivlio4.book_author_name);
        printf("New book supply: \n");
        scanf("%d", &vivlio4.book_supply);

        printf(" The values of the book with ID %d & title %s have been updated\n", vivlio4.book_id,vivlio4.book_title);


        return vivlio4;
            }




    int loan_book(struct vivlio_info vivlio[]){

        struct vivlio_info vivlio5;

        int x,i;
        printf("Enter Book ID for Loaning: \n");
        scanf("%d", &vivlio5.book_id);

        vivlio5.book_supply=vivlio5.book_supply-1;

        printf(" New book supply is %d",vivlio5.book_supply);
        printf("\n");


        return vivlio5.book_supply;
    }

    int return_book(struct vivlio_info vivlio[]){

        struct vivlio_info vivlio6;
        int x,i;
        printf("Enter Book ID for returning: \n");
        scanf("%d",&vivlio6.book_id);

        vivlio6.book_supply=vivlio6.book_supply+1;
        printf(" New book supply is %d",vivlio6.book_supply);
        printf("\n");

        return vivlio6.book_supply;

    }



