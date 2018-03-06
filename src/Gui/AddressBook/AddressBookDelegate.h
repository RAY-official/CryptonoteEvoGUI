#pragma once

#include <QStyledItemDelegate>

namespace WalletGui {

class AddressBookDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(AddressBookDelegate)

public:
  explicit AddressBookDelegate(QObject* _parent);
  ~AddressBookDelegate();

  QWidget* createEditor(QWidget* _parent, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
  void updateEditorGeometry(QWidget* _editor, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;

Q_SIGNALS:
  void sendToSignal(const QString& _address) const;
  void editSignal(const QPersistentModelIndex& _index) const;
  void deleteSignal(const QPersistentModelIndex& _index) const;
};



}
