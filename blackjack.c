#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));

    // Croupier picks 1 card
    // A card is in [1,10]
    int croupier_card, croupier_cards_total = 0;
    croupier_card = (rand() % 10) + 1;
    printf("Croupier picked: %d\n", croupier_card);
    croupier_cards_total += croupier_card;

    // Player picks 2 cards
    int player_card_1, player_card_2, player_cards_total = 0;
    player_card_1 = (rand() % 10) + 1;
    player_card_2 = (rand() % 10) + 1;
    printf("Player picked: %d and %d\n", player_card_1, player_card_2);
    player_cards_total += (player_card_1 + player_card_2);

    while (player_cards_total <= 21)
    {
        char choice;
        printf("Do you want to pick or rest p/r? ");
        scanf(" %c", &choice);

        printf("You chose: %c\n", choice);

        // Continue asking until we get a valid response
        while (choice != 'p' && choice != 'r')
        {
            printf("Please insert p/r: ");
            // the space before the %c is to ignore the newline from before
            scanf(" %c", &choice);
            printf("You inserted: %c\n", choice);
        }

        // Player decided to pick
        if (choice == 'p')
        {
            int card_picked = (rand() % 10) + 1;
            printf("Player picked: %d\n", card_picked);
            if (card_picked == 1)
            {
                int ace_value;
                printf("Do you want this ace to be 1 or 11? ");
                scanf("%d", &ace_value);
                printf("You chose: %d\n", ace_value);
                // Continue asking until we get a valid response
                while (ace_value != 11 && ace_value != 1)
                {
                    printf("Please insert 1/11: ");
                    // the space before the %c is to ignore the newline from before
                    scanf("%d", &ace_value);
                    printf("You inserted: %c\n", ace_value);
                }
                card_picked = ace_value;
            }
            player_cards_total += card_picked;
        }

        // Player decided to rest
        if (choice == 'r')
        {
            // Then it's the croupier's turn
            // He picks if croupier_cards_total <= 16
            if (croupier_cards_total <= 16)
            {
                int card_picked = (rand() % 10) + 1;
                printf("Croupier picked: %d\n", card_picked);
                croupier_cards_total += card_picked;
            }
            // Else he rests
        }

        if (croupier_cards_total > 21)
        {
            printf("Player won with %d, while player had %d\n", croupier_cards_total, player_cards_total);
            return 0;
        }
        else if (croupier_cards_total >= 17)
        {
            (player_cards_total > croupier_cards_total) ? printf("Player won with %d while croupier had %d\n", player_cards_total, croupier_cards_total)
                                                        : printf("Croupier won with %d while player had %d\n", croupier_cards_total, player_cards_total);
            // TODO handle equals
            return 0;
        }
    }

    printf("You lost, card total is > 21\n");
    return 0;
}