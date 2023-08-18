
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopag::status::SpecialN_init(L2CFighterKoopag *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  long lVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack80,-1);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_PREV_STEP);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,-1);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_PREV_GENERATE_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,-1);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_SE1_HANDLE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,-1);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_SE2_HANDLE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_KIRBY);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_KOOPAG);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x14d6954b2c);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_SE2_ID);
      lVar5 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar1);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x4a7f3f69c);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_HEAD_NODE);
      lVar5 = lib::L2CValue::as_integer(aLStack96);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x15a756c762);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_SE2_ID);
      lVar5 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar1);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x4a7f3f69c);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_HEAD_NODE);
      lVar5 = lib::L2CValue::as_integer(aLStack96);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar1);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x14d6954b2c);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_SE2_ID);
    lVar5 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x4a7f3f69c);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_HEAD_NODE);
    lVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar1);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

