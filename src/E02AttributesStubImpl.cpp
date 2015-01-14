/*
 * E02Attributes.cpp
 *
 *  Created on: 14 sty 2015
 *      Author: slawek
 */

#include "E02AttributesStubImpl.hpp"

namespace commonapi {
namespace attributes {

E02AttributesStubImpl::E02AttributesStubImpl() : remoteEventHandler_(this), xAttributeValue_(0), fAttributeValue_(0.0f) {
}

E02AttributesStubRemoteEvent* E02AttributesStubImpl::initStubAdapter(const std::shared_ptr<E02AttributesStubAdapter>& stubAdapter) {
	CommonAPI::Stub<E02AttributesStubAdapter, E02AttributesStubRemoteEvent>::stubAdapter_ = stubAdapter;
	return &remoteEventHandler_;
}

const CommonAPI::Version& E02AttributesStubImpl::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) {
	return interfaceVersion_;
}

E02AttributesStubImpl::~E02AttributesStubImpl() {
}

const int32_t& E02AttributesStubImpl::getXAttribute() {
	return xAttributeValue_;
}

const int32_t& E02AttributesStubImpl::getXAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
	return getXAttribute();
}

void E02AttributesStubImpl::setXAttribute(int32_t value) {
	xAttributeValue_ = std::move(value);
	stubAdapter_->fireXAttributeChanged(xAttributeValue_);
}

void E02AttributesStubImpl::setXAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t value) {
	setXAttribute(value);
}

const CommonTypes::a1Struct& E02AttributesStubImpl::getA1Attribute() {
}

const CommonTypes::a1Struct& E02AttributesStubImpl::getA1Attribute(
		const std::shared_ptr<CommonAPI::ClientId> clientId) {
}

void E02AttributesStubImpl::setA1Attribute(CommonTypes::a1Struct value) {
}

void E02AttributesStubImpl::setA1Attribute(const std::shared_ptr<CommonAPI::ClientId> clientId,
		CommonTypes::a1Struct value) {
}

const float& E02AttributesStubImpl::getFAttribute() {
	return fAttributeValue_;
}

const float& E02AttributesStubImpl::getFAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
	return getFAttribute();
}

void E02AttributesStubImpl::setFAttribute(float value) {
}

void E02AttributesStubImpl::onRemoteXAttributeChanged() {
}

void E02AttributesStubImpl::onRemoteA1AttributeChanged() {
}

commonapi::attributes::E02AttributesStubImpl::RemoteEventHandler::RemoteEventHandler(E02AttributesStubImpl* stubImpl) {
}

bool E02AttributesStubImpl::RemoteEventHandler::onRemoteSetXAttribute(int32_t value) {
}

bool E02AttributesStubImpl::RemoteEventHandler::onRemoteSetXAttribute(
		const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t value) {
}

void E02AttributesStubImpl::RemoteEventHandler::onRemoteXAttributeChanged() {
}

bool E02AttributesStubImpl::RemoteEventHandler::onRemoteSetA1Attribute(
		CommonTypes::a1Struct value) {
}

bool E02AttributesStubImpl::RemoteEventHandler::onRemoteSetA1Attribute(
		const std::shared_ptr<CommonAPI::ClientId> clientId, CommonTypes::a1Struct value) {
}

void commonapi::attributes::E02AttributesStubImpl::RemoteEventHandler::onRemoteA1AttributeChanged() {
}

}
}


