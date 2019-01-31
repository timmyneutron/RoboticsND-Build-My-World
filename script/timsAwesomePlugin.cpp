#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginTimsAwesomeRobot : public WorldPlugin
  {
    public: WorldPluginTimsAwesomeRobot() : WorldPlugin()
    {
      printf("Welcome to Tim's world!\n");
    }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
    }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginTimsAwesomeRobot)
}
