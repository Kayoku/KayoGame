#ifndef DAIFUGO_ENUM_DEFINE
#define DAIFUGO_ENUM_DEFINE

enum class Card
{
 CARD_TWO,
 CARD_THREE,
 CARD_FOUR,
 CARD_FIVE,
 CARD_SIX,
 CARD_SEVEN,
 CARD_EIGHT,
 CARD_NINE,
 CARD_TEN,
 CARD_JACK,
 CARD_QUEEN,
 CARD_KING,
 CARD_ACE
};

enum class Player_Status
{
 DAIFUGO,   // President
 FUGO,      // Vice president
 HEIMIN,    // Neutral
 HINMIN,    // Dirt
 DAIHINMIN, // Lowest dirt
};

#endif
