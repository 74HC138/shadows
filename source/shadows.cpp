#include <3ds.h>
#include <tex3ds.h>
#include <stdio.h>
#include <citro3d.h>
#include <citro2d.h>

#define WIDTH 400
#define HEIGHT 240

#define BLOCK_SIZE 16
#define LAYER_BLOCKX 50 //25 visible
#define LAYER_BLOCKY 30 //15 visible

struct Vector2 {
    float x;
    float y;
};
struct Vector3 {
    float x;
    float y;
    float z;
};

//Layer 0: background Layer 1: middle Layer 3: foreground mainLayer: prerender of Layer 1, lighting and sprites
C2D_Image mainLayerTexture;
C3D_RenderTarget* mainLayerTarget;

C2D_Image layerTexture[3];
C3D_RenderTarget* layerTarget[3];

Vector2 layerScroll[3];

C3D_RenderTarget* top = C2D_CreateScreenTarget(GFX_TOP, GFX_LEFT);


int main() {
    C3D_TexInit(mainLayerTexture.tex, LAYER_BLOCKX * BLOCK_SIZE, LAYER_BLOCKY * BLOCK_SIZE, GPU_RGB8);
    mainLayerTarget = C3D_RenderTargetCreateFromTex(mainLayerTexture.tex, GPU_TEXFACE_2D, 0, GPU_RB_DEPTH24);
    mainLayerTexture.subtex = {LAYER_BLOCKX * BLOCK_SIZE, LAYER_BLOCKY * BLOCK_SIZE, 0.0f, 0.0f, 1.0f, 1.0f};

    for (int i = 0; i < 3; i++) {
        C3D_TexInit(layerTexture[i].tex, LAYER_BLOCKX * BLOCK_SIZE, LAYER_BLOCKY * BLOCK_SIZE, GPU_RGB8);
        layerTarget[i] = C3D_RenderTargetCreateFromTex(layerTexture[i].tex, GPU_TEXFACE_2D, 0, GPU_RB_DEPTH24);
        layerTexture[i].subtex = {LAYER_BLOCKX * BLOCK_SIZE, LAYER_BLOCKY * BLOCK_SIZE, 0.0f, 0.0f, 1.0f, 1.0f};
    }

    while (aptMainLoop()) {
        C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
        C2D_TargetClear(top, C2D_Color32f(0.0f, 0.0f, 0.0f, 1.0f));
        C2D_SceneBegin(top);
        
        C2D_

    }
    return 0;
}