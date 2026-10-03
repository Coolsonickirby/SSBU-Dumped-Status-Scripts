
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016f00(long param_1)

{
  int iVar1;
  Hash40 HVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_30,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_WORK_FLOAT_GROUND_MOTION_ROT);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_30);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::L2CValue(aLStack80,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,360.0);
  lib::L2CValue::operator-((L2CValue *)&local_30,aLStack64);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  uVar4 = lib::L2CValue::as_number(aLStack96);
  uVar5 = lib::L2CValue::as_number(aLStack112);
  uVar6 = lib::L2CValue::as_number(aLStack128);
  local_30 = CONCAT44(uVar5,uVar4);
  uStack40 = (ulong)uVar6;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,(Vector3f *)&local_30,0,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

