#include "widget.hpp"

void widget::on_mouse_event(mouse_event const & e)
{
}

void widget::on_key_event(key_event const & e)
{
}

void widget::on_activate()
{
}

void widget::draw_when_dirty(draw_context & dc)
{
    if (_dirty)
    {
        on_draw(dc);
        _dirty = false;
    }
}

void widget::mark_dirty()
{
    _dirty = true;
}

SDL_Rect const & widget::box() const
{
    return _box;
}

void widget::set_parent(widget * parent)
{
    _parent = parent;
}

void widget::apply_layout(SDL_Rect box)
{
    _box = box;
    apply_layout_to_children();
}

void widget::apply_layout_to_children()
{
}

widget * widget::find_selectable()
{
    return nullptr;
}

widget * widget::navigate_selectable(navigation_type nt)
{
    return nullptr;
}

widget * widget::navigate_selectable_from_children(navigation_type nt, widget * w, int center_x, int center_y)
{
    return nullptr;
}

