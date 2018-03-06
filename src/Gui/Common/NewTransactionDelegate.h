#pragma once

#include <QStyledItemDelegate>

namespace WalletGui {

class NewTransactionDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(NewTransactionDelegate)

public:
  explicit NewTransactionDelegate(QObject* _parent);
  ~NewTransactionDelegate();
  QWidget* createEditor(QWidget* _parent, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
  void updateEditorGeometry(QWidget* _editor, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
  void setEditorData(QWidget* _editor, const QModelIndex& _index) const override;
};

}
