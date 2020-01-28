modded class PluginManager
{
	void PluginManager()
	{
		Print("Vanilla++ AdminTools Plugins Registering..");
	}

	override void Init()
	{
		super.Init();
		//----------------------------------------------------------------------
		// 						   Register modules
		//----------------------------------------------------------------------
		//		        Module Class Name 				Client	Server
		//----------------------------------------------------------------------

		RegisterPlugin("VPPUIManager",			    	 true,      false);
		RegisterPlugin("ClientPlayerListManager",		 true,		true);

		if(GetGame().IsServer() && GetGame().IsMultiplayer())
		{
			RegisterPlugin("XMLEditor", 			 		 false, 	true);
			RegisterPlugin("PluginFileHandler", 			 false, 	true);
			RegisterPlugin("LogManager",					 false,		true);
			RegisterPlugin("PermissionManager",			 	 false, 	true);
			RegisterPlugin("BansManager",			 	 	 false, 	true);
			RegisterPlugin("WebHooksManager",				 false,		true);
			RegisterPlugin("AdminTools",					 false, 	true);
			RegisterPlugin("ChatCommandManager",			 false, 	true);
			RegisterPlugin("WeatherManager", 				 false,     true);
			RegisterPlugin("TimeManager", 					 false,     true);
			RegisterPlugin("PlayerManager", 				 false,     true);
			RegisterPlugin("ServerManager", 				 false,     true);
			RegisterPlugin("TeleportManager",				 false,		true);
			RegisterPlugin("VPPItemManager",		         false,		true);
			RegisterPlugin("VPPESPTools",		             false,		true);
			RegisterPlugin("BuildingSetManager", 			 false, 	true);

			MakeDirectory("$profile:VPPAdminTools");
			MakeDirectory("$profile:VPPAdminTools/ConfigurablePlugins");
			MakeDirectory("$profile:VPPAdminTools/Exports");
		}
	}
};
