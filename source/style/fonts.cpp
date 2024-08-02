# include "style/fonts.hpp"


Font concert_one_40;


void load_fonts()
{
    concert_one_40 = LoadFontEx(
        "../resources/fonts/Concert_One/ConcertOne-Regular.ttf", 40, NULL, 0
    );
}


void unload_fonts()
{
    UnloadFont(concert_one_40);
}
