#ifndef LIPPMAN_C_SCREEN_H
#define LIPPMAN_C_SCREEN_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

class Screen;

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
    Window_mgr();

private:
    std::vector<Screen> screens;
};

class Screen {
friend void Window_mgr::clear(ScreenIndex);
public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { };
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { };

    char get() const {
        return contents[cursor];
    }
    inline char get(pos ht, pos wd) const;
    Screen& move(pos r, pos c);
    Screen& set(pos, pos, char);
    Screen& set(char);
    Screen& display(ostream& os);
    const Screen& display(ostream& os) const;

private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    string contents;

    void do_display(ostream& os) const;
};

inline
Screen& Screen::set(char ch) {
    contents[cursor] = ch;
    return *this;
}

inline
Screen& Screen::set(pos r, pos col, char ch) {
    contents[r * width + col] = ch;
    return *this;
}

inline
Screen& Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

Screen& Screen::display(ostream& os) {
    Screen::do_display(os);
    return *this;
};
const Screen& Screen::display(ostream& os) const {
    Screen::do_display(os);
    return *this;
};

void Screen::do_display(ostream& os) const {
    os << contents;
}

Window_mgr::Window_mgr() : screens{Screen(24, 80)} {}

void Window_mgr::clear(ScreenIndex i) {
    Screen& s = screens[i];
    s.contents = std::string(s.width * s.height, ' ');
}


#endif //LIPPMAN_C_SCREEN_H
