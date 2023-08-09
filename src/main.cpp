#include "bn_core.h"

#include "scene_type.h"

#include "title_screen.h"

int main()
{
    bn::core::init();

    game::scene_type scene = game::scene_type::TITLE;

    while (true)
    {
        switch (scene)
        {
        case game::scene_type::TITLE:
            game::title_screen();
            break;

        default:
            break;
        }
        bn::core::update();
    }
}
