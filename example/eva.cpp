#include <iostream>
#include <thread>
#include <chrono>

class EvaUnit01 {
public:
    void pilot(const std::string& pilotName) {
        std::cout << "[ EVA-01 ] Pilot recognized: " << pilotName << std::endl;
    }

    void synchronize() {
        std::cout << "[ EVA-01 ] Synchronizing neural link..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "[ EVA-01 ] Synchronization Rate: 39%... 50%... 72%... 89%..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "[ EVA-01 ] Entry Plug locked, A.T. Field active." << std::endl;
    }

    void engage(const std::string& angelName) {
        std::cout << "[ EVA-01 ] Target detected: Angel '" << angelName << "' approaching." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "[ EVA-01 ] Deploying Progressive Knife." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "[ EVA-01 ] Engaging " << angelName << "'s A.T. Field..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "[ EVA-01 ] Penetration unsuccessful... " << angelName << " is retaliating!" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "[ EVA-01 ] Damage critical! Control is unstable..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

    void berserk() {
        std::cout << "[ EVA-01 ] Control lost... Going \033[1;31mBERSERK\033[0m!" << std::endl;
    }
};

int main() {
    EvaUnit01 エヴァンゲリオン初号機;
    エヴァンゲリオン初号機.pilot("Shinji Ikari");
    エヴァンゲリオン初号機.synchronize();
    エヴァンゲリオン初号機.berserk();
    std::cout << "[ EVA-01 ] Mission Start." << std::endl;

    return 0;
}