#include "ResizableScrollArea.h"

namespace WalletGui {

ResizableScrollArea::ResizableScrollArea(QWidget* _parent) : QScrollArea(_parent) {
}

ResizableScrollArea::~ResizableScrollArea() {
}

QSize ResizableScrollArea::sizeHint() const {
  if (widget() == nullptr || widget()->height() == 0) {
    return QScrollArea::sizeHint();
  }

  QList<QWidget*> childList = widget()->findChildren<QWidget*>(QString(), Qt::FindDirectChildrenOnly);
  int height = 0;
  for (QWidget* widgetItem : childList) {
    height += widgetItem->height();
  }

  return QSize(width(), height + 2);
}

}
