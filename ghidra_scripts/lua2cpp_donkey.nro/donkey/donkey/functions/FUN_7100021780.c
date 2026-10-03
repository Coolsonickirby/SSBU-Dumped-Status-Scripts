
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021780(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  lVar3 = app::lua_bind::WorkModule__get_int64_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack64,lVar3);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar4 = lib::L2CValue::as_hash(aLStack64);
  fVar5 = (float)lib::L2CValue::as_number(aLStack96);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,fVar5,fVar6,(bool)(bVar1 & 1),
             0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

