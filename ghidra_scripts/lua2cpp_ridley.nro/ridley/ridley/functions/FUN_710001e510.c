
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e510(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  float fVar4;
  uint uVar5;
  long lVar6;
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_WORK_FLOAT_GROUND_DEGREE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator+(param_2,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_WORK_FLOAT_GROUND_DEGREE);
  fVar4 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack112);
  fVar4 = (float)app::lua_bind::PostureModule__rot_x_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::operator*((L2CValue *)&local_50,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  uVar2 = lib::L2CValue::operator==(aLStack112,param_2);
  if ((uVar2 & 1) != 0) goto LAB_710001e868;
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_DEGREE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-1e-05);
  uVar2 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
LAB_710001e6bc:
    pLVar3 = aLStack96;
    lib::L2CValue::operator-(param_2,pLVar3);
    lib::L2CAgent::math_abs((L2CAgent *)auStack160,pLVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1e-05);
    uVar2 = lib::L2CValue::operator<((L2CValue *)&local_50,(L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    if ((uVar2 & 1) != 0) goto LAB_710001e714;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1e-05);
    uVar2 = lib::L2CValue::operator<(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar2 & 1) == 0) goto LAB_710001e6bc;
LAB_710001e714:
    lib::L2CValue::operator-(param_2,aLStack112);
    lib::L2CValue::operator/((L2CValue *)(auStack160 + 0x10),param_3);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  }
  lib::L2CValue::operator+(aLStack112,aLStack128);
  lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  pLVar3 = param_2;
  lib::L2CValue::operator-(aLStack112,param_2);
  lib::L2CAgent::math_abs((L2CAgent *)auStack160,pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1e-05);
  uVar2 = lib::L2CValue::operator<((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::operator=(aLStack112,param_2);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_DEGREE);
  fVar4 = (float)lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue(aLStack128);
LAB_710001e868:
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar4);
  lib::L2CValue::operator*(aLStack112,(L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  uVar2 = lib::L2CValue::as_number(aLStack128);
  lVar6 = lib::L2CValue::as_number((L2CValue *)auStack160);
  uVar5 = lib::L2CValue::as_number(aLStack176);
  local_50 = uVar2 & 0xffffffff | lVar6 << 0x20;
  uStack72 = (ulong)uVar5;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_50,0);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

