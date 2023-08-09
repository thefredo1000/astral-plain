#include "title_screen.h"

#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_bg_palettes.h"
#include "bn_color.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_16x16_sprite_font.h"
#include "bn_sprite_builder.h"

namespace game
{

    void title_screen()
    {

        bn::bg_palettes::set_transparent_color(bn::color(15, 10, 9));

        bn::sprite_text_generator title_text_generator(common::variable_16x16_sprite_font);
        title_text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> text_sprites;

        title_text_generator.generate(0, 0, "Play", text_sprites);

        while (!bn::keypad::a_pressed())
        {
            if (bn::keypad::a_pressed())
            {
                break;
            }
            bn::core::update();
        }
    }
}