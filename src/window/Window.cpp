//
// Created by Eric on 29/06/2026.
//

#include "SFML/Graphics.hpp"

#include "Window.h"
#include "../constants/Constants.h"

Window::Window() {
    window.create(sf::VideoMode({Constants::WIDTH, Constants::HEIGHT}), Constants::TITLE, sf::Style::Close);

    window.setFramerateLimit(Constants::FPS);
}

void Window::run() {
    while (window.isOpen()) {
        float currentTime = clock.restart().asSeconds();
        float frames = 1.0f / currentTime;

        window.setTitle(std::string(Constants::TITLE) + " | " + std::to_string(frames));

        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear();

        tick();
        render();

        window.display();
    }
}

void Window::tick() {

}

void Window::render() {

}
