
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000ef60(L2CFighterMiigunner *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_LW3_HOLD);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_LW3_HIT);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_STATUS_ABSORBER_WORK_INT_EFFECT_HANDLE);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack96,iVar1);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator<=(aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        uVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar2,true,true);
      }
      lib::L2CValue::L2CValue(aLStack80,-1);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIGUNNER_STATUS_ABSORBER_WORK_INT_EFFECT_HANDLE);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

