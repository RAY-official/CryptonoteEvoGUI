#pragma once

#include <QJsonObject>
#include <QVariant>

#include "JsonRpcObject.h"

namespace QJsonRpc {

class JsonRpcNotification : public JsonRpcObject {
  Q_DISABLE_COPY(JsonRpcNotification)

public:
  JsonRpcNotification();
  explicit JsonRpcNotification(const QJsonObject& _jsonObject);
  virtual ~JsonRpcNotification();

  QString getMethod() const;
  QVariantList getParamsAsArray() const;
  QVariantMap getParamsAsObject() const;

  void setMethod(const QString& _method);
  void setParamsFromArray(const QVariantList& _variantList);
  void setParamsFromObject(const QVariantMap& _variantMap);
};

}
