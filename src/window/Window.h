//
// Created by Eric on 29/06/2026.
//

#ifndef SHOOTER_WINDOW_H
#define SHOOTER_WINDOW_H

#include "SFML/Graphics.hpp"

class Window {
public:
    Window();

    void run();

private:
    sf::RenderWindow window;

    sf::Clock clock;

private:
    void tick();
    void render();
};


#endif //SHOOTER_WINDOW_H