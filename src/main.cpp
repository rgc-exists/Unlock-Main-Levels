#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/LevelPage.hpp>

class $modify(LevelPage) {
	void onPlay(cocos2d::CCObject * sender) {
		auto requiredCoins = m_level->m_requiredCoins;
		m_level->m_requiredCoins = 0;
		LevelPage::onPlay(sender);
		m_level->m_requiredCoins = requiredCoins;
	}
	void updateDynamicPage(GJGameLevel * level) {
		auto requiredCoins = level->m_requiredCoins;
		level->m_requiredCoins = 0;
		LevelPage::updateDynamicPage(level);
		level->m_requiredCoins = requiredCoins;
	}
};
