#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class FilteredByHashTransactionsModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(FilteredByHashTransactionsModel)

public:
  explicit FilteredByHashTransactionsModel(QObject* _parent);
  ~FilteredByHashTransactionsModel();

  void setFilter(const QString& _hash);

protected:
  virtual bool filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const override;

private:
  QString m_hash;
};

}
