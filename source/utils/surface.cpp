# include "utils/surface.hpp"


Surface::Surface(const char * image_path)
{
    this->image = LoadImage(image_path);
    this->rect = std::make_shared<Rect> (0, 0, this->image.width, this->image.height);
    this->texture = LoadTextureFromImage(this->image);
}


Surface::~Surface()
{
    UnloadImage(this->image);
    UnloadTexture(this->texture);
}


std::shared_ptr<Rect> Surface::get_rect()
{
    return this->rect;
}


void Surface::draw()
{
    DrawTexture(this->texture, this->rect->get_left(), this->rect->get_top(), this->color);
}
