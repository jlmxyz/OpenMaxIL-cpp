#pragma once

#include "Component.h"

namespace MMAL {

class Resize : public MMAL::Component
{
public:
	Resize( uint32_t width, uint32_t height, bool verbose = false );
	~Resize();

	int SetupTunnel( Component* next, uint8_t port_input = 0 );

	uint32_t width() const;
	uint32_t height() const;

protected:
	uint32_t mWidth;
	uint32_t mHeight;
};

} // namespace MMAL
