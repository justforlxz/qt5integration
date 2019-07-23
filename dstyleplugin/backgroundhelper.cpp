#include "style.h"
#include "paletteextended.h"
#include "painterhelper.h"

#include <DStyleOption>
#include <QPainter>

DWIDGET_USE_NAMESPACE

namespace dstyle {
bool Style::drawWidgetBackground(const QStyleOption *option,
                                 QPainter *painter,
                                 const QWidget *widget) const {
    Q_UNUSED(widget);

    const DStyleOptionBackgroundGroup* op = qstyleoption_cast<const DStyleOptionBackgroundGroup*>(option);
    const QBrush background(m_palette->brush(PaletteExtended::BackgroundGroup_BackgroundColor, option));

    switch (op->position) {
    case DStyleOptionBackgroundGroup::OnlyOne:
        PainterHelper::drawRect(painter, op->backgroundRect, Qt::white);
        break;
    case DStyleOptionBackgroundGroup::Beginning:
//        PainterHelper::drawRect(painter, op->backgroundRect, Qt::white);
        break;
    case DStyleOptionBackgroundGroup::Middle:
//        PainterHelper::drawRect(painter, op->backgroundRect, Qt::white);
        break;
    case DStyleOptionBackgroundGroup::End:
//        PainterHelper::drawRect(painter, op->backgroundRect, Qt::white);
        break;
    default:
        break;
    }

    return true;
}
} // namespace dstyle
