
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014ac0(long param_1)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  KineticEnergyNormal *pKVar6;
  ulong *puVar7;
  float fVar8;
  uint uVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  pvVar2 = (void *)app::lua_bind::KineticModule__get_energy_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,pvVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar8);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::operator*((L2CValue *)&local_40,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0xb7723336f);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  uVar3 = lib::L2CValue::operator<((L2CValue *)&local_40,aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::operator+(aLStack96,aLStack112);
    lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_40);
  }
  else {
    lib::L2CValue::operator-(aLStack96,aLStack112);
    lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_40);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack144,0xd3782685c);
  pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(ulong)pLVar5,uVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar5);
  uVar3 = lib::L2CValue::operator<((L2CValue *)&local_40,aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    uVar3 = lib::L2CValue::operator<(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
      lib::L2CValue::operator*(aLStack128,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::operator=(aLStack96,aLStack144);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
      lib::L2CValue::operator*(aLStack128,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::operator=(aLStack96,aLStack144);
    }
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar3 = lib::L2CValue::as_number(aLStack96);
  uVar9 = lib::L2CValue::as_number(aLStack144);
  local_40 = uVar3 & 0xffffffff | (ulong)uVar9 << 0x20;
  uStack56 = 0;
  pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack80);
  puVar7 = &local_40;
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar6,(Vector2f *)puVar7);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack96,(L2CValue *)puVar7);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar8,iVar1);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

