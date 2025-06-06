#include <iostream>
#include <thread>
#include <chrono>

namespace evangelion
{

    /* evangelion unit 02 */
    class EvaUnit02
    {

    private:
        std::string pilot_{ "" };
        int syncRate_{ 0 };

    public:
        EvaUnit02(const std::string &pilot) : pilot_(pilot), syncRate_(40) {}

        void activate()
        {
            std::cout << "[EVA-02]: Activating Entry Plug for pilot: " << pilot_ << std::endl;
            synchronize();
        }

        void synchronize()
        {
            std::cout << "[EVA-02]: Synchronization starting..." << std::endl;
            for (; syncRate_ <= 95; syncRate_ += 15)
            {
                std::cout << "[EVA-02]: Sync rate: " << syncRate_ << "%" << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(500));
            }
            std::cout << "[EVA-02]: Synchronization complete. A.T. Field active!" << std::endl;
        }

        void engageEnemy(const std::string& enemyType)
        {
            std::cout << "[EVA-02]: Enemy identified: " << enemyType << std::endl;
            std::cout << "[EVA-02]: Deploying weapons systems..." << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << "[EVA-02]: Combat performance optimal. Enemy neutralized!" << std::endl;
        }

        void shutdown()
        {
            std::cerr << "[EVA-02]: Critical damage sustained. Shutting down... Pilot vitals failing." << std::endl;
        }
    };
}

int main()
{
    evangelion::EvaUnit02 エヴァンゲリオン弐号機("Asuka Langley Soryu");
    エヴァンゲリオン弐号機.activate();
    エヴァンゲリオン弐号機.engageEnemy("Mass Production EVA Units");
    エヴァンゲリオン弐号機.shutdown();
    return 0;
}