#include "Subject.hpp"

#include <iostream>

void Subject::Attach(Observer* obs) {
    std::cout << "Attaching " << std::hex << obs << "..\n";
    m_obs.insert(obs);
}

void Subject::Detach(Observer* obs) {
    std::cout << "Detaching " << std::hex << obs << "..\n";
    m_obs.erase(obs);
}

void Subject::Notify() {
    for (auto obs : m_obs) {
        std::cout << "Notifying " << std::hex << obs << " ..\n";
        obs->Update(this);
    }
}
