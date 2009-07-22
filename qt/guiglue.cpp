/*
 *  guiglue.cpp
 *  dismember
 *
 *  Created by David Carne on 14/02/08.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */

#include "guiglue.h"
#include "runtimemodel.h"
#include "document.h"

WorkspaceGui *setupWorkspaceGui(Workspace &doc)
{ 
	return QTRuntimeModel::create(doc);
}

WorkspaceGui::~WorkspaceGui()
{}