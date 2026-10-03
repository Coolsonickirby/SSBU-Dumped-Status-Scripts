
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100024b90(long param_1)

{
  int iVar1;
  Hash40 HVar2;
  float fVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x11bf9ca033);
  HVar2 = lib::L2CValue::as_hash(aLStack48);
  fVar3 = (float)app::lua_bind::FighterMotionModuleImpl__get_cancel_frame_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,true);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0.0);
  lib::L2CValue::operator+(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  fVar3 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar3,iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

