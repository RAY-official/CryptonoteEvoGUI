#pragma once

#include <QDateTime>
#include <QSortFilterProxyModel>

namespace WalletGui {

class FilteredTransactionsModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(FilteredTransactionsModel)

public:
  explicit FilteredTransactionsModel(QObject* _parent);
  ~FilteredTransactionsModel();

  QVariant headerData(int _section, Qt::Orientation _orientation, int _role = Qt::DisplayRole) const override;

protected:
  bool filterAcceptsColumn(int _source_column, const QModelIndex& _sourceParent) const override;
};


}
