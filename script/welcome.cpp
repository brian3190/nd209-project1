#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginWelcome : public WorldPlugin
  {
    public: WorldPluginWelcome() : WorldPlugin()
            {
              printf("Welcome to Project1!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginWelcome)
}
