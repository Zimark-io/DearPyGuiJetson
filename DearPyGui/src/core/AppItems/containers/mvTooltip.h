#pragma once

#include "mvItemRegistry.h"

namespace Marvel {

	MV_REGISTER_WIDGET(mvTooltip, MV_ITEM_DESC_CONTAINER | MV_ITEM_DESC_HANDLER, StorageValueTypes::Bool, 1);
	class mvTooltip : public mvAppItem
	{
	public:

		static void InsertParser(std::map<std::string, mvPythonParser>* parsers);

		MV_APPLY_WIDGET_REGISTRATION(mvAppItemType::mvTooltip, add_tooltip)
		MV_NO_COMMANDS
		MV_DEFAULT_PARENTS
		MV_DEFAULT_CHILDREN
		MV_NO_CONSTANTS

		MV_SET_STATES(MV_STATE_NONE);

	public:

		explicit mvTooltip(mvUUID uuid);

		void draw(ImDrawList* drawlist, float x, float y) override;
		void handleSpecificRequiredArgs(PyObject* dict) override;

	};

}