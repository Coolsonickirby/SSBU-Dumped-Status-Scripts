
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001481f0(L2CValue *param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x1f);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator&(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar1 & 1U) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x1f);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
    lib::L2CValue::operator&(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::ControlModule__check_button_on_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::~L2CValue(aLStack80);
        goto LAB_710014825c;
      }
      lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_ATTACK);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::ControlModule__check_button_on_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        iVar3 = 0;
        goto LAB_71001482c4;
      }
    }
  }
  else {
LAB_710014825c:
    lib::L2CValue::~L2CValue(aLStack96);
  }
  iVar3 = 1;
LAB_71001482c4:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

