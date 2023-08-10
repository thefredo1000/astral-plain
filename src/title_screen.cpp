#include "title_screen.h"

#include <bn_sprite_ptr.h>
#include <bn_fixed.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_bg_palettes.h>
#include <bn_color.h>
#include <bn_sprite_text_generator.h>
#include <bn_sprite_builder.h>
#include <bn_random.h>

#include "common_variable_16x16_sprite_font.h"
#include "bn_sprite_items_dices.h"

namespace game
{
    void title_screen()
    {

        bn::bg_palettes::set_transparent_color(bn::color(15, 10, 9));

        bn::sprite_text_generator title_text_generator(common::variable_16x16_sprite_font);
        title_text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> text_sprites;

        title_text_generator.generate(0, 0, "Play", text_sprites);

        bn::sprite_ptr dice_sprite = bn::sprite_items::dices.create_sprite(-40, 47);

        bn::random rng = bn::random();

        while (!bn::keypad::a_pressed())
        {
            dice_sprite.set_tiles(bn::sprite_items::dices.tiles_item().create_tiles(rng.get_int(6)));
            if (bn::keypad::a_pressed())
            {
                break;
            }
            bn::core::update();
        }

        while(1)
        {
            bn::core::update();
        }
    }
}