#pragma once

#pragma region Viewport
#define WIDTH 1280
#define HEIGHT 720
#pragma region Viewport

#pragma region Control
#define UP Keyboard::isKeyPressed(Keyboard::Z) || Keyboard::isKeyPressed(Keyboard::Up)
#define DOWN Keyboard::isKeyPressed(Keyboard::S) || Keyboard::isKeyPressed(Keyboard::Down)
#pragma region Control

#pragma region Paddel
#define SIZE_WIDTH 25
#define SIZE_HEIGHT 150
#pragma region Paddel