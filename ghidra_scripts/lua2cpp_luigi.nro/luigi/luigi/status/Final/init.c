
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLuigi::status::Final_init(L2CFighterLuigi *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ItemKind IVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_ROCKETBELT);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_FINAL_IS_ROCKET_BELT_ATTACHED);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_ROCKETBELT);
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::L2CValue(aLStack112,true);
    IVar5 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    bVar3 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::ItemModule__eject_attach_impl
              (this->moduleAccessor,IVar5,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_FINAL_IS_ROCKET_BELT_ATTACHED);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

