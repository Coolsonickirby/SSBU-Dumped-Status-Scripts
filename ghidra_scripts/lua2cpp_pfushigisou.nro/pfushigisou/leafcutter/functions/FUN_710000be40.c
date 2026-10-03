
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000be40(long param_1)

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
  
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PFUSHIGISOU_LEAFCUTTER_INSTANCE_WORK_ID_FLOAT_FLY_ANGLE)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,fVar3);
  lib::L2CValue::L2CValue
            (aLStack128,_WEAPON_PFUSHIGISOU_LEAFCUTTER_INSTANCE_WORK_ID_FLOAT_OWN_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar3);
  lib::L2CValue::operator+((L2CValue *)&local_30,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,90.0);
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  HVar2 = lib::L2CValue::as_hash(aLStack112);
  uVar4 = lib::L2CValue::as_number(aLStack64);
  uVar5 = lib::L2CValue::as_number(aLStack80);
  uVar6 = lib::L2CValue::as_number(aLStack96);
  local_30 = CONCAT44(uVar5,uVar4);
  uStack40 = (ulong)uVar6;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,(Vector3f *)&local_30,0,0);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

