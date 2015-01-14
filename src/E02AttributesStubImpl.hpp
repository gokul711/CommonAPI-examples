/*
 * E02Attributes.hpp
 *
 *  Created on: 14 sty 2015
 *      Author: slawek
 */

#ifndef E02ATTRIBUTESSTUBIMPL_HPP_
#define E02ATTRIBUTESSTUBIMPL_HPP_

#include <commonapi/attributes/E02AttributesStub.h>

namespace commonapi {
namespace attributes {

class E02AttributesStubImpl: public virtual E02AttributesStub {
public:

	E02AttributesStubRemoteEvent* initStubAdapter(
			const std::shared_ptr<E02AttributesStubAdapter>& stubAdapter);

	const CommonAPI::Version& getInterfaceVersion(
			std::shared_ptr<CommonAPI::ClientId> clientId);

	E02AttributesStubImpl();

	virtual ~E02AttributesStubImpl();

	virtual const int32_t& getXAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
	virtual void setXAttribute(int32_t value);
	virtual void setXAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t value);
	virtual const CommonTypes::a1Struct& getA1Attribute();
	virtual const CommonTypes::a1Struct& getA1Attribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
	virtual void setA1Attribute(CommonTypes::a1Struct value);
	virtual void setA1Attribute(const std::shared_ptr<CommonAPI::ClientId> clientId, CommonTypes::a1Struct value);
	virtual const float& getFAttribute();
	virtual const float& getFAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
	virtual void setFAttribute(float value);

protected:
	virtual void onRemoteXAttributeChanged();
	virtual void onRemoteA1AttributeChanged();

	class RemoteEventHandler: public virtual E02AttributesStubRemoteEvent {
	public:
		RemoteEventHandler(E02AttributesStubImpl* stubImpl);

		virtual bool onRemoteSetXAttribute(int32_t value);
		virtual bool onRemoteSetXAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t value);
		virtual void onRemoteXAttributeChanged();

		virtual bool onRemoteSetA1Attribute(CommonTypes::a1Struct value);
		virtual bool onRemoteSetA1Attribute(const std::shared_ptr<CommonAPI::ClientId> clientId,
				CommonTypes::a1Struct value);
		virtual void onRemoteA1AttributeChanged();

	private:
		E02AttributesStubImpl* mStubImpl;
	};

private:
	E02AttributesStubImpl::RemoteEventHandler remoteEventHandler_;

	int32_t xAttributeValue_;
	CommonTypes::a1Struct a1AttributeValue_;
	float fAttributeValue_;

	CommonAPI::Version interfaceVersion_;
};

}
}

#endif /* E02ATTRIBUTESSTUBIMPL_HPP_ */
