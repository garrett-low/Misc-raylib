/*
* Garrett Low
* core input keys - practice
*/

#include "raylib.h"

int main(void) {
    const int width = 800;
    const int height = 450;
    
    InitWindow(width, height, "GRL - core input keys");
    
    Vector2 ballPosition = { (float)width/2, (float)height/2 };
    
    SetTargetFPS(140);
    
    while (!WindowShouldClose()) {
        // Update
        if(IsKeyDown(KEY_RIGHT)) ballPosition.x += 2.0f;
        if(IsKeyDown(KEY_LEFT)) ballPosition.x -= 2.0f;
        if(IsKeyDown(KEY_UP)) ballPosition.y += 2.0f;
        if(IsKeyDown(KEY_DOWN)) ballPosition.y -= 2.0f;
        
        // Draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("hello world", 10, 10, 20, BLACK);
            DrawCircleV(ballPosition, 50, MAROON);
        EndDrawing();
        
        // De-Initialization
        CloseWindow();
        
        return 0;
    }
}