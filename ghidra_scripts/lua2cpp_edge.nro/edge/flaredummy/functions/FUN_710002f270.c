
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002f270(long param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  fVar2 = (float)app::lua_bind::PostureModule__rot_x_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),0);
  lib::L2CValue::L2CValue(aLStack64,fVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,2);
  lib::L2CValue::operator*((L2CValue *)&local_30,(L2CValue *)&CONTROL_PAD_BUTTON_GUARD);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_FLOAT_SPEED);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,fVar2);
  lib::L2CValue::operator*(aLStack112,(L2CValue *)&local_30);
  lib::L2CValue::operator+(aLStack64,aLStack96);
  lib::L2CValue::operator=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar3 = lib::L2CValue::as_number(aLStack64);
  uVar4 = lib::L2CValue::as_number(aLStack80);
  uVar5 = lib::L2CValue::as_number(aLStack96);
  local_30 = CONCAT44(uVar4,uVar3);
  uStack40 = (ulong)uVar5;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_30,0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

