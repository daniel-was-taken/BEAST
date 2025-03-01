#include "beast.h"
#include "beastframe.h"

namespace BEAST {

bool BeastApp::OnInit(void)
{
//	wxLog::SetTraceMask(wxTraceMessages);

	wxString plugin;

	if (argc > 1)
	    plugin = argv[1];

	//Create the main frame window
	m_pBeastFrame = 
	  new BeastFrame
	  (
	       NULL, 
	       _T("BEAST - Bioinspired Evolutionary Agent Simulation Toolkit"),
	       wxPoint(50, 50), 
	       wxSize(808, 681), 
	       plugin.mb_str()
	 );

	// Show the frame
	m_pBeastFrame->Show(true);

	SetTopWindow(m_pBeastFrame);

	return true;
}

} // namespace BEAST

IMPLEMENT_WX_THEME_SUPPORT
IMPLEMENT_APP(BEAST::BeastApp)
