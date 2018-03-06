#pragma once

#include <QHeaderView>

namespace WalletGui {

class TransfersHeaderView : public QHeaderView {
  Q_OBJECT
  Q_DISABLE_COPY(TransfersHeaderView)

public:
  explicit TransfersHeaderView(QWidget* _parent);
  ~TransfersHeaderView();

protected:
  virtual void paintSection(QPainter* _painter, const QRect& _rect, int _logicalIndex) const override;
  virtual QSize sectionSizeFromContents(int _logicalIndex) const override;
};

}
