#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

// Need to modifie

class Textures {
public:
    enum class texturesIndices {
    };

    enum class fontsIndices{
    };
    
private:
    Textures();
    
public:
    ~Textures() = default;

    sf::Texture& getTexture(texturesIndices index);
    sf::Font& getFont(fontsIndices index);
    
    void loadTexture(texturesIndices _index, const char* filename);
    void loadFont(fontsIndices _index, const char* filename);

    static Textures* getTexturesManager();

private:
    static Textures* TextureManager;

    std::vector<sf::Texture> tabTextures;
    std::vector<sf::Font> tabFonts;
};