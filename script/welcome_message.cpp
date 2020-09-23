#include <gazebo/gazebo.hh>

namespace gazebo
{
    class HelloMsgPlugin : public WorldPlugin
    {
    	public: HelloMsgPlugin() : WorldPlugin()
		    {
		    	printf("Welcome to Sreenithi's World!\n");
		    }
		    
	public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		    {}        
    };
  	
  	GZ_REGISTER_WORLD_PLUGIN(HelloMsgPlugin)
}

