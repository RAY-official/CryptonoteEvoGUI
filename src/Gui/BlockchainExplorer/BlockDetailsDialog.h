#pragma once

#include <QDataWidgetMapper>
#include <QDialog>

namespace Ui {
class BlockDetailsDialog;
}

namespace WalletGui {

class BlockDetailsDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(BlockDetailsDialog)

public:
  BlockDetailsDialog(QAbstractItemModel* m_blockChainModel, const QModelIndex& _index, QWidget* _parent);
  ~BlockDetailsDialog();

  virtual bool eventFilter(QObject* _object, QEvent* _event) override;

private:
  QScopedPointer<Ui::BlockDetailsDialog> m_ui;
  QDataWidgetMapper m_mapper;
};

}
