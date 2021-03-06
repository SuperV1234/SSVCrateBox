// Copyright (c) 2013 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0

#ifndef CPLAYER_H
#define CPLAYER_H

#include <SFML/Graphics.hpp>
#include <SSVEntitySystem/SSVEntitySystem.h>
#include <SSVSCollision/SSVSCollision.h>
#include "CBGame.h"
#include "CPhysics.h"

namespace cb
{
	class CPlayer : public sses::Component
	{
		private:
			CBGame& cbGame;
			CPhysics& cPhysics;
			ssvsc::Body& body;
			bool canJump{false};

		public:
			CPlayer(sses::Entity& mEntity, CBGame& mCBGame, CPhysics& mCPhysics);

			void update(float) override;
	};
}


#endif
