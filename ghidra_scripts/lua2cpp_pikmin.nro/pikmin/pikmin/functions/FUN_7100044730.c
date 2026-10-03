
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100044730(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_ATTACK_HI4_WORK_INT_SUPPORT_FALL_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator<(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) goto LAB_7100044850;
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x14);
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::operator=(pLVar4,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x15);
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::operator=(pLVar4,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_ATTACK_HI4_WORK_INT_SUPPORT_FALL_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  }
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100044850:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

