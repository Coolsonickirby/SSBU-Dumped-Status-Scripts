
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RefletSpecialNTronEnd_end(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_THUNDER);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar3 = FIGHTER_KIND_KIRBY;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  uVar6 = lib::L2CValue::operator__(aLStack80,pLVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_THUNDER_SWORD_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x59ae5c70f);
      lib::L2CValue::L2CValue(aLStack96,0xc10da98ed);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      lVar8 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar7,lVar8);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x59ae5c70f);
      lib::L2CValue::L2CValue(aLStack96,0xd1b9542a4);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      lVar8 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar7,lVar8);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

