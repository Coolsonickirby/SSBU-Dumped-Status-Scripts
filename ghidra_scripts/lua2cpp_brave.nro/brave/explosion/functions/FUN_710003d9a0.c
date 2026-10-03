
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003d9a0(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack112,false);
  HVar4 = lib::L2CValue::as_hash(param_2);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::MotionModule__change_motion_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,fVar5,fVar6,(bool)(bVar1 & 1),
             0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar2 = lib::L2CValue::as_integer(param_3);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar2 = lib::L2CValue::as_integer(param_3);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

