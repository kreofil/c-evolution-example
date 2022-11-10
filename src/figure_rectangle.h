#ifndef _figure_rectangle_h_
#define _figure_rectangle_h_

//------------------------------------------------------------------------------
// Модель специализации обобщения на примере прямоугольника
//------------------------------------------------------------------------------
#include "figure.h"

struct rectangle {int x, y;}; // основа специализации (может быть в любом месте)

// Специализированный прямоугольник, имеющий идентичность с обобщенной фигурой
typedef struct figure_rectangle {
    // Повторение полей обобщения
    unsigned tag;       // поле тега на том же месте
    struct {} head;     // поле структуры, идентичное структуре обобщения
    struct rectangle tail;  // поле, определяющее содержание специализации
} figure_rectangle;

// Прототип установщика, передаваемого регистратору
void set_figure_rectangle_tag(unsigned tag);
// Получение признака специализации. Необходимо в процессе регистрации фигуры
unsigned get_figure_rectangle_tag();
// Инициализация признака специализации перед использованием
void init_figure_rectangle(figure_rectangle *p_fr);

#endif // _figure_rectangle_h_
