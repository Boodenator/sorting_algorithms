#ifndef _DECK_H_
#define _DECK_H_

/**
 * enum kind_e - suit of card
 *
 * @SPADE: 0, or spades
 * @HEART: 1, or hearts
 * @CLUB: 2, or clubs
 * @DIAMOND: 3, or diamonds
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - card representation
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Ptr to card of the node
 * @prev: Ptr toprevious node of the list
 * @next: Ptr to next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* _DECK_H_ */
