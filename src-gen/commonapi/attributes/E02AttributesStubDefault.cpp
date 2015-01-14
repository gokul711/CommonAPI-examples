/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <commonapi/attributes/E02AttributesStubDefault.h>

namespace commonapi {
namespace attributes {

E02AttributesStubDefault::E02AttributesStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(E02Attributes::getInterfaceVersion()) {
}

const CommonAPI::Version& E02AttributesStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) {
    return interfaceVersion_;
}

E02AttributesStubRemoteEvent* E02AttributesStubDefault::initStubAdapter(const std::shared_ptr<E02AttributesStubAdapter>& stubAdapter) {
    CommonAPI::Stub<E02AttributesStubAdapter, E02AttributesStubRemoteEvent>::stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}












const int32_t& E02AttributesStubDefault::getXAttribute() {
    return xAttributeValue_;
}

const int32_t& E02AttributesStubDefault::getXAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getXAttribute();
}

void E02AttributesStubDefault::setXAttribute(int32_t value) {
    const bool valueChanged = trySetXAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireXAttributeChanged(xAttributeValue_);
    }
}

bool E02AttributesStubDefault::trySetXAttribute(int32_t value) {
    if (!validateXAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (xAttributeValue_ != value);
    xAttributeValue_ = std::move(value);
    return valueChanged;
}

bool E02AttributesStubDefault::validateXAttributeRequestedValue(const int32_t& value) {
    return true;
}

void E02AttributesStubDefault::setXAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t value) {
    setXAttribute(value);
}

void E02AttributesStubDefault::onRemoteXAttributeChanged() {
    // No operation in default
}

void E02AttributesStubDefault::RemoteEventHandler::onRemoteXAttributeChanged() {
    defaultStub_->onRemoteXAttributeChanged();
}

bool E02AttributesStubDefault::RemoteEventHandler::onRemoteSetXAttribute(int32_t value) {
    return defaultStub_->trySetXAttribute(std::move(value));
}

bool E02AttributesStubDefault::RemoteEventHandler::onRemoteSetXAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t value) {
    return onRemoteSetXAttribute(value);
}



















const CommonTypes::a1Struct& E02AttributesStubDefault::getA1Attribute() {
    return a1AttributeValue_;
}

const CommonTypes::a1Struct& E02AttributesStubDefault::getA1Attribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getA1Attribute();
}

void E02AttributesStubDefault::setA1Attribute(CommonTypes::a1Struct value) {
    const bool valueChanged = trySetA1Attribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireA1AttributeChanged(a1AttributeValue_);
    }
}

bool E02AttributesStubDefault::trySetA1Attribute(CommonTypes::a1Struct value) {
    if (!validateA1AttributeRequestedValue(value))
        return false;

    const bool valueChanged = (a1AttributeValue_ != value);
    a1AttributeValue_ = std::move(value);
    return valueChanged;
}

bool E02AttributesStubDefault::validateA1AttributeRequestedValue(const CommonTypes::a1Struct& value) {
    return true;
}

void E02AttributesStubDefault::setA1Attribute(const std::shared_ptr<CommonAPI::ClientId> clientId, CommonTypes::a1Struct value) {
    setA1Attribute(value);
}

void E02AttributesStubDefault::onRemoteA1AttributeChanged() {
    // No operation in default
}

void E02AttributesStubDefault::RemoteEventHandler::onRemoteA1AttributeChanged() {
    defaultStub_->onRemoteA1AttributeChanged();
}

bool E02AttributesStubDefault::RemoteEventHandler::onRemoteSetA1Attribute(CommonTypes::a1Struct value) {
    return defaultStub_->trySetA1Attribute(std::move(value));
}

bool E02AttributesStubDefault::RemoteEventHandler::onRemoteSetA1Attribute(const std::shared_ptr<CommonAPI::ClientId> clientId, CommonTypes::a1Struct value) {
    return onRemoteSetA1Attribute(value);
}

const float& E02AttributesStubDefault::getFAttribute() {
    return fAttributeValue_;
}

const float& E02AttributesStubDefault::getFAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getFAttribute();
}

void E02AttributesStubDefault::setFAttribute(float value) {
    const bool valueChanged = trySetFAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireFAttributeChanged(fAttributeValue_);
    }
}

bool E02AttributesStubDefault::trySetFAttribute(float value) {
    if (!validateFAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (fAttributeValue_ != value);
    fAttributeValue_ = std::move(value);
    return valueChanged;
}

bool E02AttributesStubDefault::validateFAttributeRequestedValue(const float& value) {
    return true;
}






E02AttributesStubDefault::RemoteEventHandler::RemoteEventHandler(E02AttributesStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace attributes
} // namespace commonapi
