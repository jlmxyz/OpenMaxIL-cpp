#pragma once

#include "Component.h"

namespace IL {

class VideoSplitter : public IL::Component
{
public:
	VideoSplitter( bool verbose = false );
	~VideoSplitter();

protected:
	virtual OMX_ERRORTYPE EventHandler( OMX_EVENTTYPE event, OMX_U32 data1, OMX_U32 data2, OMX_PTR eventdata );
};

} // namespace IL