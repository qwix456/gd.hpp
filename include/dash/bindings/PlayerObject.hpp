#pragma once

#include "../internal.hpp"

namespace gd {
    class PlayerObject {
    public:
        SETUP_MEMBER(cocos2d::CCPoint, m_position, "PlayerObject::m_position")
        SETUP_MEMBER(double, m_yAccel, "PlayerObject::m_yAccel")
        SETUP_MEMBER(double, m_xAccel, "PlayerObject::m_xAccel")
        SETUP_MEMBER(float, m_playerSpeed, "PlayerObject::m_playerSpeed")
        SETUP_MEMBER(float, m_playerSize, "PlayerObject::m_playerSize")
        SETUP_MEMBER(bool, m_isShip, "PlayerObject::m_isShip")
        SETUP_MEMBER(bool, m_isBird, "PlayerObject::m_isBird")
        SETUP_MEMBER(bool, m_isBall, "PlayerObject::m_isBall")
        SETUP_MEMBER(bool, m_isDart, "PlayerObject::m_isDart")
        SETUP_MEMBER(bool, m_isRobot, "PlayerObject::m_isRobot")
        SETUP_MEMBER(bool, m_isSpider, "PlayerObject::m_isSpider")
        SETUP_MEMBER(bool, m_isJetpack, "PlayerObject::m_isJetpack")
        SETUP_MEMBER(bool, m_isSwing, "PlayerObject::m_isSwing")
        SETUP_MEMBER(bool, m_isHolding, "PlayerObject::m_isHolding")
        SETUP_MEMBER(bool, m_isSliding, "PlayerObject::m_isSliding")
    };
}