#ifndef BN_SPRITE_ITEMS_DICES_H
#define BN_SPRITE_ITEMS_DICES_H

#include "bn_sprite_item.h"

//{{BLOCK(dices_bn_gfx)

//======================================================================
//
//	dices_bn_gfx, 16x96@8, 
//	+ palette 32 entries, not compressed
//	+ 24 tiles not compressed
//	Total size: 64 + 1536 = 1600
//
//	Time-stamp: 2023-08-10, 15:17:02
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_DICES_BN_GFX_H
#define GRIT_DICES_BN_GFX_H

#define dices_bn_gfxTilesLen 1536
extern const bn::tile dices_bn_gfxTiles[48];

#define dices_bn_gfxPalLen 64
extern const bn::color dices_bn_gfxPal[32];

#endif // GRIT_DICES_BN_GFX_H

//}}BLOCK(dices_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item dices(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(dices_bn_gfxTiles, 48), bpp_mode::BPP_8, compression_type::NONE, 6), 
            sprite_palette_item(span<const color>(dices_bn_gfxPal, 32), bpp_mode::BPP_8, compression_type::NONE));
}

#endif

