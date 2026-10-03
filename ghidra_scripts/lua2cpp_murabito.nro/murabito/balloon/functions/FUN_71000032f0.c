
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000032f0(long param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_BALLOON_INSTANCE_WORK_ID_FLOAT_ROT_X);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar2);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_MURABITO_BALLOON_INSTANCE_WORK_ID_FLOAT_ROT_Z);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack128,fVar2);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_MURABITO_BALLOON_INSTANCE_WORK_ID_FLOAT_TOP_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack160,fVar2);
  lib::L2CValue::operator-(aLStack128,aLStack160);
  uVar3 = lib::L2CValue::as_number(aLStack64);
  uVar4 = lib::L2CValue::as_number(aLStack96);
  uVar5 = lib::L2CValue::as_number(aLStack112);
  local_30 = CONCAT44(uVar4,uVar3);
  uStack40 = (ulong)uVar5;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_30,0);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

